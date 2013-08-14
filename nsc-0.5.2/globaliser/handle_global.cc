/*
    globaliser -- programmatically replace globals in C source code
    Copyright (C) 2003-2005 Sam Jansen

    This program is free software; you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by the Free
    Software Foundation; either version 2 of the License, or (at your option)
    any later version.

    This program is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
    more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc., 59
    Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/
// $Id$ 
#include <string>
#include <list>
#include <set>
#include <map>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <inttypes.h>
#include <cstring>
#include <stdio.h>
#include <assert.h>

#include "../sim/num_stacks.h"
#include "handle_global.h"
#include "node.h"

using namespace std;
extern int opt_verbose;

extern "C" {
    extern int lineno;
    extern int charno;
    extern const char *progname;
}

static string global_reference(const string &iden);
static string global_reference_toplevel(const string &iden, int);
string global_old_reference(const string &iden);
bool global_expand_decl(const string &iden, const string &funcname, bool pointer, bool array);
bool global_expand_decl_configured(const string& iden, const string& funcname);


void globaliser_report(int level, const string& str) {
    if (level <= opt_verbose) {
        fprintf(stderr, "globaliser:%d:%d: %s\n",
                lineno, charno, str.c_str());
    }
}

void globaliser_warn(const string& str) {
    fprintf(stderr, "globaliser:%d:%d: warning: %s\n",
            lineno, charno, str.c_str());
}

void globaliser_report_error(const string& error_str) {
    fprintf(stderr, "%s: globaliser:%d:%d: %s\n",
            progname, lineno, charno, error_str.c_str());
    exit(1);
}


struct SGlobal
{
    string s_identifier;
    string s_function;
    string s_mangled;
    enum Command {
        t_normal,
        t_section,
        t_section_stopstart,
        t_ignored,
    } e_cmd;
    bool b_expanded_decl;
    

    SGlobal(const string &s_iden)
        : s_identifier(s_iden), s_mangled(s_iden), e_cmd(t_normal), 
          b_expanded_decl(false)
    {
    }

    SGlobal(const string &s_iden, Command cmd)
        : s_identifier(s_iden), s_mangled(s_iden), e_cmd(cmd),
          b_expanded_decl(false)
    {
    }
        

    SGlobal(const string &s_iden, const string &s_func)
        : s_identifier(s_iden), s_function(s_func), e_cmd(t_normal),
          b_expanded_decl(false)
    {
        s_mangled = s_func + string("/") + s_iden;
    }

    bool operator ==(const SGlobal &g) const {
        if(s_mangled.compare(g.s_mangled) == 0)
            return true;
        return false;
    }
};

struct SGlobalComparitor
{
    size_t operator ()(const SGlobal &a, const SGlobal &x) const {
        return strcmp(a.s_mangled.c_str(), x.s_mangled.c_str()) < 0;
    }
};

class NewSymbol
{
public:
    // Extern here either means an explicit 'extern', or just a forward
    // declaration. There is no distinction in modern C.
    enum Specifiers { EXTERN = 1, ARRAY = 2, POINTER = 4, STATIC_LOCAL = 8 };
    enum Type { VARIABLE, FUNCTION, STRUCT_VARIABLE, ENUM_VARIABLE };

    NewSymbol(const string& identifier, Type type, uint32_t specifiers) 
        : m_identifier(identifier), m_type(type), m_specifiers(specifiers),
          m_mangled_old_method(true) {
    }

    // Copy constructor
    NewSymbol(const NewSymbol& rhs)
        : m_identifier(rhs.m_identifier), m_type(rhs.m_type),
          m_specifiers(rhs.m_specifiers),
          m_mangled_identifier(rhs.m_mangled_identifier),
          m_struct_name(rhs.m_struct_name),
          m_mangled_old_method(rhs.m_mangled_old_method) {
    }

    bool is_variable() const {
      return m_type == VARIABLE || m_type == STRUCT_VARIABLE
        || m_type == ENUM_VARIABLE;
    }
    const string& identifier() const { return m_identifier; }
    Type type() const { return m_type; }
    bool is_extern() const { return (m_specifiers & EXTERN) != 0; }
    bool is_array() const { return (m_specifiers & ARRAY) != 0; }
    bool is_pointer() const { return (m_specifiers & POINTER) != 0; }
    bool is_static_local() const { return (m_specifiers & STATIC_LOCAL) != 0; }
    const string& latest_mangled_identifier() const { return m_mangled_identifier; }
    bool mangled_old_method() const { return m_mangled_old_method; }
    const string& struct_name() const { return m_struct_name; }

    void set_extern(bool new_extern) {
        if (new_extern) m_specifiers |= EXTERN;
        else m_specifiers &= ~EXTERN;
    }
    void set_array(bool new_array) {
        if (new_array) m_specifiers |= ARRAY;
        else m_specifiers &= ~ARRAY;
    }
    void set_mangled_identifier(const string& identifier) {
        m_mangled_identifier = identifier;
    }
    void set_mangled_old_method(bool old_method) {
        m_mangled_old_method = old_method;
    }
    void set_struct_name(const string& struct_name) {
        m_struct_name = struct_name;
    }

private:
    string m_identifier;
    Type m_type;
    uint32_t m_specifiers;
    string m_mangled_identifier;
    string m_struct_name;
    bool m_mangled_old_method;
};

struct NewSymbolLess {
    bool operator ()(const NewSymbol& a, const NewSymbol& b) const {
        return a.identifier() < b.identifier();
    }
};

typedef map<string, list<NewSymbol> > NewSymbolMap;
NewSymbolMap g_new_symbols;

// ns = NewSymbol

// Will be called by the parser whenever it encounters a function definition 
// or declaration. All declarations should have is_extern=true, while this
// will be false for a definition.
void global_ns_define_function(const string& identifier, bool is_extern) {
    NewSymbolMap::iterator i = g_new_symbols.find(identifier);
    if (i != g_new_symbols.end()) {
        NewSymbol& symbol = i->second.back();
        if (symbol.type() != NewSymbol::FUNCTION) {
            std::ostringstream oss;
            oss << "global namespace collision: identifier '" << identifier
                << "' defined as a function, was previously a variable.";
            globaliser_report_error(oss.str());
            return;
        }
        if (is_extern) {
            // Nothing of interest, you can 'extern', or forward declare, a
            // function as many times as you like.
            return;
        }
        if (!symbol.is_extern()) {
            // Generally functions shouldn't be defined more than once. In the
            // case of inline functions this seems to be allowed, however. So,
            // due to the general rule that our globaliser is not a strict
            // checker of C code, we just return here, rather than raise any
            // sort of error or warning.
            /*
            std::ostringstream oss;
            oss << "function '" << identifier << "' defined more than once.";
            globaliser_report_error(oss.str());
            */
            return;
        }
        symbol.set_extern(false);
    } else {
        list<NewSymbol> symbol_list;
        symbol_list.push_back(NewSymbol(identifier, NewSymbol::FUNCTION,
                    is_extern ? NewSymbol::EXTERN : 0));
        g_new_symbols.insert(std::make_pair(identifier, symbol_list));
    }

    std::ostringstream oss;
    oss << "Defining function '" << identifier << "'.";
    globaliser_report(3, oss.str());
}

