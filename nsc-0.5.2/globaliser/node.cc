#include <list>
#include <string>
#include <sstream>
#include <algorithm>
#include <assert.h>
#include <stdio.h>
#include "../sim/num_stacks.h"
#include "handle_global.h"

using namespace std;

// Exported from the lexer
extern string ws_text;
extern string token_text;
extern string attr_text;
extern string lex_text;

#include "node.h"


node_t::node_t() {
    init();

    s_token = token_text;
    s_buf = lex_text;
    s_ws = ws_text;
    s_attr = attr_text;
}

node_t::~node_t() {
    delete_children();
}

node_t::node_t(const string& buffer) {
  init();
  s_buf = buffer;
}

void node_t::delete_children() {
    list<node_t *>::iterator i = children.begin();
    for(; i != children.end(); ++i)
        delete *i;
    children.erase(children.begin(), children.end());
}

void node_t::init() {
    b_ignore = b_typedef = b_declaration_list = b_function_declaration 
        = b_init_declarator = b_toplevel = b_extern = b_volatile
        = b_static = b_register = b_unbounded_array = b_typedefed_name
        = b_do_undefined_struct_special_case = false;
    i_function_pointer = 0;

    type = t_general;
}

void node_t::clear_function_declaration() {
    b_function_declaration = false;

    list<node_t *>::const_iterator ci = children.begin();
    for(; ci != children.end(); ++ci) {
        (*ci)->clear_function_declaration();
    }
}

void node_t::clear_typedefed() {
    b_typedefed_name = false;

    list<node_t *>::const_iterator ci = children.begin();
    for(; ci != children.end(); ++ci) {
        (*ci)->clear_typedefed();
    }
}

bool node_t::check_compount_statement() const {
    if(type == t_compound_statement) return true;    

    list<node_t *>::const_iterator ci = children.begin();
    for(; ci != children.end(); ++ci)
        if((*ci)->check_compount_statement())
            return true;

    return false;
}

bool node_t::check_typedef() const {
    if(b_typedef) return true;    

    list<node_t *>::const_iterator ci = children.begin();
    for(; ci != children.end(); ++ci)
        if((*ci)->check_typedef())
            return true;

    return false;
}

bool node_t::check_ignore() const {
    if(b_ignore) return true;    

    list<node_t *>::const_iterator ci = children.begin();
    for(; ci != children.end(); ++ci)
        if((*ci)->check_ignore())
            return true;

    return false;
}

bool node_t::get_extern() const {
    if(b_extern) return true;
    list<node_t *>::const_iterator ci = children.begin();
    for(; ci != children.end(); ci++)
        if((*ci)->get_extern())
            return true;
    return false;
}

bool node_t::get_volatile() const {
    if(b_volatile) 
        return true;
    list<node_t *>::const_iterator ci = children.begin();
    for(; ci != children.end(); ci++)
        if((*ci)->get_volatile())
            return true;
    return false;
}

bool node_t::get_static() const {
    if(b_static) 
        return true;
    list<node_t *>::const_iterator ci = children.begin();
    for(; ci != children.end(); ci++)
        if((*ci)->get_static())
            return true;
    return false;
}

bool node_t::get_register() const {
    if(b_register)
        return true;
    list<node_t *>::const_iterator ci = children.begin();
    for(; ci != children.end(); ci++)
        if((*ci)->get_register())
            return true;
    return false;
}

bool node_t::get_function_declaration_b() const {
    if(b_ignore)
        return false;
    if(b_function_declaration) 
        return true;
    list<node_t *>::const_iterator ci = children.begin();
    for(; ci != children.end(); ci++)
        if((*ci)->get_function_declaration_b())
            return true;
    return false;
}

bool node_t::get_unbounded_array() const {
    if(b_unbounded_array) 
        return true;
    list<node_t *>::const_iterator ci = children.begin();
    for(; ci != children.end(); ci++)
        if((*ci)->get_unbounded_array())
            return true;
    return false;
}

bool node_t::identifiers_need_globalising(const string &func) const {
  if (!s_identifier.empty()) {
    if (!is_global(s_identifier)) {
      return false;
    }
    if (!is_static_local(func, s_identifier)) {
      return false;
    }
    return true;
  }
  
  list<node_t *>::const_iterator ci = children.begin();
  for(; ci != children.end(); ci++) {
    if ((*ci)->identifiers_need_globalising(func)) {
      return true;
    }
  }
  return false;
}

void node_t::report_identifiers_not_globalised(const string &func) const {
  if (!s_identifier.empty()) {
    if (!is_global(s_identifier)) {
      report_global(s_identifier, false);
    }
    if (!is_static_local(func, s_identifier)) {
      report_static_local(func, s_identifier);
    }
  }
  
  list<node_t *>::const_iterator ci = children.begin();
  for(; ci != children.end(); ci++) {
    (*ci)->report_identifiers_not_globalised(func);
  }
}

node_t *node_t::get_identifier() {
    if(s_identifier.size() > 0)
        return this;
    
    list<node_t *>::iterator ci = children.begin();
    for(; ci != children.end(); ci++) {
        node_t *i = (*ci)->get_identifier();
        if(i) return i;
    }

    return NULL;
}

node_t *node_t::get_function_pointer() {
    if(i_function_pointer == 3)
        return this;

    list<node_t *>::iterator ci = children.begin();
    for(; ci != children.end(); ci++) {
        node_t *i = (*ci)->get_function_pointer();
        if(i) return i;
    }

    return NULL;
}

node_t *node_t::get_typeof() {
    if(type == t_typeof)
        return this;

    list<node_t *>::iterator ci = children.begin();
    for(; ci != children.end(); ci++) {
        node_t *i = (*ci)->get_typeof();
        if(i) return i;
    }

    return NULL;
}

node_t *node_t::get_typedefed_node() {
    if(b_typedefed_name)
        return this;

    list<node_t *>::iterator ci = children.begin();
    for(; ci != children.end(); ci++) {
        node_t *i = (*ci)->get_typedefed_node();
        if(i) return i;
    }

    return NULL;
}

