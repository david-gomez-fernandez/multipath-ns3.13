#ifndef GLOBALISER_HANDLE_GLOBAL_H
#define GLOBALISER_HANDLE_GLOBAL_H

#include <string>

using std::string;

class node_t;

void handle_global_reference(const string &funcname, string &buf, string &iden, 
    bool is_var_static_local, bool toplevel = false, int snum = 0);
void global_define(const string& iden, const string &mangled, bool old_method,
    bool ext, bool vol, bool unb_arr, bool pointer, bool is_var_static_local);
string global_get_best_iden(string &iden);
bool is_function(const string &iden);
bool is_enum(const string &iden);
bool is_global(const string &iden);
bool is_global_section(const string &iden);
bool is_global_section_startstop(const string &iden);
bool is_static_local(const string &func, const string &iden);
bool global_variable_declared(const string& iden);
bool report_global(const string&, bool);
bool report_static_local(const string&, const string&);
string global_name(const string &iden, int stack_no);
string global_new_array_name(const string &iden, bool is_static_local);
string global_new_type_name(void);
string global_name_prefix(int stack_no);
string global_old_name(const string &iden);
string global_old_name_postfix(void);
string global_old_name_postfix(int stack);
void global_replace_toplevel(string &init, int stack);
void global_old_replace_toplevel(string &init, int stack);
void global_undefine(const string &iden);
bool global_expand_decl(const string &iden, const string &funcname, bool pointer, bool array);

// New.
bool global_is_type(const string& identifier);
bool global_is_type_function(const string& identifier);
void global_define_type(const string& identifier, const string& to,
                        bool function);
void global_define_function(const string& iden, bool is_extern);
void global_define_variable(const string& iden, bool is_extern, 
        bool is_enum, bool is_pointer, bool is_var_static_local,
        const string& struct_type_name);
void global_define_struct(const string& iden);
void global_declare_struct(const string& iden);
bool global_is_variable_type_struct_and_undefined(const string& iden);

void globaliser_report(int level, const string& str);
void globaliser_warn(const string& str);

void extern_global_array_initialisers_special_case();
void register_extern_global_array_initialiser(const string& iden, node_t* init_node);


#endif