// Will be called by the parser whenever it encounters a global variable
// definition or declaration. is_extern is used to denote whether it is a
// declaration.
void global_ns_define_variable(const string& identifier, bool is_extern,
        bool is_array, bool is_enum, bool is_pointer, bool is_var_static_local,
        const string& struct_type_name) {
    uint32_t specifiers = 0;
    if (is_extern) specifiers |= NewSymbol::EXTERN;
    if (is_array) specifiers |= NewSymbol::ARRAY;
    if (is_pointer) specifiers |= NewSymbol::POINTER;
    if (is_var_static_local) specifiers |= NewSymbol::STATIC_LOCAL;
    NewSymbol::Type type = NewSymbol::VARIABLE;

    if (!struct_type_name.empty()) {
        type = NewSymbol::STRUCT_VARIABLE;
        assert(!is_enum);
    }
    if (is_enum) {
        type = NewSymbol::ENUM_VARIABLE;
    }

    NewSymbol new_symbol(identifier, type, specifiers);
    new_symbol.set_struct_name(struct_type_name);

    NewSymbolMap::iterator i = g_new_symbols.find(identifier);
    if (i != g_new_symbols.end()) {
        NewSymbol& symbol = i->second.back();
        if (!is_var_static_local && !symbol.is_variable()) {
            std::ostringstream oss;
            oss << "global namespace collision: identifier '" << identifier
                << "' defined as a variable, previously it was a function.";
            globaliser_report_error(oss.str());
            return;
        }

        i->second.push_back(new_symbol);
    } else {
        list<NewSymbol> symbol_list;
        symbol_list.push_back(new_symbol);
        g_new_symbols.insert(std::make_pair(identifier, symbol_list));
    }

    std::ostringstream oss;
    oss << "Defining variable '" << identifier << "'.";
    globaliser_report(3, oss.str());
}