node_t *node_t::get_struct() {
    if (!s_struct.empty())
        return this;

    list<node_t *>::iterator ci = children.begin();
    for(; ci != children.end(); ci++) {
        node_t *i = (*ci)->get_struct();
        if(i) return i;
    }

    return NULL;
}

void node_t::print() const {
    printf("%s", s_buf.c_str());

    list<node_t *>::const_iterator ci = children.begin();
    for(; ci != children.end(); ci++)
        (*ci)->print();

}

void node_t::print_to_str(string &dest) const {
    list<node_t *>::const_iterator ci = children.begin();
    for(; ci != children.end(); ci++)
        (*ci)->print_to_str(dest);

    // TODO: use an ostringstream for efficiency
    dest += s_buf;
}


// Special case for code that looks like:
//
//   extern void foo;
//
// Including the case that the 'void' is typedef'd. Unfortunately this is
// very difficult to differentiate from an extern int or similar. So we
// have this function to do the magic for this case.
void node_t::do_void_declaration_special_case() {
    if (type != t_declaration) {
        return;
    }
    if (children.size() != 3) {
        return;
    }
    // declaration_specifiers, init_declarator_list, semicolon_t
    list<node_t*>::iterator i = children.begin();
    node_t* declaration_specifiers = *i; ++i;
    node_t* init_declarator_list = *i;

    // we expect declaration_specifiers to be: 'extern void'
    if (declaration_specifiers->children.size() != 2) {
        return;
    }

    // we expect the init_declarator_list just be to a list of names (or
    // just a single name)
    if (init_declarator_list->type != t_init_declarator_list &&
        !init_declarator_list->children.empty()) {
        return;
    }

    node_t* extern_node = declaration_specifiers->children.front();
    node_t* type_node = declaration_specifiers->children.back();

    if (!extern_node->b_extern) {
        return;
    }
    if (type_node->children.size() != 0) {
        return;
    }
    // We want either 'void', or a typedef to 'void'
    if (type_node->s_token != "void" && 
            !global_is_type_function(type_node->s_token)) {
        return;
    }

    // Ok, we've found a special void guy. Time to mark the identifier(s)
    // as functions.
    if (init_declarator_list->children.empty()) {
        assert(!init_declarator_list->s_identifier.empty());
        global_define_function(init_declarator_list->s_identifier, true);

        std::ostringstream oss;
        oss << "node: defining void variable as function: '"
            << init_declarator_list->s_identifier << "'.";
        globaliser_report(3, oss.str());
    } else {
        while (init_declarator_list) {
            node_t* node = NULL;
            if (init_declarator_list->children.size() != 3) {
                node = init_declarator_list;
                init_declarator_list = NULL;
            } else {
                node = init_declarator_list->children.back();
                init_declarator_list = 
                    init_declarator_list->children.front();
            }

            global_define_function(node->s_identifier, true);
        }
    }
    b_ignore = true;
}

// Assuming this node is for a typedef statement, try and find that was
// typedefed.
// e.g., for a statement "typedef void foo;" this would return "void"
string node_t::find_typedef_type() {
    if (!check_typedef()) {
        return string();
    }
    if (children.size() != 3) {
        return string();
    }
    list<node_t*>::iterator i = children.begin();
    node_t* declaration_specifiers = *i; ++i;
    node_t* init_declarator_list = *i;

    // if init_declarator_list is compex; we give up.
    if (!init_declarator_list->children.empty()) {
        return string();
    }
    if (declaration_specifiers->children.empty()) {
        return string();
    }

    assert(declaration_specifiers->children.size() == 2);
    node_t* typedef_node = declaration_specifiers->children.front();
    node_t* type_node = declaration_specifiers->children.back();

    assert(typedef_node->check_typedef());

    if (type_node->children.empty()) {
        // In this case, we can return s_token, which will have no
        // whitespace, which is preferable.
        return type_node->s_token;
    }
    string ret;
    type_node->print_to_str(ret);
    return ret;
}

// get function pointer from init_declarator_list, ignoring the initializer
// part
node_t* node_t::get_function_pointer_from_idl() {
    node_t* i = this;
    node_t* fp = NULL;
    while (i->type == t_init_declarator_list) {
        node_t* init_decl = i->children.back();
        if (init_decl->type == t_init_declarator) {
            fp = init_decl->children.front()->get_function_pointer();
        } else {
            fp = init_decl->get_function_pointer();
        }
        if (fp) return fp;
        i = i->children.front();
    }

    if (i->type == t_init_declarator) {
        fp = i->children.front()->get_function_pointer();
    } else {
        fp = i->get_function_pointer();
    }
    return fp;
}

string node_t::remove_storage_class_specifiers() {
    string storage_class_specifiers;

    string attr = this->find_attr_and_remove();
    bool is_extern = this->get_extern();
    bool is_volatile = this->get_volatile();
    bool is_static = this->get_static();
    bool is_register = this->get_register();

    if(is_extern) {
        this->remove_node("extern");
        storage_class_specifiers += "extern ";
    }
    if(is_volatile) {
        this->remove_node("volatile");
        storage_class_specifiers += "volatile ";
    }
    if(is_static) {
        this->remove_node("static");
        storage_class_specifiers += "static ";
    }
    if(is_register) {
        this->remove_node("register");
        storage_class_specifiers += "register ";
    }

    if (this->remove_node("__inline__") ||
        this->remove_node("__inline") ||
        this->remove_node("inline__")) {
      storage_class_specifiers += "__inline__ ";
    }

    if (!attr.empty()) {
        storage_class_specifiers += " "; // TODO: we might be adding more whitespace than we need here, check this
        storage_class_specifiers += attr;
    }

    return storage_class_specifiers;
}

