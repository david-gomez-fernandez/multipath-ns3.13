/*
    globaliser -- programmatically replace globals in C source code
    Copyright (C) 2003-2008 Sam Jansen

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

#include <string>
#include <list>

using namespace std;

struct node_t
{
    node_t();
    ~node_t();

    list<node_t *> children;
    string s_identifier;
    string s_buf;
    string s_ws;
    string s_attr;
    string s_struct;
    bool b_ignore;
    bool b_declaration_list;
    bool b_function_declaration;
    bool b_init_declarator;
    bool b_toplevel;
    
    bool b_typedef;
    bool b_static;
    bool b_extern;
    bool b_volatile;
    bool b_register;
    bool b_unbounded_array;

    // Whether this name is just a typedef'd name (so it will be a
    // single identifier, and that identifier will exist in the
    // typedef table)
    bool b_typedefed_name;

    // Nasty special case for referencing externed structs of undefined type.
    bool b_do_undefined_struct_special_case;
    
    int i_function_pointer;

    string s_token;


    /* New stuff for more intelligent declaration handling. */
    enum {
        t_general,
        t_declaration,
        t_init_declarator_list,
        t_init_declarator,
        t_declarator,
        t_direct_declarator,
        t_direct_declarator_array,
        t_function_declaration,
        t_parameter_type_list,
        t_typeof,
        t_statement_list,
        t_compound_statement,
        t_string,
        t_string_list,
    } type;

    void delete_children();
    void init();

    void clear_function_declaration();
    void clear_typedefed();
    bool check_compount_statement() const;
    bool check_typedef() const;
    bool check_ignore() const;
    bool get_extern() const;
    bool get_volatile() const;
    bool get_static() const;
    bool get_register() const;
    bool get_function_declaration_b() const;
    bool get_unbounded_array() const;
    bool identifiers_need_globalising(const string &func) const;
    void report_identifiers_not_globalised(const string &func) const;
    node_t *get_identifier();
    node_t *get_function_pointer();
    node_t *get_typeof();
    node_t *get_typedefed_node();
    node_t *get_struct();
    void print() const;
    void print_to_str(string &dest) const;

    string find_typedef_type();

    void do_void_declaration_special_case();

    node_t* get_function_pointer_from_idl();

    bool handle_global(string func = "", list<string> *locals = NULL,
            list<string> *static_locals = NULL);

    void check_for_ampersand_reference_special_case();
    void handle_ampersand_reference_special_case(list<string>& locals);

private:
    string remove_storage_class_specifiers();

    node_t* make_global_array(string iden, bool is_extern, bool is_volatile,
        bool is_pointer, bool is_var_static_local);

    void make_global_definition_old_method(
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
            string& result);

    node_t* make_global_definition_new_method(
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
            list<string>* static_locals);

    string get_whitespace();
    void remove_whitespace();
    string find_attr_and_remove();
    string remove_attribute(const string& attr);
    bool has_attribute();
    void print_attrs();
    node_t *find_attribute_strings(const string& s);
    
    bool remove_node(const string &token);

    void add_locals(string funcname, list<string> &locals, int &num_locals,
            list<string> &static_locals, int &num_static_locals);

    void add_locals_one_level(string funcname, list<string> &locals, int &num_locals,
            list<string> &static_locals, int &num_static_locals);

    void add_locals_simple(list<string> &locals, int &num_locals);

    void hgr_initialiser(string func, list<string>* locals,
            list<string>* static_locals);
    void hgr_toplevel(int snum = 0);

    void hgr(string funcname, list<string> &locals, 
            list<string> &static_locals, bool toplevel = false, 
            int snum = 0);

    void reduce();

public:
    node_t *get_function_declaration();
    void handle_global_references();

    explicit node_t(const string& buffer);

    /* The ugly set of constructors that follow allow the code to be somewhat
     * nicer in parser.yy. Unfortunately C++ doesn't allow for a nice way of
     * variable parameters, the C-method isn't the nicest (not type-safe, need
     * some way of saying when the parameter list ends, etc.) */
    node_t(node_t *a) { 
        init();
        children.push_back(a);
    }
    node_t(node_t *a, node_t *b) { 
        init();
        children.push_back(a); children.push_back(b);
    }
    node_t(node_t *a, node_t *b, node_t *c) {
        init();
        children.push_back(a); children.push_back(b); children.push_back(c);
    }
    node_t(node_t *a, node_t *b, node_t *c, node_t *d) { 
        init();
        children.push_back(a); children.push_back(b); children.push_back(c); 
        children.push_back(d);
    }
    node_t(node_t *a, node_t *b, node_t *c, node_t *d, node_t *e) { 
        init();
        children.push_back(a); children.push_back(b); children.push_back(c); 
        children.push_back(d); children.push_back(e);
    }
    node_t(node_t *a, node_t *b, node_t *c, node_t *d, node_t *e, node_t *f) {
        init();
        children.push_back(a); children.push_back(b); children.push_back(c); 
        children.push_back(d); children.push_back(e); children.push_back(f);
    }
    node_t(node_t *a, node_t *b, node_t *c, node_t *d, node_t *e, node_t *f, 
            node_t *g) {
        init();
        children.push_back(a); children.push_back(b); children.push_back(c); 
        children.push_back(d); children.push_back(e); children.push_back(f); 
        children.push_back(g); 
    }
    node_t(node_t *a, node_t *b, node_t *c, node_t *d, node_t *e, node_t *f, 
            node_t *g, node_t *h) {
        init();
        children.push_back(a); children.push_back(b); children.push_back(c); 
        children.push_back(d); children.push_back(e); children.push_back(f); 
        children.push_back(g); children.push_back(h);
    }
    node_t(node_t *a, node_t *b, node_t *c, node_t *d, node_t *e, node_t *f, 
            node_t *g, node_t *h, node_t *i) {
        init();
        children.push_back(a); children.push_back(b); children.push_back(c); 
        children.push_back(d); children.push_back(e); children.push_back(f); 
        children.push_back(g); children.push_back(h); children.push_back(i);
    }
};