// This should be called when the globaliser modifies an existing global
// declaration. We stored the mangled identifier name in the symbol table so we
// can find it later when the global variable is referenced.
void global_ns_define_mangled_variable(const string& identifier,
        const string& new_identifier, bool old_method, bool is_extern, bool is_array,
        bool is_pointer, bool is_var_static_local) {
    NewSymbolMap::iterator i = g_new_symbols.find(identifier);
    if (i == g_new_symbols.end()) {
        std::ostringstream oss;
        oss << "referencing variable '" << identifier
           << "' that was not defined.";
        globaliser_report_error(oss.str());
        return;
    }
    uint32_t specifiers = 0;
    if (is_extern) specifiers |= NewSymbol::EXTERN;
    if (is_array) specifiers |= NewSymbol::ARRAY;
    if (is_pointer) specifiers |= NewSymbol::POINTER;
    if (is_var_static_local) specifiers |= NewSymbol::STATIC_LOCAL;
    NewSymbol symbol(identifier, NewSymbol::VARIABLE, specifiers);
    symbol.set_mangled_identifier(new_identifier);
    symbol.set_mangled_old_method(old_method);

    if (!is_var_static_local) {
        // If we're not a static local, we'll want to check if we've changed the
        // globalisation method: this suggests we haven't guessed new_method
        // correctly, and the user should set $expand_decl.
        // The only case this should happen in is with certain usages of
        // undefined then defined structures.
        list<NewSymbol>& l = i->second;

        for (list<NewSymbol>::iterator j = l.begin(); j != l.end(); ++j) {
            if (j->is_static_local())
              continue;
            if (!j->latest_mangled_identifier().empty() &&
                j->mangled_old_method() != symbol.mangled_old_method()) {
              std::ostringstream oss;
              oss << "Symbol '" << identifier
                  << "' should be declared $expand_decl due to use of undefined type";
              globaliser_warn(oss.str());
              break;
            }
        }
    }

    i->second.push_back(symbol);
}

// Should be called whenever a symbol goes out of scope (used for static local
// variables)
void global_ns_undefine_variable(const string& identifier) {
    NewSymbolMap::iterator i = g_new_symbols.find(identifier);
    if (i == g_new_symbols.end()) {
        assert(0);
    }
    assert (!i->second.empty());
    i->second.pop_back();
}