// The big workhorse function that modifies a global definition /
// declaration -- NOT a reference.
bool node_t::handle_global(string func, list<string> *locals,
        list<string> *static_locals) {
    if(b_ignore)
        return false;
    if(get_function_declaration_b())
        return false;
    if(!identifiers_need_globalising(func)) {
        report_identifiers_not_globalised(func);
        return false;
    }

    list<node_t *>::iterator ci = children.begin();
    node_t *declaration_specifiers = *ci; ++ci;
    if(children.size() == 4) ++ci;
    node_t *init_declarator_list = *ci; ++ci;
    node_t *semicolon = *ci;
    string orig_node_output;
    int orig_newlines;
    
    assert(declaration_specifiers && init_declarator_list && semicolon);

    print_to_str(orig_node_output);
    orig_newlines = count(orig_node_output.begin(), 
            orig_node_output.end(), '\n');

    bool is_extern = declaration_specifiers->get_extern();
    bool is_static = declaration_specifiers->get_static();
    bool is_var_static_local = false;
    string global_type_name = global_new_type_name();
    node_t *fp = init_declarator_list->get_function_pointer_from_idl();
    string ws = get_whitespace(); remove_whitespace();

    if(fp) {
        // Function pointer. We need a special case for function pointers,
        // nothing much we can do about it. Stupid functions pointers,
        // they just don't fit in with the rest of the grammar well.
        node_t *iden = fp->get_identifier();
        string orig_iden = iden->s_identifier;
        
        if (func.size()) {
          if (is_static) {
            report_static_local(func, orig_iden);
            if (!is_static_local(func, orig_iden))
              return false;
            is_var_static_local = true;
          }
        } else {
          report_global(orig_iden, is_extern);
          if (!is_global(orig_iden))
            return false;
          is_var_static_local = false;
        }
        
        global_define_variable(orig_iden, is_extern, false, true, 
            is_var_static_local, string());


        // Right.
        //
        // static int (*identifier[])(int a, char* b) = { stuff }  ;
        // [    1   ] [                   2                     ]  3 
        //            [            4                ] 5 [   6   ]
        //            [     7       ]8[      9     ]10
        //
        //  1 = declaration specifiers
        //  2 = init_declarator (or init_declarator_list)
        //  3 = ...
        //  4 = declarator
        //  5 = =
        //  6 = initializer
        //  7 = direct_declarator
        //  8 = (
        //  9 = parameter_type_list
        // 10 = )
        //
        // This is the sort of case we need to handle. 


        string storage_class_specifiers = 
            declaration_specifiers->remove_storage_class_specifiers();
        declaration_specifiers->reduce();

        // Find a list of init_declarators:
        list<node_t *> init_declarators;
        node_t *idl = init_declarator_list;
        do {
            if(idl->type == node_t::t_init_declarator_list) {
                init_declarators.push_front(idl->children.back());
                idl = idl->children.front();
                continue;
            }
            
            // Either an init_declarator or a declarator
            init_declarators.push_front(idl);
            idl = NULL;
        } while(idl);

        // The problem with function pointers is that so much of the type
        // defition is part of the init_declarator
        // We need to do quite a lot of work per declarator; more than for
        // other variables.

        list<node_t*> new_children;

        for (list<node_t*>::iterator i = init_declarators.begin();
                i != init_declarators.end(); ++i) {
            node_t* node = *i;
            node_t* declarator = NULL;
            node_t* initializer = NULL;
            if (node->type == t_init_declarator) {
                // declarator equals_t initializer
                assert(node->children.size() == 3);
                declarator = node->children.front();
                initializer = node->children.back();
            } else {
                declarator = node;
            }

            node_t* top_declarator = declarator;

            node_t* pointer = NULL;
            if (declarator->type == t_declarator) {
                // pointer direct_declarator
                assert(declarator->children.size() == 2);
                pointer = declarator->children.front();
                declarator = declarator->children.back();
            }

            // If this isn't true, then we're declaring a normal variable
            // amongst function pointers (in the same statement). This is
            // completely legal, but a bit messy. We hope that nobody does
            // this.
            assert(declarator->i_function_pointer == 3);

            // direct_declarator left_bracket_t parameter_type_list
            // right_bracket_t
            assert(declarator->children.size() == 4);

            bool is_array =
                declarator->children.front()->get_unbounded_array();

            node_t* identifier = declarator->get_identifier();
            assert(identifier);

            string orig_iden = identifier->s_identifier;
            string global_type_name = global_new_type_name();

            identifier->s_buf = global_type_name;
            string fp_type;
            top_declarator->print_to_str(fp_type);

            {
                std::ostringstream oss;
                oss << "typedef " << declaration_specifiers->s_buf << " "
                    << fp_type << "; ";
                new_children.push_back(new node_t(oss.str()));
            }
            
            if (!is_array) {
                string res;
                make_global_definition_old_method(
                        orig_iden,
                        storage_class_specifiers + " " + global_type_name,
                        NULL,
                        string(), // iden_attrs?
                        is_extern,
                        is_var_static_local,
                        initializer,
                        func,
                        locals,
                        static_locals,
                        res);
                new_children.push_back(new node_t(res));
            } else {
                node_t* iden_node = new node_t();
                node_t* fake;
                if (initializer) {
                    node_t* equals_node = new node_t();
                    equals_node->s_buf = " = ";
                    fake = new node_t(iden_node, equals_node, initializer);
                } else {
                    fake = iden_node;
                }

                node_t* defn_node =
                make_global_definition_new_method(
                        orig_iden,
                        storage_class_specifiers + " " + global_type_name,
                        string(), // iden_attrs?
                        is_extern,
                        pointer,
                        is_var_static_local,
                        fake,
                        iden_node,
                        initializer,
                        func,
                        locals,
                        static_locals);
                new_children.push_back(defn_node);

                if (!fake->children.empty())
                    fake->children.pop_back();
                delete fake; // cleans up its children internally
            }

        }

        new_children.push_back(new node_t(ws));

        delete_children();
        s_buf = "";
        s_identifier = "";
        children = new_children;
        type = t_general;
        return true;
    }
    // END FUNCTION POINTER STUFF -------------------------------------

    string storage_class_specifiers = 
        declaration_specifiers->remove_storage_class_specifiers();
    list<node_t*> new_children;

    // Special case to check for 'function' variables, which aren't
    // variables at all, but they look like them to the syntax
    //
    // e.g.,
    //
    //   typedef void i_am_a_function(void);
    //
    bool is_function_type = false;
    node_t *typedefed_node = declaration_specifiers->get_typedefed_node();
    if (typedefed_node) {
        if (global_is_type_function(typedefed_node->s_token)) {
            // Ok, so we're using a typedef type, and it's a function. If
            // there is no pointer in this declaration, it must be a
            // function.
            //
            // We check pointers later, so just mark is_function_type for
            // now.
            is_function_type = true;
        }

        // TODO(Jul 8, 2008): think about typedefs to structs here. We'd want
        // to handle them like below (see struct_name_type handling).
    }

    string struct_type_name;
    node_t* struct_node = declaration_specifiers->get_struct();
    if (struct_node) {
        struct_type_name = struct_node->s_struct;
    }
    
    declaration_specifiers->reduce();
    {
        string result;
        result = "typedef " + declaration_specifiers->s_buf;
        result += string(" ") + global_type_name + string("; ");
        new_children.push_back(new node_t(result));
    }
    // typedef done.
   
    // Find a list of init_declarators:
    list<node_t *> init_declarators;
    node_t *idl = init_declarator_list;
    do {
        if(idl->type == node_t::t_init_declarator_list) {
            init_declarators.push_front(idl->children.back());
            idl = idl->children.front();
            continue;
        }
        
        // Either an init_declarator or a declarator
        init_declarators.push_front(idl);
        idl = NULL;
    } while(idl);
            
    // Produce the code to declare and possibly initialise everything in
    // the init_declarators list.
    // We need to check each identifier and see if it is a global variable
    // here.
    list<node_t *>::iterator id_iter = init_declarators.begin();
    for(; id_iter != init_declarators.end(); ++id_iter) {
        node_t *id = *id_iter, *i, *pointer = NULL, *array = NULL,
            *initialiser_node = NULL, *declarator = NULL;
        int stack;
        bool is_unbounded_array = false;

        // init_declarator:
        if(id->type == node_t::t_init_declarator 
                && id->children.size() == 3) {
            // declarator equals_t initializer
            initialiser_node = id->children.back();
            i = id->children.front();
        } else {
            // declarator
            i = id;
        }
        declarator = i;
        // Iteratate past pointer nodes
        if(i->type == node_t::t_declarator) {
            pointer = i->children.front();
            i = i->children.back();
        }
        // Iterate past array nodes
        while(i->type == node_t::t_direct_declarator_array) {
            if(array == NULL)
                array = i;
            i = i->children.front();
        }
        
        // It is possible to lose whitespace here; there could be
        // newlines between variables being declared. Lets hope that
        // is a non-issue.
        string orig_iden = i->get_identifier()->s_identifier;
        string type_name;

        type_name += storage_class_specifiers;
        type_name += " " + global_type_name + " ";

        if(array && array->get_unbounded_array()) {
            is_unbounded_array = true;
        }

        if (!pointer && is_function_type) {
            std::ostringstream oss;
            oss << "node: Variable '" << orig_iden << "' is a function, not "
                "globalising.";
            globaliser_report(3, oss.str());
            assert(!array);
            assert(!initialiser_node);
            global_define_function(orig_iden, true);

            string result = type_name;
            id->print_to_str(result);
            result += "; ";
            new_children.push_back(new node_t(result));

            continue;
        }

        bool do_continue = false;
        if (func.size()) {
          if (is_static) {
            report_static_local(func, orig_iden);
            if (!is_static_local(func, orig_iden))
              do_continue = true;
            else
              is_var_static_local = true;
          }
        } else {
          report_global(orig_iden, is_extern);
          if (!is_global(orig_iden))
            do_continue = true;
          else
            is_var_static_local = false;
        }

        global_define_variable(orig_iden, is_extern, false, pointer,
             is_var_static_local, struct_type_name);


        if(do_continue) {

            if(initialiser_node) {
                initialiser_node->hgr_initialiser(func.empty() ? 
                        "__toplevel__undefined" : func, locals, static_locals);
                string init = initialiser_node->s_buf;

                //global_replace_toplevel(init, 0);
                global_old_replace_toplevel(init, 0);

                initialiser_node->s_buf = init;
            }
            
            string result;
            result += type_name;
            id->print_to_str(result);
            result += "; ";
            new_children.push_back(new node_t(result));
            continue;
        }

        /* Special handling for section stuff; this should allow us to
         * globalise FreeBSD "linker sets" correctly. */
        if (is_global_section(orig_iden)) {
          node_t *attr_node = id->find_attribute_strings("__section__");
          if (!attr_node) {
            assert(storage_class_specifiers.find("__section__") != string::npos);
          }

          if (!attr_node) {
            assert(0); // TODO: handle this case by removing the section from the scs
            // and putting it into each var
            // At the moment we haven't implemented this case because it has
            // never come up
          }

          string orig_attr = attr_node->remove_attribute("__section__");
          string iden_attrs = i->find_attr_and_remove();

          if(initialiser_node)
                    initialiser_node->hgr_initialiser(func.empty() ? 
                        "__toplevel__undefined" : func, locals, static_locals);

          for(stack = 0; stack < NUM_STACKS; stack++) {
            string result = type_name;
            if(pointer) pointer->print_to_str(result);
            result += string(" ");

            char stacknum[128];
            snprintf(stacknum, 128, "_global_section_%d_", stack);

            result += stacknum + orig_iden;

            string new_attr = orig_attr;
            
            {
              string::size_type i, str_start, str_end;

              i = new_attr.find("__section__");
              i = new_attr.find("(", i+1); str_start = i + 1;
              i = new_attr.find(")", i+1); str_end = i;

              new_attr.insert(str_end, string(" \"") + stacknum + "\"");
            }

            result += " " + new_attr + " " + iden_attrs;

            result += " = ";

            string init_str;
            initialiser_node->print_to_str(init_str);

            global_replace_toplevel(init_str, stack);
            global_old_replace_toplevel(init_str, stack);

            result += init_str;
            result += ";";
            new_children.push_back(new node_t(result));
          }
                
          continue;
        } else {
            extern int opt_verbose; 
            if (opt_verbose > 0) {
                node_t *attr_node = id->find_attribute_strings("__section__");
                if (attr_node) {
                    std::ostringstream oss;
                    oss << "Global '" << orig_iden << "' has __section__ "
                        "attribute, but is not handled with '$section'. Attribute "
                        "was: '" << attr_node->s_attr << "'.";
                    globaliser_warn(oss.str());
                }
            }
        }

        if(is_global_section_startstop(orig_iden)) {
            // Forward declare all the actual symbols
            // (__start_set_[name]_global_section_[number]_)
            string result = type_name;
            for(stack = 0; stack < NUM_STACKS; stack++) {
                if(pointer) pointer->print_to_str(result);
                
                char gname[128];
                snprintf(gname, 128, "_global_section_%d_", stack);

                result += orig_iden + gname;

                if(stack != NUM_STACKS - 1)
                    result += ",";
            }
            result += ";  ";

            // Make sure we declare the array as static and not extern
            type_name.erase(type_name.find("extern"), 6);
            type_name = string("static ") + type_name;
            
            // And create the array, much like we do for "unbounded arrays"
            result += type_name;
            if(pointer) pointer->print_to_str(result);
            result += string(" * ") + orig_iden + string("[NUM_STACKS] = { ");

            for(stack = 0; stack < NUM_STACKS; stack++) {
                // "__start_set_sysinit_set" "_global_section_0_"
                char gname[128];
                snprintf(gname, 128, "_global_section_%d_", stack);

                result += string("&") + orig_iden + gname;

                result += ", ";
            }
            result += " };    ";

            // Define the global variable
            global_define(orig_iden, orig_iden, true, false, false, true, pointer,
                is_var_static_local);
            if(is_static && static_locals) {
                static_locals->push_back(orig_iden);
            }

            new_children.push_back(new node_t(result));
            
            continue;
        }

        string iden_attrs = i->find_attr_and_remove();

        bool use_old_method = !is_unbounded_array;

        if (global_expand_decl(orig_iden, func, pointer, array)) {
          use_old_method = false;
        }

        if(is_static && static_locals) {
            static_locals->push_back(orig_iden);
        }

        if(use_old_method) {
            string result;
            make_global_definition_old_method(
                    orig_iden,
                    type_name,
                    pointer,
                    iden_attrs,
                    is_extern,
                    is_var_static_local,
                    initialiser_node,
                    func,
                    locals,
                    static_locals,
                    result);
            new_children.push_back(new node_t(result));
        } else {
            node_t* defn_node =
            make_global_definition_new_method(
                    orig_iden,
                    type_name,
                    iden_attrs,
                    is_extern,
                    pointer,
                    is_var_static_local,
                    id, // TODO: better name?
                    i, // TODO: better name?
                    initialiser_node,
                    func,
                    locals,
                    static_locals);
            new_children.push_back(defn_node);
        }
    }

    new_children.push_back(new node_t(ws));

    delete_children();
    s_buf = "";
    s_identifier = "";
    type = t_general;
    children = new_children;

    return true;
}