// Finds the most recent symbol that has a mangled identifier defined
NewSymbol& global_ns_find_mangled_symbol(list<NewSymbol>& l) {
    for (list<NewSymbol>::reverse_iterator i = l.rbegin();
            i != l.rend(); ++i) {
        if (!i->latest_mangled_identifier().empty())
            return *i;
    }
    std::ostringstream oss;
    oss << "Internal error: no mangled symbol " << l.back().identifier();
    globaliser_report_error(oss.str());
    return l.back();
}

// Returns the last mangled identifier for the original identifier passed in
string global_ns_get_mangled_identifier(const string& identifier) {
    NewSymbolMap::iterator i = g_new_symbols.find(identifier);
    assert(i != g_new_symbols.end());
    return global_ns_find_mangled_symbol(i->second).latest_mangled_identifier();
}

string global_ns_make_mangled_identifier_reference(const string& identifier,
        const string& funcname, bool is_var_static_local) {
    NewSymbolMap::iterator i = g_new_symbols.find(identifier);
    if (i == g_new_symbols.end()) {
        std::ostringstream oss;
        oss << "referencing variable '" << identifier << "' in function '"
            << funcname << "' that has not been declared.";
        globaliser_report_error(oss.str());
        return string();
    }

    NewSymbol& symbol = global_ns_find_mangled_symbol(i->second);
    string mangled = symbol.latest_mangled_identifier();

    bool use_old_method = false;

    if (symbol.is_array() || 
            global_expand_decl(identifier, funcname, symbol.is_pointer(), 
                symbol.is_array())) {
        use_old_method = false;
    } else {
        use_old_method = true;
    }
    
    if (use_old_method) {
        return global_old_reference(mangled);
    } else {
        // Use the "new" method; or the method we use on arrays
        return global_reference(mangled);
    }
}

string global_ns_make_mangled_identifier_reference_toplevel(
        const string& identifier, const string& funcname, int snum) {
    NewSymbolMap::iterator i = g_new_symbols.find(identifier);
    
    if (i != g_new_symbols.end()) {
        NewSymbol& symbol = global_ns_find_mangled_symbol(i->second);

        if (symbol.is_array()) {
            return global_reference_toplevel(identifier, snum);
        } else {
            return global_old_reference(symbol.latest_mangled_identifier());
        }
    } else {
        return global_reference_toplevel(identifier, snum);
    }
}

// Returns whether a global variable of a given type is declared
bool global_ns_is_declared(const string& identifier, NewSymbol::Type type) {
    NewSymbolMap::const_iterator i = g_new_symbols.find(identifier);
    if (i != g_new_symbols.end()) {
        return i->second.back().type() == type;
    }
    return false;
}

// Returns whether a global variable is declared and is a variable
bool global_ns_is_variable_declared(const string& identifier, NewSymbol::Type type) {
    NewSymbolMap::const_iterator i = g_new_symbols.find(identifier);
    if (i != g_new_symbols.end()) {
        return i->second.back().is_variable();
    }
    return false;
}

class Typedef
{
public:
    Typedef(const string& identifier, bool function)
        : m_identifier(identifier), m_function(function) {}

    // Implicit constructor for strings, same reasoning as for the NewSymbol
    // class.
    Typedef(const string& identifier)
        : m_identifier(identifier), m_function(false) {}

    const string& identifier() const { return m_identifier; }
    bool is_function() const { return m_function; }
private:
    string m_identifier;
    bool m_function;
};

struct TypedefLess {
    bool operator()(const Typedef& a, const Typedef& b) const {
        return a.identifier() < b.identifier();
    }
};

typedef set<Typedef, TypedefLess> TypedefSet;
TypedefSet g_types;

// Define a typedef. The identifier is now marked as a type, which is used by
// ilex.cc to pass the correct tokens to the parser. If 'to' is set, this
// typedef is a simple typedef to another typedef. This allows us to look up
// the prior typedef to see what type it was. If 'function' is set, this
// typedef is a typedef of a function. NOT a function pointer, but just a
// function. e.g.,
//
//   typedef void func(void);
//
void global_define_type(const string& identifier, const string& to,
       bool function) {
    TypedefSet::iterator i = g_types.find(identifier);
    if (i != g_types.end()) {
        std::ostringstream oss;
        oss << "namespace collisision: type '" << identifier << "' already "
            "defined.";
        globaliser_report_error(oss.str());
        return;
    }
    if (!to.empty()) {
        // If this was a simple typedef, we look up the previous type to see
        // if it was a function.
        
        // It probably doesn't make sense for function to be set here. That 
        // should be an error.
        assert(!function);

        TypedefSet::iterator i = g_types.find(to);
        if (i != g_types.end()) {
            if (i->is_function()) {
                function = true;
            }
        }

        // We consider "void" to be a function. e.g., if we do this:
        //
        //   typedef void foo;
        //
        // Then we'd consider this to be a function.
        if (to == "void") {
            function = true;
        }
    }
    g_types.insert(Typedef(identifier, function));

    std::ostringstream oss;
    oss << "Defining type '" << identifier << "' "
        << (function ? "as function" : "") << " in function '"
        << function << "'.";
    globaliser_report(3, oss.str());
}

// Returns whether this identifier has been typedef'd.
bool global_is_type(const string& identifier) {
    return g_types.find(identifier) != g_types.end();
}

// Returns whether the type of the identifier passed in is a function type.
// The 'identifier' should be an identifier that was previously typedef'd.
bool global_is_type_function(const string& identifier) {
    TypedefSet::const_iterator i = g_types.find(identifier);
    if (i == g_types.end()) {
        return false;
    }
    return i->is_function();
}

typedef set<string> DefinedStructSet;
DefinedStructSet g_defined_structs;

void global_define_struct(const string& iden) {
    g_defined_structs.insert(iden);
}

void global_declare_struct(const string& iden) {

}

bool global_is_variable_type_struct_and_undefined(const string& iden) {
    // 1. find type name for this identifier
    // 2. find if it is struct type
    // 3. find if the struct type is actually defined

    NewSymbolMap::const_iterator i = g_new_symbols.find(iden);
    if (i == g_new_symbols.end()) {
        // This will be the case if the symbol is a local variable. Safe to return false.
        return false;
    }

    // We pick the first symbol here. For once, it's not the latest symbol we care about (or is it?)
    // This isn't quite right. But the type isn't correct for any symbol but the first wrt. structs.
    const NewSymbol& ns = i->second.front();

    if (ns.type() != NewSymbol::STRUCT_VARIABLE)
        return false;

    if (ns.is_pointer())
        return false;

    return g_defined_structs.find(ns.struct_name()) ==
        g_defined_structs.end();
}

// We do some special management of globals that we modify. Those that are 
// created with the so-called "new" method need some special handling: in this
// case a new array is created for every global definition modified. The issue
// comes that this array created a reference to the original variable. If this
// variable was an extern, it's possible there are no original references to
// it, and it is indeed undefined, which is fine. Unfortunately, its possible
// we introduce a reference to an undefined variable here, which created a link
// error.
// To handle this case, once we've parsed the entire file, we go through the
// the list of these arrays and remove any ones that are not referenced.
// Actually, we just remove the initialisation part, as that is the bit that
// created a problem.

typedef map<string, list<node_t*> > GlobalArrayInitMap;
GlobalArrayInitMap extern_global_array_initialisers;

// Called during parsing when we "globalise" a variable with the new method
// and it is an extern. We store the identifier and node at this point.
void register_extern_global_array_initialiser(const string& iden, node_t* init_node) {
  GlobalArrayInitMap::iterator i = extern_global_array_initialisers.find(iden);
  if (i == extern_global_array_initialisers.end()) {
    list<node_t*> nodes;
    nodes.push_back(init_node);
    extern_global_array_initialisers.insert(make_pair(iden, nodes));
  } else {
    i->second.push_back(init_node);
  }
}