node_t* node_t::make_global_array(string iden, bool is_extern, bool is_volatile,
        bool is_pointer, bool is_var_static_local) {
    string globalname = global_name(iden, 0);
    string result;
    int stack;

    // TODO: we can't use extern like below
    //   we can, however, check to see if there are any references to the
    //   variable throughout the source file and only make the array in
    //   that case, right?

    result += "static ";
    result += "__attribute__ ((unused)) ";
    result += string("__typeof__(") + globalname + ") ";

    globalname = global_new_array_name(iden, is_var_static_local);
    
    result += string("*") + globalname + "[NUM_STACKS]";

    global_define(iden, globalname, false, is_extern, is_volatile, true, is_pointer,
        is_var_static_local);

    node_t* decl_node = new node_t(result);
    result = "";
    
    result = " = { ";

    for(stack = 0; stack < NUM_STACKS; stack++) {
        result += "&";
        result += global_name(iden, stack);
        result += ", ";
    }
    result += "}";

    node_t* init_node = new node_t(result);

    if (!is_var_static_local) {
      if (is_extern) {
        register_extern_global_array_initialiser(iden, init_node);
      }
    }

    node_t* semicolon_node = new node_t(";");

    return new node_t(decl_node, init_node, semicolon_node);
}

void node_t::make_global_definition_old_method(
        const string& orig_iden,
        const string& type_name,
        node_t* pointer,
        const string& iden_attrs,
        bool is_extern,
        bool is_var_static_local,
        node_t* initialiser_node,
        const string& func,
        list<string>* locals,
        list<string>* static_locals,
        string& result) {
    string new_iden = global_old_name(orig_iden);
    result += type_name;
    if(pointer) pointer->print_to_str(result);
    result += string(" ") + new_iden + string("[NUM_STACKS]");

    if (!iden_attrs.empty())
        result += string(" ") + iden_attrs;

    // Need to do this before initialiser_node->hgr_initialiser()
    global_define(orig_iden, new_iden, true, is_extern, false, 
            false, pointer, is_var_static_local);

    if(initialiser_node) {
        initialiser_node->hgr_initialiser(func.empty() ? 
                "__toplevel__undefined" : func, locals, static_locals);

        string init_str;
        initialiser_node->print_to_str(init_str);

        result += string(" = { ");
        for(int stack = 0; stack < NUM_STACKS; stack++) {
            string is = init_str;

            global_replace_toplevel(is, stack);
            global_old_replace_toplevel(is, stack);

            result += is;
            result += ", ";
        }
        result += string(" }");
    }
    result += "; ";
}

node_t* node_t::make_global_definition_new_method(
        const string& orig_iden,
        const string& type_name,
        const string& iden_attrs,
        bool is_extern,
        bool is_pointer,
        bool is_var_static_local,
        node_t* id,
        node_t* i,
        node_t* initialiser_node,
        const string& func,
        list<string>* locals,
        list<string>* static_locals)
{
    string result;
    string orig_init;
    if(initialiser_node) {
        initialiser_node->hgr_initialiser(func.empty() ? 
                "__toplevel__undefined" : func, locals, static_locals);
        orig_init = initialiser_node->s_buf;
    }
    for(int stack = 0; stack < NUM_STACKS; stack++) {
        result += type_name;
        i->s_buf = string(" ") + global_name(orig_iden, stack);

        if (!iden_attrs.empty())
            result += string(" ") + iden_attrs;

        // modify initialiser_node so it refers to the correct global
        // instances.
        if(initialiser_node)
        {
            string init = orig_init; 
            global_replace_toplevel(init, stack);
            global_old_replace_toplevel(init, stack);

            initialiser_node->s_buf = init;
        }

        id->print_to_str(result); 
        result += "; ";
    }

    node_t* decl_node = new node_t(result);

    // make array
    node_t* array_node = make_global_array(orig_iden, is_extern, false,
            is_pointer, is_var_static_local);

    return new node_t(decl_node, array_node);
}