// Called during parsing when we find a reference to the global variable
// called "iden". If there is a reference, we don't need to worry about this
// variable any more; we can just remove it from the map.
void register_global_reference(const string& iden) {
  GlobalArrayInitMap::iterator i = extern_global_array_initialisers.find(iden);
  if (i != extern_global_array_initialisers.end()) {
    extern_global_array_initialisers.erase(i);
  }
}

// Called once the file is parsed and we have a full AST. For every entry
// that is still left in the map, we know we have a global variable that is
// not referenced anywhere. We just remove these nodes via changing their
// buffers to an empty string.
void extern_global_array_initialisers_special_case() {
  GlobalArrayInitMap::iterator i = extern_global_array_initialisers.begin();
  for (; i != extern_global_array_initialisers.end(); ++i) {
    std::ostringstream oss;
    oss << "Removing array initialiser for unreferenced global variable "
      << "'" << i->first << "'.";
    globaliser_report(3, oss.str());

    list<node_t*>::iterator j = i->second.begin();
    for (; j != i->second.end(); ++j) {
      (*j)->s_buf = string();
    }
  }
}

typedef set< SGlobal, SGlobalComparitor > GlobalSet;
GlobalSet globals;

void dump_symbols()
{
    fprintf(stderr, "---- Symbols\n");
    NewSymbolMap::iterator i = g_new_symbols.begin();
    for (;i != g_new_symbols.end(); ++i) {
        fprintf(stderr, "  %s  %zd\n",
                i->first.c_str(),
                i->second.size());
    }
    fprintf(stderr, "---- End Symbols\n");
}

void dump_globals()
{
    GlobalSet::iterator i = globals.begin();

    fprintf(stderr, "----- Globals\n%20s : %20s : %20s\n",
            "Identifier", "Function", "Mangled");
    for(; i != globals.end(); ++i) {
        fprintf(stderr, "%20s : %20s : %20s\n",
                i->s_identifier.c_str(), i->s_function.c_str(), 
                i->s_mangled.c_str());
    }
    fprintf(stderr, "---- End globals\n");
}

void dump_string_list(const list< string > &l)
{
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, "\n"));
}

void setup_globals(const char *filename)
{
    FILE *f;
    char buf[256];

    f = fopen(filename, "r");

    if(!f) {
        fprintf(stderr, "Unable to open globals file '%s'. Exiting.\n",
                filename);
        exit(2);
    }

    while(fgets(buf, 254, f)) {
        string t(buf);
        const char *ws = " \t\r\n";

        string::size_type start = t.find_first_not_of(ws);
        string::size_type end   = t.find_last_not_of(ws);

        if(start != string::npos && end != string::npos) {
            string mangled = t.substr(start, end - start + 1);

            ;
            
            if((start = mangled.find('/')) != string::npos) {
                // A static local variable (function/variable)
                string func = mangled.substr(0, start);
                string iden = mangled.substr(start + 1, string::npos);
                globals.insert(SGlobal(iden, func));
            } else if((start = mangled.find('$')) != string::npos) {
                // A special command, such as $section
                string iden = mangled.substr(0, start);
                string cmd = mangled.substr(start + 1, string::npos);

                if(cmd == "section") {
                    globals.insert(SGlobal(iden, SGlobal::t_section));
                } else if(cmd == "section_stopstart") {
                    string start = string("__start_set_") + iden,
                           stop  = string("__stop_set_") + iden;
                    
                    globals.insert(SGlobal(start, SGlobal::t_section_stopstart));
                    globals.insert(SGlobal(stop, SGlobal::t_section_stopstart));
                } else if (cmd == "expand_decl") {
                  SGlobal g(iden);
                  g.b_expanded_decl = true;
                  globals.insert(g);
                } else if (cmd == "ignored") {
                  globals.insert(SGlobal(iden, SGlobal::t_ignored));
                } else {
                    std::ostringstream oss;
                    oss << "Unknown command '$" << cmd << "', ignoring "
                        "identifier '" << iden << "'.";
                    globaliser_warn(oss.str());
                }
            } else {
                globals.insert(SGlobal(mangled));
            }
        }
        
    }

    fclose(f);
}

void global_define_function(const string& iden, bool is_extern)
{
    global_ns_define_function(iden, is_extern);
}

bool is_function(const string& iden) 
{
    return global_ns_is_declared(iden, NewSymbol::FUNCTION);
}

bool is_enum(const string& iden)
{
    return global_ns_is_declared(iden, NewSymbol::ENUM_VARIABLE);
}

void global_define_variable(const string& iden, bool is_extern, bool is_enum,
    bool is_pointer, bool is_var_static_local, const string& struct_type_name)
{
    global_ns_define_variable(iden, is_extern, false, is_enum, is_pointer,
       is_var_static_local, struct_type_name);
}

bool global_variable_declared(const string& iden)
{
    return global_ns_is_variable_declared(iden, NewSymbol::VARIABLE);
}

bool is_global(const string& iden)
{
    GlobalSet::iterator i = globals.find(SGlobal(iden));
    if (i == globals.end()) {
        // If it's not specified, then we assume we want to globalise it
        return true;
    }
    return i->e_cmd != SGlobal::t_ignored;
}

bool is_global_section(const string &iden)
{
    GlobalSet::const_iterator i = globals.find(SGlobal(iden));
    if(i != globals.end())
        return i->e_cmd == SGlobal::t_section;
    return false;
}

bool is_global_section_startstop(const string &iden)
{
    GlobalSet::const_iterator i = globals.find(SGlobal(iden));
    if(i != globals.end())
        return i->e_cmd == SGlobal::t_section_stopstart;
    return false;
}

bool is_static_local(const string &func, const string& iden)
{
    GlobalSet::iterator i = globals.find(SGlobal(iden, func));
    if (i == globals.end()) {
        // If it's not specified, then we assume we want to globalise it
        return true;
    }
    return i->e_cmd != SGlobal::t_ignored;
}

bool report_global(const string &iden, bool ext)
{
    if(opt_verbose == 0)
        return false;

    bool ret = is_global(iden);

    int level = 2;
    if (!ret) level = 1;

    std::ostringstream oss;
    oss << "modify_global " << iden << " : " << (ret ? "yes" : "no");
    globaliser_report(level, oss.str());
    
    return ret;
}

bool report_static_local(const string &func, const string& iden)
{
    if(opt_verbose == 0)
        return false;

    bool ret = is_static_local(func, iden);

    int level = 2;
    if (!ret) level = 1;

    std::ostringstream oss;
    oss << "modify_static_local " << func << "/" << iden << " : "
        << (ret ? "yes" : "no");
    globaliser_report(level, oss.str());

    return ret;
}

void handle_global_reference(const string &funcname, string &buf, string &iden, 
        bool is_var_static_local, bool toplevel, int snum)
{
    if (is_var_static_local) {
      set<SGlobal>::const_iterator siter = globals.find(SGlobal(iden, funcname));
      if(siter != globals.end()) {
          if(siter->e_cmd == SGlobal::t_ignored)
              return;
      }
    } else {
      set<SGlobal>::const_iterator iter = globals.find(SGlobal(iden));
      if(iter != globals.end()) {
          if(iter->e_cmd == SGlobal::t_ignored)
              return;
      }
    }

    if (!is_var_static_local) {
      extern void register_global_reference(const string& iden);
      register_global_reference(iden);
    }

    int s = buf.find(iden);
    buf.erase(s, iden.size());
    
    if(!toplevel) {
        string ns_mangled = global_ns_make_mangled_identifier_reference(iden,
                funcname, is_var_static_local);

        if (ns_mangled.empty()) {
            std::ostringstream oss;
            oss << "Cannot find symbol '" << iden << "' in function '"
                << funcname << "'. You probably have not declared "
                << "the variable.";
            globaliser_report_error(oss.str());
        }
        buf.insert(s, ns_mangled);
    } else {
        string mangled = global_ns_make_mangled_identifier_reference_toplevel(
                iden, funcname, snum);

        buf.insert(s, mangled);
    }
    
}