string node_t::get_whitespace() {
    // the token is always at the end of the whitespace.
    string ws = s_ws;

    list<node_t *>::iterator ci = children.begin();
    for(; ci != children.end(); ++ci) {
        ws += (*ci)->get_whitespace();
    }
    return ws;
}

void node_t::remove_whitespace() {
    list<node_t *>::iterator ci = children.begin();
    for(; ci != children.end(); ++ci) {
        (*ci)->remove_whitespace();
    }
    s_buf = string(" ") + s_token;
    if (!s_attr.empty()) {
      s_buf += string(" ") + s_attr;
    }
}

string node_t::find_attr_and_remove() {
    std::ostringstream oss;
    list<node_t *>::iterator ci = children.begin();
    for(; ci != children.end(); ++ci) {
      oss << (*ci)->find_attr_and_remove();
    }
    // We can't both have children with attrs, and have attrs ourself
    // (only leafs can have attributes)
    assert(oss.str().size() == 0 || s_attr.size() == 0);
    if (s_attr.size() > 0) {
      string::size_type s = s_buf.find(s_attr);
      assert (s != string::npos);
      s_buf.erase(s, s_attr.size());
      string ret = s_attr;
      s_attr.clear();
      return ret + " ";
    }
    return oss.str();
}

string node_t::remove_attribute(const string& attr) {
  if (s_attr.find(attr) != string::npos) {
    string::size_type a_start, aa_start, i;
    
    a_start = s_attr.find(attr);
    aa_start = s_attr.rfind("__attribute", a_start);

    int depth = 0;
    for (i = aa_start; i < s_attr.size(); i++) 
    {
      if (s_attr[i] == '(') depth++;
      else if (s_attr[i] == ')') depth--;
      if (i > a_start && depth == 0)
        break;
    }

    string str = s_attr.substr(aa_start, i - aa_start);

    string::size_type buf_i = s_buf.find(str);
    assert(buf_i != string::npos);

    s_buf.erase(buf_i, str.size());
    s_attr.erase(aa_start, i - aa_start);

    return str;
  }

  list<node_t *>::iterator ci = children.begin();
  for(; ci != children.end(); ++ci) {
    string s = (*ci)->remove_attribute(attr);
    if (!s.empty())
      return s;
  }
  return string();
}

bool node_t::has_attribute() {
  if (!s_attr.empty())
    return true;

  list<node_t *>::iterator ci = children.begin();
  for(; ci != children.end(); ++ci) {
    if ((*ci)->has_attribute())
      return true;
  }
  return false;
}

void node_t::print_attrs() {
  list<node_t *>::iterator ci = children.begin();
  for(; ci != children.end(); ++ci) {
    (*ci)->print_attrs();
  }
  fprintf(stderr, "'%s':'%s'\n", s_buf.c_str(), s_attr.c_str());
}

node_t *node_t::find_attribute_strings(const string& s) {
  if (!s_attr.empty()) {
    if (s_attr.find(s) != string::npos) {
      return this;
    }
  }
  list<node_t *>::iterator ci = children.begin();
  for(; ci != children.end(); ++ci) {
    node_t* attr = (*ci)->find_attribute_strings(s);
    if (attr)
      return attr;
  }
  return NULL;
}

bool node_t::remove_node(const string &token) {
    if(s_token.compare(token) == 0) {
        s_buf = s_token = "";
        return true;
    }

    list<node_t *>::iterator ci = children.begin();
    for(; ci != children.end(); ++ci) {
        if( (*ci)->remove_node(token) )
            return true;
    }
    return false;
}

void node_t::add_locals(string funcname, list<string> &locals, int &num_locals,
        list<string> &static_locals, int &num_static_locals) {

    if(type == t_declaration) {
        add_locals_one_level(funcname, locals, num_locals, static_locals,
                num_static_locals);
    } else if(type == t_parameter_type_list) {
        add_locals_simple(locals, num_locals);
    } else {
        list<node_t *>::iterator ci = children.begin();
        for(; ci != children.end(); ++ci)
            (*ci)->add_locals(funcname, locals, num_locals, static_locals,
                              num_static_locals);
    }
}

void node_t::add_locals_one_level(string funcname, list<string> &locals, int &num_locals,
        list<string> &static_locals, int &num_static_locals) {

    if (type == t_declaration) {
        list<node_t *>::iterator ci = children.begin();
        node_t *declaration_specifiers = *ci; ++ci;
        node_t *init_declarator_list = *ci; ++ci;
        node_t *semicolon = *ci;
        
        if(!(children.size() == 3 && declaration_specifiers && init_declarator_list && semicolon))
        {
            /*fprintf(stderr, "Error! Danger! :: %s\n"
                    "%p %p %p\n"
                    "%s (%s) (%s)\n"
                    ,
                    funcname.c_str(),
                    declaration_specifiers, init_declarator_list,
                    semicolon,
                    s_token.c_str(),
                    s_identifier.c_str(),
                    s_buf.c_str()
                    
                    );*/
            // In this case the variable was an extern and handled earlier
            // XXX: we don't need to handle externs earlier anymore, they
            // can just be done here. 
            return;
        }

        bool is_static = declaration_specifiers->get_static();
        list<node_t *> init_declarators;
        node_t *idl = init_declarator_list;
        do {
            if(idl->type == node_t::t_init_declarator_list) {
                init_declarators.push_front(idl->children.back());
                idl = idl->children.front();
                continue;
            }
            
            // Either an init_declarator or a declarator
            init_declarators.push_front(idl);
            idl = NULL;
        } while(idl);

        bool handle_static_locals = false;
        list<node_t *>::iterator ii = init_declarators.begin();
        for(; ii != init_declarators.end(); ++ii) {
            node_t *id = *ii, *i;

            if(id->type == node_t::t_init_declarator) {
                i = id->children.front();
            } else {
                i = id;
            }
            // Iteratate past pointer nodes
            if(i->type == node_t::t_declarator) {
                i = i->children.back();
            }
            // Iterate past array nodes
            while(i->type == node_t::t_direct_declarator_array) {
                i = i->children.front();
            }

            string &iden = i->get_identifier()->s_identifier;

            if(is_static && is_static_local(funcname, iden)) {
                //static_locals.push_back(iden);
                //num_static_locals++;
                handle_static_locals = true;
            } else {
                //fprintf(stderr, "adding local: '%s'\n", iden.c_str());
                locals.push_back(iden); num_locals++;
            }
        }
        if(handle_static_locals) {
            //extern void dump_string_list(const list<string> &);

            int old_size = static_locals.size();
            handle_global(funcname, &locals, &static_locals);
            num_static_locals = static_locals.size() - old_size;
            
            //dump_string_list(static_locals);
        }
    }
}

void node_t::add_locals_simple(list<string> &locals, int &num_locals) {
    if(type == t_direct_declarator) {
        node_t *i = get_identifier();
        if(i) {
            locals.push_back(i->s_identifier);
            num_locals++;
        }
        return;
    }

    list<node_t *>::iterator ci = children.begin();
    for(; ci != children.end(); ++ci)
        (*ci)->add_locals_simple(locals, num_locals);
}

void node_t::hgr_initialiser(string func, list<string>* locals,
        list<string>* static_locals) {
    string orig_init;
    if (locals && static_locals) {
        hgr(func, *locals, *static_locals, true, 0);
    } else {
        list<string> locals, static_locals;
        hgr(func, locals, static_locals, true, 0);
    }
    print_to_str(orig_init);

    // More efficient form of reduce(). Or it should be.
    delete_children();
    s_buf = orig_init;
}

void node_t::hgr_toplevel(int snum) {
    if(b_init_declarator) {
        list<string> l, sl;
        children.back()->hgr("__toplevel__undefined", l, sl, true, snum);
        return;
    } 
    
    list<node_t *>::iterator ci;
    for(ci = children.begin(); ci != children.end(); ++ci) {
        (*ci)->hgr_toplevel();
    }

    //if(s_identifier.size() > 0)
    //    ::handle_global_reference(s_buf, s_identifier, true);
}

/** Recursively handles global references. This should be initially called
    on a function body, I believe. Then it will go over the code, noticing
    local variables that shadow global variables and changing the global
    variable references that need changing.
 */
void node_t::hgr(string funcname, list<string> &locals, 
        list<string> &static_locals, bool toplevel, 
        int snum) {
    if(b_ignore)
        return;

    if(b_toplevel) {
        hgr_toplevel();
        return;
    }

    if (b_do_undefined_struct_special_case && !toplevel) {
        handle_ampersand_reference_special_case(locals);
        return;
    }

    if(type == t_declaration) {
        if(!(children.size() > 1)) {
            return;
        }
        list<node_t *>::iterator i = children.begin();
        node_t *to = (*i)->get_typeof();
        if(to)
            to->hgr(funcname, locals, static_locals, toplevel, snum);

        i++;
        (*i)->hgr(funcname, locals, static_locals, toplevel, snum);
        return;
    }

    /* Old comment:
     *   if we are a compound statement, look for a declarator list
     *   first, then handle the statement list
     * New:
     *   Note that with the introduction of c99, variables can be declared
     *   anywhere in a compount statement. So we can no longer assume all
     *   declarations start in a "declarator_list" compound in the parse
     *   tree.
     */
    if(children.size() > 0) {
        if(type == t_statement_list) {
            node_t *statement = this;
            list<node_t *> right;
            while(statement->type == t_statement_list) {
                right.push_back(statement->children.back());
                statement = statement->children.front();
            }
            right.push_back(statement);

            int num_locals = 0, num_static_locals = 0;
            while(!right.empty()) {
                node_t *n = right.back(); right.pop_back();

                if(n->check_compount_statement()) {
                    n->add_locals_one_level(funcname, locals, num_locals,
                            static_locals, num_static_locals);
                    n->hgr(funcname, locals, static_locals, toplevel,
                            snum);
                } else {
                    n->add_locals(funcname, locals, num_locals,
                                      static_locals, num_static_locals);
                    n->hgr(funcname, locals, static_locals, toplevel, 
                               snum);
                }
            }

            for(; num_locals > 0; num_locals--)
                locals.pop_back();
            
            for(; num_static_locals > 0; num_static_locals--) {
                assert(!static_locals.empty());
                
                global_undefine(static_locals.back());
                static_locals.pop_back();
            }
        } else {
            // old code...    
            list<node_t *>::iterator ci;
            int num_locals = 0, num_static_locals = 0;
            for(ci = children.begin(); ci != children.end(); ++ci) {
                if( (*ci)->b_declaration_list || (*ci)->type == t_declaration ) {
                    (*ci)->add_locals(funcname, locals, num_locals,
                                      static_locals, num_static_locals);
                    (*ci)->hgr(funcname, locals, static_locals, toplevel, 
                               snum);
                } else {
                    (*ci)->hgr(funcname, locals, static_locals, toplevel, 
                               snum);
                }
            }

#if 0
            fprintf(stderr, "locals size=%d (2): ", locals.size());
            for(list<string>::iterator locals_iter = locals.begin();
                    locals_iter != locals.end(); ++locals_iter) {
                fprintf(stderr, " '%s' ", locals_iter->c_str());
            }
            fprintf(stderr, "\n");
#endif

            for(; num_locals > 0; num_locals--)
                locals.pop_back();
            for(; num_static_locals > 0; num_static_locals--) {
                std::ostringstream oss;
                oss << "node: Undefining static local '" << static_locals.back()
                    << "'.";
                globaliser_report(3, oss.str());
                global_undefine(static_locals.back());
                static_locals.pop_back();
            }
        } 
    } else {
        
        if(s_identifier.size() > 0) {
            // variable reference!
            //fprintf(stderr, "Var ref: '%s'\n", s_identifier.c_str());
            if (std::find(locals.begin(), locals.end(), s_identifier)
                    != locals.end()) {
                return;
            }

            if (is_function(s_identifier)) {
                std::ostringstream oss;
                oss << "node: Found function '" << s_identifier << "'.";
                globaliser_report(3, oss.str());
                return;
            }

            if (is_enum(s_identifier)) {
                std::ostringstream oss;
                oss << "node: Found enum '" << s_identifier << "'.";
                globaliser_report(3, oss.str());
                return;
            }

            bool is_var_static_local = false;

            if (std::find(static_locals.begin(), static_locals.end(),
                        s_identifier) != static_locals.end()) {
                report_static_local(funcname, s_identifier);
                if (!is_static_local(funcname, s_identifier)) {
                    return;
                }
                is_var_static_local = true;
            } else {
                if (!global_variable_declared(s_identifier)) {
                    std::ostringstream oss;
                    oss << "Variable '" << s_identifier << "' undeclared.";
                    globaliser_report(2, oss.str());
                    return;
                }

                report_global(s_identifier, false);
                if (!is_global(s_identifier)) {
                    return;
                }
            }

            ::handle_global_reference(funcname, s_buf, s_identifier, 
                    is_var_static_local, toplevel, snum);
        }
        
    }
}