// Like global_expand_decl, but only looking at information we got from the globals
// file.
bool global_expand_decl_configured(const string& iden, const string& funcname)
{
  GlobalSet::const_iterator i = globals.find(SGlobal(iden));

  if (i == globals.end())
    i = globals.find(SGlobal(iden, funcname));
  if (i != globals.end())
    return i->b_expanded_decl;
  return false;
}

// Returns whether the identifier should be "expanded": at definition it should
// use the new method of creating lots of new symbols, rather than just making
// an array.
bool global_expand_decl(const string &iden, const string &funcname, bool pointer, bool array)
{
  if (!pointer && !array && global_is_variable_type_struct_and_undefined(iden)) {
    return true;
  }

  return global_expand_decl_configured(iden, funcname);
}

void global_define(const string &iden, const string &mangled, bool old_method,
        bool ext, bool vol, bool unb_arr, bool pointer, bool is_var_static_local)
{
    global_ns_define_mangled_variable(iden, mangled, old_method, ext, unb_arr, pointer,
        is_var_static_local);
}

void global_undefine(const string &iden)
{
    global_ns_undefine_variable(iden);
}

string global_get_best_iden(string &iden)
{
    return global_ns_get_mangled_identifier(iden);
}

string global_name_prefix(int stack_no)
{
    std::ostringstream oss;
    oss << "_GLOBAL_" << stack_no << "_";
    return oss.str();
}

string global_name(const string &iden, int stack_no)
{
    std::ostringstream oss;
    oss << global_name_prefix(stack_no) << iden << "_I";
    return oss.str();
}

// We assume 'iden' is the mangled name!
static string global_reference(const string &iden)
{
    std::ostringstream oss;
    oss << "(*" << iden << "[get_stack_id()])";
    return oss.str();
}

static string global_reference_toplevel(const string &iden, int stack_no)
{
    return global_name(iden, stack_no);
}

string global_new_array_name(const string &iden, bool is_static_local)
{
    static int global_array_number = 0;

    std::ostringstream oss;
    oss << "_GLOBAL_" << iden << "_" << global_array_number++ << "_A";
    return oss.str();
}

string global_new_type_name()
{
    static int global_type_number = 0;

    std::ostringstream oss;
    oss << "_GLOBAL_" << global_type_number++ << "_T";
    return oss.str();
}

string global_old_name(const string &iden)
{
    return string("global_") + iden;
}

string global_old_reference(const string &iden)
{
    return iden + string("[get_stack_id()]");
}

string global_old_name_postfix(void)
{
    return string("[get_stack_id()]");
}

string global_old_name_postfix(int stack)
{
    std::ostringstream oss;
    oss << "[" << stack << "]";
    return oss.str();
}

void global_replace_toplevel(string &init, int stack)
{
    string::size_type loc;
    string 
           glb = global_name_prefix(0),
           rbuf = global_name_prefix(stack);

    if(stack == 0)
        return;

    while((loc = init.find(glb)) != string::npos) {
        init.replace(loc, glb.size(), rbuf);
    }
}

void global_old_replace_toplevel(string &init, int stack)
{
    string::size_type loc;
    string glb = global_old_name_postfix(),
           rbuf = global_old_name_postfix(stack);

    // I think this is very unlikely, but might as well
    // leave the code here...
    while((loc = init.find(glb)) != string::npos) {
        init.replace(loc, glb.size(), rbuf);
    }
}