void node_t::reduce() {
    list<node_t *>::iterator i = children.begin();
    string buf("");

    for(; i != children.end(); ++i) {
        (*i)->reduce();
        buf += (*i)->s_buf;
        delete *i;
    }
    children.erase(children.begin(), children.end());

    s_buf = buf + s_buf;
    s_token = s_buf;
}

node_t *node_t::get_function_declaration() {
    if(type == t_function_declaration)
        return this;
    
    list<node_t *>::iterator i = children.begin();
    for(; i != children.end(); ++i) {
        node_t *ret = (*i)->get_function_declaration();
        if(ret)
            return ret;
    }
    return NULL;
}

void node_t::handle_global_references() {
    // Old notes I had before I'd written this code:
    // 
    // What we need to do:
    // Visit everything in the tree -- breadth first? depth first? hmm...
    // push locals onto a stack, visit children, pop locals from stack
    
    //      visiting: check for identifiers:
    //      if identifier: is it local? if so, continue
    //      else if it is global: handle_global_reference
    //      done
    //
    node_t *fn = get_function_declaration();
    if(!fn) {
        fprintf(stderr, "No fn::::\n");
        print();
        fprintf(stderr, ":=:=:=:\n\n");
    }

    list<string> locals, static_locals;
    hgr(fn->get_identifier()->s_identifier, locals, static_locals);
}

// To handle this case:
//   struct sam a;
//   void func() { &a; }
// It is legal to do this without defining what "struct sam" is. We need to
// special case this.
void node_t::check_for_ampersand_reference_special_case() {
    // We will be called in the grammar when we've seen an ampersand then an
    // expression. If we have more than 2 children, it's not a trivial
    // "&identifier", so we bail.
    if (children.size() != 2)
        return;

    // The first child will be a unary_operator, check that it is an ampersand:
    node_t* unary_operator = children.front();

    if (unary_operator->children.size() > 0)
        return;
    if (unary_operator->s_token != "&")
        return;

    // Next child is a cast_expression. We only care if it is just a plain
    // identifier, so bail if it isn't.
    node_t* cast_expression = children.back();
    
    if (cast_expression->children.size() > 0)
        return;
    if (cast_expression->s_identifier.empty())
        return;

    // Right, we've got a situation where we see '&identifier'. Do we care?
    const string& iden = cast_expression->s_identifier;

    // Check what type identifier is
    // We want to know its struct name
    // if it has one, is it defined?

    if (global_is_variable_type_struct_and_undefined(iden)) {
        // OK, found our beast
        
        // One problem here: we *only* want to do this when it's not at the top
        // level. So we can't do the processing here. Also, we don't even know
        // if this is a local variable or a global one.
        b_do_undefined_struct_special_case = true;
    }
}

// See check_for_ampersand_reference_special_case
void node_t::handle_ampersand_reference_special_case(list<string>& locals) {
    // Do some sanity checking, the real checking was all done in 
    // check_for_ampersand_reference_special_case()
    assert(b_do_undefined_struct_special_case);
    assert(children.size() == 2);
    assert(children.front()->s_token == "&");

    node_t* iden_node = children.back();

    // Check if we're just a local variable first
    if (std::find(locals.begin(), locals.end(), iden_node->s_identifier)
            != locals.end()) {
        return;
    }

    ::handle_global_reference(
            "",
            iden_node->s_buf,
            iden_node->s_identifier,
            false,
            0);

    // Now we need to remove the dereference
    size_t i = iden_node->s_buf.find('*');
    assert(i != std::string::npos);
    iden_node->s_buf.erase(i, i);
    
    // And make sure we wont try and globalise this again
    iden_node->s_identifier = string();

    // We no longer need the ampersand
    children.pop_front();
}
