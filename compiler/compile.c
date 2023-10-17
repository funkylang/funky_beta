#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_funky__compile_module = -1,
  str_fky = -2,
  chr_47 = -3,
  string_1 = -4,
  key_value_pair_68_1 = -5,
  lambda_1 = -6,
  str_The_source_file = -7,
  str__does_not_contai = -8,
  num_1 = -9,
  lambda_2 = -10,
  chr_33 = -11,
  lambda_3 = -12,
  lambda_required_modules = -13,
  str_basicstdlib = -14,
  lambda_4 = -15,
  num_0 = -16,
  tuple_92_22 = -17,
  str_std = -18,
  key_value_pair_92_15 = -19,
  lambda_5 = -20,
  func_retrieve_meta_instructions = -21,
  lambda_loop = -22,
  lambda_6 = -23,
  lambda_7 = -24,
  lambda_NAMESPACE_INSTRUCTION = -25,
  lambda_version_is_defined = -26,
  lambda_8 = -27,
  lambda_9 = -28,
  lambda_10 = -29,
  string_2 = -30,
  string_3 = -31,
  string_4 = -32,
  lambda_defined_namespacesnamespace_name_is_defined = -33,
  str_Namespace_is_alr = -34,
  lambda_11 = -35,
  lambda_REQUIRE_INSTRUCTION = -36,
  string_5 = -37,
  lambda_12 = -38,
  minus_num_1 = -39,
  num_3 = -40,
  lambda_required_modulesrequired_module = -41,
  str_Module_is_alread = -42,
  lambda_13 = -43,
  lambda_USING_INSTRUCTION = -44,
  lambda_14 = -45,
  lambda_15 = -46,
  lambda_used_namespacesused_namespace_is_defined = -47,
  str_Namespace_is_alr_2 = -48,
  lambda_16 = -49,
  lambda_RESOLVE_INSTRUCTION = -50,
  lambda_namespace_versionsresolved_namespace_is_defined = -51,
  str_Namespace_is_alr_3 = -52,
  lambda_17 = -53,
  lambda_18 = -54,
  str_unstable = -55,
  lambda_19 = -56,
  string_6 = -57,
  lambda_ALIAS_INSTRUCTION = -58,
  lambda_namespace_aliasesalias_is_defined = -59,
  str_Redefinition_of = -60,
  lambda_20 = -61,
  lambda_ALLOW_INSTRUCTION = -62,
  lambda_ALLOW_HIDDEN = -63,
  lambda_21 = -64,
  str_Allow_hidden_was = -65,
  lambda_ALLOW_UNUSED = -66,
  lambda_22 = -67,
  str_Allow_unused_was = -68,
  lambda_MULTILINE_REMARK = -69,
  lambda_23 = -70,
  func_funky_types__node___equal = -71,
  func_funky_types__node___hash = -72,
  func_collect_global_definitions = -73,
  lambda_24 = -74,
  func_funky_types__node___add_definitions = -75,
  func_funky_types__statement___add_definitions = -76,
  lambda_25 = -77,
  lambda_26 = -78,
  lambda_27 = -79,
  func_resolve_arguments = -80,
  func_funky_types__node___add_definition = -81,
  func_funky_types__definition___add_definition = -82,
  func_collect_global_redefinitions = -83,
  lambda_28 = -84,
  func_funky_types__node___add_redefinitions = -85,
  func_funky_types__statement___add_redefinitions = -86,
  func_funky_types__node___add_redefinition = -87,
  func_add_identifier_redefinition = -88,
  chr_58 = -89,
  lambda_29 = -90
};

enum {
  var__START = FIRST_VAR-1,
  var_funky__resolve_variable, // derived
  var_empty_hash_table, // extern
  var_std__assign, // extern
  var_redefined_variables, // derived
  var_empty_hash_set, // extern
  var_funky__variables, // derived
  var_undefined, // extern
  var_funky__literals, // derived
  var_funky__defined_namespaces, // derived
  var_funky__required_modules, // derived
  var_funky__used_namespaces, // derived
  var_funky__namespace_versions, // derived
  var_funky__namespace_aliases, // derived
  var_funky__allow_hidden, // derived
  var_funky__allow_unused, // derived
  var_funky__compile_module, // initialized
  var_base_directory, // extern
  var_without_prefix, // extern
  var_current_filename, // extern
  var_without_suffix, // extern
  var_std__key_value_pair, // extern
  var_current_module_name, // extern
  var_replace_all, // extern
  var_69_7_statements, // dynamic
  var_parse_top_level_statement_group, // extern
  var_parse, // extern
  var_is_undefined, // extern
  var_std__string, // extern
  var_syntax_error, // extern
  var_on, // extern
  var_78_1_first_statement, // dynamic
  var_is_a_remark, // extern
  var_text_of, // extern
  var_has_prefix, // extern
  var_79_1_is_a_main_module, // dynamic
  var_std__and, // extern
  var_defined_namespaces, // extern
  var_required_modules, // extern
  var_used_namespaces, // extern
  var_namespace_versions, // extern
  var_namespace_aliases, // extern
  var_allow_hidden, // extern
  var_allow_unused, // extern
  var_is_empty, // extern
  var_hash_set, // extern
  var_update_if, // extern
  var_tuple, // extern
  var_hash_table, // extern
  var_resolve_variable, // extern
  var_simplify_statement, // extern
  var_append, // extern
  var_empty_list, // extern
  var_map_reduce, // extern
  var_variables, // extern
  var_collect_variables, // extern
  var_categorize_variables, // extern
  var_literals, // extern
  var_collect_literals, // extern
  var_generate_tabular_code, // extern
  var_146_30_statements, // dynamic
  var_147_1_i, // dynamic
  var_148_1_n, // dynamic
  var_length_of, // extern
  var_149_1_defined_namespaces, // dynamic
  var_empty_insert_order_table, // extern
  var_150_1_required_modules, // dynamic
  var_empty_insert_order_set, // extern
  var_151_1_used_namespaces, // dynamic
  var_152_1_namespace_versions, // dynamic
  var_153_1_namespace_aliases, // dynamic
  var_154_1_allow_hidden, // dynamic
  var_false, // extern
  var_155_1_allow_unused, // dynamic
  var_std__less, // extern
  var_169_1_statement, // dynamic
  var_node_type_of, // extern
  var_NAMESPACE_INSTRUCTION, // extern
  var_172_1_namespace_name, // dynamic
  var_funky__name_of, // extern
  var_173_1_version, // dynamic
  var_version_of, // extern
  var_is_defined, // extern
  var_174_4_major, // dynamic
  var_174_11_minor, // dynamic
  var_UNSTABLE, // extern
  var_std__equal, // extern
  var_major_of, // extern
  var_minor_of, // extern
  var_if, // extern
  var_inc, // extern
  var_next, // extern
  var_REQUIRE_INSTRUCTION, // extern
  var_190_1_required_module, // dynamic
  var_filename_of, // extern
  var_until, // extern
  var_range, // extern
  var_true, // extern
  var_USING_INSTRUCTION, // extern
  var_205_1_used_namespace, // dynamic
  var_206_1_version, // dynamic
  var_207_4_major, // dynamic
  var_207_11_minor, // dynamic
  var_RESOLVE_INSTRUCTION, // extern
  var_219_1_resolved_namespace, // dynamic
  var_220_1_version, // dynamic
  var_ALIAS_INSTRUCTION, // extern
  var_234_1_alias, // dynamic
  var_alias_of, // extern
  var_235_1_name, // dynamic
  var_ALLOW_INSTRUCTION, // extern
  var_pragma_of, // extern
  var_ALLOW_HIDDEN, // extern
  var_ALLOW_UNUSED, // extern
  var_case, // extern
  var_MULTILINE_REMARK, // extern
  var_loop, // extern
  var_funky__is_a_slot_definition, // attribute
  var_funky_types__node, // extern
  var_is_a_slot_definition, // extern polymorphic
  var_funky_types__attribute_value_pair, // extern
  var_funky_types__method_value_pair, // extern
  var_funky_types__type_function, // extern
  var_funky__key_of, // attribute
  var_equal, // extern polymorphic
  var_hash, // extern polymorphic
  var_add_definitions, // attribute
  var_for_each, // extern
  var_funky_types__statement, // extern
  var_297_1_head, // dynamic
  var_head_of, // extern
  var_298_1_arguments, // dynamic
  var_arguments_of, // extern
  var_DEFINITION, // extern
  var_is_not_empty, // extern
  var_not, // extern
  var_identifier_of, // extern
  var_add_definition, // attribute
  var_funky_types__definition, // extern
  var_add_redefinitions, // attribute
  var_push, // extern
  var_add_redefinition, // attribute
  var_funky_types__redefinition, // extern
  var_funky_types__update, // extern
  var_345_1_identifier, // dynamic
  var_contains, // extern
  var__END
};


static TAB_NUM t_func_funky__compile_module[] = {
  4, // locals
  2, // parameters
  LOCAL(3), // 60_25_filename
  LOCAL(4), // 60_34_lines
  // without_prefix &filename base_directory
  var_without_prefix, 2, LOCAL(3), var_base_directory, 1, LOCAL(3),
  // !current_filename filename
  LET, 1, LOCAL(3), 1, var_current_filename,
  // filename .without_suffix. ".fky"
  var_without_suffix, 2, LOCAL(3), str_fky, 1, LOCAL(1),
  // !current_module_name
  var_replace_all, 2, LOCAL(1), key_value_pair_68_1, 1, var_current_module_name,
  // parse $statements lines parse_top_level_statement_group
  var_parse, 2, LOCAL(4), var_parse_top_level_statement_group, 1, var_69_7_statements,
  // is_undefined:
  var_is_undefined, 1, var_69_7_statements, 1, LOCAL(1),
  // on statements.is_undefined:
  var_on, 2, LOCAL(1), lambda_1, 0,
  // $first_statement statements(1)
  var_69_7_statements, 1, num_1, 1, var_78_1_first_statement,
  // is_a_remark
  var_is_a_remark, 1, var_78_1_first_statement, 1, LOCAL(1),
  // $is_a_main_module
  var_std__and, 2, LOCAL(1), lambda_2, 1, var_79_1_is_a_main_module,
  // retrieve_meta_instructions &statements
  func_retrieve_meta_instructions, 1, var_69_7_statements, 8, var_69_7_statements, var_defined_namespaces, var_required_modules, var_used_namespaces, var_namespace_versions, var_namespace_aliases, var_allow_hidden, var_allow_unused,
  // is_empty && is_a_main_module
  var_is_empty, 1, var_required_modules, 1, LOCAL(1),
  // is_empty && is_a_main_module
  var_std__and, 2, LOCAL(1), lambda_3, 1, LOCAL(2),
  // update_if required_modules.is_empty && is_a_main_module
  var_update_if, 3, LOCAL(2), var_required_modules, lambda_required_modules, 1, var_required_modules,
  // is_empty &used_namespaces
  var_is_empty, 1, var_used_namespaces, 1, LOCAL(1),
  // update_if used_namespaces.is_empty &used_namespaces
  var_update_if, 3, LOCAL(1), var_used_namespaces, lambda_4, 1, var_used_namespaces,
  // collect_global_definitions !resolve_variable statements
  func_collect_global_definitions, 1, var_69_7_statements, 1, var_resolve_variable,
  // update_if is_a_main_module &redefined_variables:
  var_update_if, 3, var_79_1_is_a_main_module, var_redefined_variables, lambda_5, 1, var_redefined_variables,
  // map_reduce &statements simplify_statement append empty_list
  var_map_reduce, 4, var_69_7_statements, var_simplify_statement, var_append, var_empty_list, 1, var_69_7_statements,
  // collect_variables !variables statements
  var_collect_variables, 1, var_69_7_statements, 1, var_variables,
  // categorize_variables &variables
  var_categorize_variables, 1, var_variables, 1, var_variables,
  // collect_literals !literals statements
  var_collect_literals, 1, var_69_7_statements, 1, var_literals,
  // generate_tabular_code statements is_a_main_module
  var_generate_tabular_code, 2, var_69_7_statements, var_79_1_is_a_main_module, TAIL_CALL,
  POS(63, 3),
  POS(64, 3),
  POS(67, 7),
  POS(65, 3),
  POS(69, 3),
  POS(70, 17),
  POS(70, 3),
  POS(78, 3),
  POS(81, 23),
  POS(79, 3),
  POS(86, 3),
  POS(89, 30),
  POS(89, 30),
  POS(89, 3),
  POS(91, 29),
  POS(91, 3),
  POS(93, 3),
  POS(95, 3),
  POS(97, 3),
  POS(107, 3),
  POS(109, 3),
  POS(111, 3),
  POS(126, 3)
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_The_source_file, var_current_filename, str__does_not_contai, 1, LOCAL(1),
  // syntax_error "
  var_syntax_error, 1, LOCAL(1), TAIL_CALL,
  POS(71, 18),
  POS(71, 5)
};

static TAB_NUM t_lambda_2[] = {
  2, // locals
  0, // parameters
  // text_of(first_statement) .has_prefix. '!'
  var_text_of, 1, var_78_1_first_statement, 1, LOCAL(1),
  // text_of(first_statement) .has_prefix. '!'
  var_has_prefix, 2, LOCAL(1), chr_33, 1, LOCAL(2),
  // text_of(first_statement) .has_prefix. '!'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(82, 7),
  POS(82, 7),
  POS(82, 7)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  // is_a_main_module
  LET, 1, var_79_1_is_a_main_module, TAIL_CALL,
  POS(89, 42)
};

static TAB_NUM t_lambda_required_modules[] = {
  1, // locals
  0, // parameters
  // hash_set("basic/stdlib")
  var_hash_set, 1, str_basicstdlib, 1, LOCAL(1),
  //  hash_set("basic/stdlib")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(90, 26),
  POS(90, 25)
};

static TAB_NUM t_lambda_4[] = {
  3, // locals
  0, // parameters
  // hash_table("std" = tuple(1 0))
  var_hash_table, 1, key_value_pair_92_15, 1, LOCAL(3),
  //  hash_table("std" = tuple(1 0))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(92, 8),
  POS(92, 7)
};

static TAB_NUM t_lambda_5[] = {
  0, // locals
  0, // parameters
  // collect_global_redefinitions statements
  func_collect_global_redefinitions, 1, var_69_7_statements, TAIL_CALL,
  POS(96, 5)
};

static TAB_NUM t_func_retrieve_meta_instructions[] = {
  0, // locals
  1, // parameters
  var_146_30_statements,
  // $i 1
  LET, 1, num_1, 1, var_147_1_i,
  // $n length_of(statements)
  var_length_of, 1, var_146_30_statements, 1, var_148_1_n,
  // $defined_namespaces empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_149_1_defined_namespaces,
  // $required_modules empty_insert_order_set
  LET, 1, var_empty_insert_order_set, 1, var_150_1_required_modules,
  // $used_namespaces empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_151_1_used_namespaces,
  // $namespace_versions empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_152_1_namespace_versions,
  // $namespace_aliases empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_153_1_namespace_aliases,
  // $allow_hidden false
  LET, 1, var_false, 1, var_154_1_allow_hidden,
  // $allow_unused false
  LET, 1, var_false, 1, var_155_1_allow_unused,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(147, 3),
  POS(148, 3),
  POS(149, 3),
  POS(150, 3),
  POS(151, 3),
  POS(152, 3),
  POS(153, 3),
  POS(154, 3),
  POS(155, 3),
  POS(156, 3)
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_148_1_n, var_147_1_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_6, lambda_7, TAIL_CALL,
  POS(158, 11),
  POS(157, 5)
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // 
  LET, 8, var_empty_list, var_149_1_defined_namespaces, var_150_1_required_modules, var_151_1_used_namespaces, var_152_1_namespace_versions, var_153_1_namespace_aliases, var_154_1_allow_hidden, var_155_1_allow_unused, TAIL_CALL,
  POS(159, 9)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // $statement statements(i)
  var_146_30_statements, 1, var_147_1_i, 1, var_169_1_statement,
  // node_type_of(statement)
  var_node_type_of, 1, var_169_1_statement, 1, LOCAL(1),
  // case node_type_of(statement)
  var_case, 16, LOCAL(1), var_NAMESPACE_INSTRUCTION, lambda_NAMESPACE_INSTRUCTION, var_REQUIRE_INSTRUCTION, lambda_REQUIRE_INSTRUCTION, var_USING_INSTRUCTION, lambda_USING_INSTRUCTION, var_RESOLVE_INSTRUCTION, lambda_RESOLVE_INSTRUCTION, var_ALIAS_INSTRUCTION, lambda_ALIAS_INSTRUCTION, var_ALLOW_INSTRUCTION, lambda_ALLOW_INSTRUCTION, var_MULTILINE_REMARK, lambda_MULTILINE_REMARK, lambda_23, TAIL_CALL,
  POS(169, 9),
  POS(170, 14),
  POS(170, 9)
};

static TAB_NUM t_lambda_NAMESPACE_INSTRUCTION[] = {
  2, // locals
  0, // parameters
  // $namespace_name funky::name_of(statement)
  var_funky__name_of, 1, var_169_1_statement, 1, var_172_1_namespace_name,
  // $version version_of(statement)
  var_version_of, 1, var_169_1_statement, 1, var_173_1_version,
  // is_defined:
  var_is_defined, 1, var_173_1_version, 1, LOCAL(1),
  // if $major $minor
  var_if, 3, LOCAL(1), lambda_version_is_defined, lambda_10, 2, var_174_4_major, var_174_11_minor,
  // "-@(major)"
  var_std__string, 2, string_4, var_174_4_major, 1, LOCAL(1),
  // append &namespace_name "-@(major)"
  var_append, 2, var_172_1_namespace_name, LOCAL(1), 1, var_172_1_namespace_name,
  // defined_namespaces(namespace_name).is_defined:
  var_149_1_defined_namespaces, 1, var_172_1_namespace_name, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_defined_namespacesnamespace_name_is_defined, lambda_11, TAIL_CALL,
  POS(172, 13),
  POS(173, 13),
  POS(175, 23),
  POS(174, 13),
  POS(181, 36),
  POS(181, 13),
  POS(183, 15),
  POS(183, 50),
  POS(182, 13)
};

static TAB_NUM t_lambda_version_is_defined[] = {
  2, // locals
  0, // parameters
  // node_type_of(version) == UNSTABLE
  var_node_type_of, 1, var_173_1_version, 1, LOCAL(1),
  // node_type_of(version) == UNSTABLE
  var_std__equal, 2, LOCAL(1), var_UNSTABLE, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_8, lambda_9, TAIL_CALL,
  POS(177, 20),
  POS(177, 20),
  POS(176, 18)
};

static TAB_NUM t_lambda_8[] = {
  0, // locals
  0, // parameters
  //  0 0
  LET, 2, num_0, num_0, TAIL_CALL,
  POS(178, 22)
};

static TAB_NUM t_lambda_9[] = {
  2, // locals
  0, // parameters
  // major_of(version) minor_of(version)
  var_major_of, 1, var_173_1_version, 1, LOCAL(1),
  // minor_of(version)
  var_minor_of, 1, var_173_1_version, 1, LOCAL(2),
  //  major_of(version) minor_of(version)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(179, 23),
  POS(179, 41),
  POS(179, 22)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  //  "1" "0"
  LET, 2, string_2, string_3, TAIL_CALL,
  POS(180, 17)
};

static TAB_NUM t_lambda_defined_namespacesnamespace_name_is_defined[] = {
  0, // locals
  0, // parameters
  // syntax_error "Namespace is already defined" statement
  var_syntax_error, 2, str_Namespace_is_alr, var_169_1_statement, TAIL_CALL,
  POS(184, 17)
};

static TAB_NUM t_lambda_11[] = {
  2, // locals
  0, // parameters
  // !defined_namespaces(namespace_name) tuple(major minor)
  var_tuple, 2, var_174_4_major, var_174_11_minor, 1, LOCAL(2),
  // defined_namespaces(namespace_name) tuple(major minor)
  var_149_1_defined_namespaces, 2, var_172_1_namespace_name, LOCAL(2), 1, var_149_1_defined_namespaces,
  // inc &i
  var_inc, 1, var_147_1_i, 1, var_147_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(186, 17),
  POS(186, 18),
  POS(187, 17),
  POS(188, 17)
};

static TAB_NUM t_lambda_REQUIRE_INSTRUCTION[] = {
  1, // locals
  0, // parameters
  // $required_module filename_of(statement)
  var_filename_of, 1, var_169_1_statement, 1, var_190_1_required_module,
  // required_module .has_prefix. "./" &required_module:
  var_has_prefix, 2, var_190_1_required_module, string_5, 1, LOCAL(1),
  // update_if required_module .has_prefix. "./" &required_module:
  var_update_if, 3, LOCAL(1), var_190_1_required_module, lambda_12, 1, var_190_1_required_module,
  // required_modules(required_module):
  var_150_1_required_modules, 1, var_190_1_required_module, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_required_modulesrequired_module, lambda_13, TAIL_CALL,
  POS(190, 13),
  POS(191, 23),
  POS(191, 13),
  POS(198, 15),
  POS(197, 13)
};

static TAB_NUM t_lambda_12[] = {
  3, // locals
  0, // parameters
  // until(current_filename '/' -1)
  var_until, 3, var_current_filename, chr_47, minus_num_1, 1, LOCAL(1),
  // range(required_module 3 -1)
  var_range, 3, var_190_1_required_module, num_3, minus_num_1, 1, LOCAL(2),
  // append
  var_append, 3, string_5, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(195, 19),
  POS(196, 19),
  POS(193, 17),
  POS(192, 15)
};

static TAB_NUM t_lambda_required_modulesrequired_module[] = {
  0, // locals
  0, // parameters
  // syntax_error "Module is already required" statement
  var_syntax_error, 2, str_Module_is_alread, var_169_1_statement, TAIL_CALL,
  POS(199, 17)
};

static TAB_NUM t_lambda_13[] = {
  0, // locals
  0, // parameters
  // required_modules(required_module) true
  var_150_1_required_modules, 2, var_190_1_required_module, var_true, 1, var_150_1_required_modules,
  // inc &i
  var_inc, 1, var_147_1_i, 1, var_147_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(201, 18),
  POS(202, 17),
  POS(203, 17)
};

static TAB_NUM t_lambda_USING_INSTRUCTION[] = {
  2, // locals
  0, // parameters
  // $used_namespace funky::name_of(statement)
  var_funky__name_of, 1, var_169_1_statement, 1, var_205_1_used_namespace,
  // $version version_of(statement)
  var_version_of, 1, var_169_1_statement, 1, var_206_1_version,
  // is_defined
  var_is_defined, 1, var_206_1_version, 1, LOCAL(1),
  // if $major $minor
  var_if, 3, LOCAL(1), lambda_14, lambda_15, 2, var_207_4_major, var_207_11_minor,
  // used_namespaces(used_namespace).is_defined:
  var_151_1_used_namespaces, 1, var_205_1_used_namespace, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_used_namespacesused_namespace_is_defined, lambda_16, TAIL_CALL,
  POS(205, 13),
  POS(206, 13),
  POS(208, 23),
  POS(207, 13),
  POS(212, 15),
  POS(212, 47),
  POS(211, 13)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // major_of(version) minor_of(version)
  var_major_of, 1, var_206_1_version, 1, LOCAL(1),
  // minor_of(version)
  var_minor_of, 1, var_206_1_version, 1, LOCAL(2),
  //  major_of(version) minor_of(version)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(209, 18),
  POS(209, 36),
  POS(209, 17)
};

static TAB_NUM t_lambda_15[] = {
  0, // locals
  0, // parameters
  //  "1" "0"
  LET, 2, string_2, string_3, TAIL_CALL,
  POS(210, 17)
};

static TAB_NUM t_lambda_used_namespacesused_namespace_is_defined[] = {
  0, // locals
  0, // parameters
  // syntax_error "Namespace is already used" statement
  var_syntax_error, 2, str_Namespace_is_alr_2, var_169_1_statement, TAIL_CALL,
  POS(213, 17)
};

static TAB_NUM t_lambda_16[] = {
  2, // locals
  0, // parameters
  // !used_namespaces(used_namespace) tuple(major minor)
  var_tuple, 2, var_207_4_major, var_207_11_minor, 1, LOCAL(2),
  // used_namespaces(used_namespace) tuple(major minor)
  var_151_1_used_namespaces, 2, var_205_1_used_namespace, LOCAL(2), 1, var_151_1_used_namespaces,
  // inc &i
  var_inc, 1, var_147_1_i, 1, var_147_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(215, 17),
  POS(215, 18),
  POS(216, 17),
  POS(217, 17)
};

static TAB_NUM t_lambda_RESOLVE_INSTRUCTION[] = {
  2, // locals
  0, // parameters
  // $resolved_namespace funky::name_of(statement)
  var_funky__name_of, 1, var_169_1_statement, 1, var_219_1_resolved_namespace,
  // $version version_of(statement)
  var_version_of, 1, var_169_1_statement, 1, var_220_1_version,
  // namespace_versions(resolved_namespace).is_defined:
  var_152_1_namespace_versions, 1, var_219_1_resolved_namespace, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_namespace_versionsresolved_namespace_is_defined, lambda_17, TAIL_CALL,
  POS(219, 13),
  POS(220, 13),
  POS(222, 15),
  POS(222, 54),
  POS(221, 13)
};

static TAB_NUM t_lambda_namespace_versionsresolved_namespace_is_defined[] = {
  0, // locals
  0, // parameters
  // syntax_error "Namespace is already resolved" statement
  var_syntax_error, 2, str_Namespace_is_alr_3, var_169_1_statement, TAIL_CALL,
  POS(223, 17)
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // node_type_of(version) == UNSTABLE
  var_node_type_of, 1, var_220_1_version, 1, LOCAL(1),
  // node_type_of(version) == UNSTABLE
  var_std__equal, 2, LOCAL(1), var_UNSTABLE, 1, LOCAL(2),
  // !version
  var_if, 3, LOCAL(2), lambda_18, lambda_19, 1, var_220_1_version,
  // namespace_versions(resolved_namespace) version
  var_152_1_namespace_versions, 2, var_219_1_resolved_namespace, var_220_1_version, 1, var_152_1_namespace_versions,
  // inc &i
  var_inc, 1, var_147_1_i, 1, var_147_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(227, 21),
  POS(227, 21),
  POS(225, 17),
  POS(230, 18),
  POS(231, 17),
  POS(232, 17)
};

static TAB_NUM t_lambda_18[] = {
  0, // locals
  0, // parameters
  //  "unstable"
  LET, 1, str_unstable, TAIL_CALL,
  POS(228, 23)
};

static TAB_NUM t_lambda_19[] = {
  3, // locals
  0, // parameters
  // major_of(version)).@(minor_of(version))"
  var_major_of, 1, var_220_1_version, 1, LOCAL(1),
  // minor_of(version))"
  var_minor_of, 1, var_220_1_version, 1, LOCAL(2),
  // "@(major_of(version)).@(minor_of(version))"
  var_std__string, 3, LOCAL(1), string_6, LOCAL(2), 1, LOCAL(3),
  //  "@(major_of(version)).@(minor_of(version))"
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(229, 27),
  POS(229, 48),
  POS(229, 24),
  POS(229, 23)
};

static TAB_NUM t_lambda_ALIAS_INSTRUCTION[] = {
  2, // locals
  0, // parameters
  // $alias alias_of(statement)
  var_alias_of, 1, var_169_1_statement, 1, var_234_1_alias,
  // $name funky::name_of(statement)
  var_funky__name_of, 1, var_169_1_statement, 1, var_235_1_name,
  // namespace_aliases(alias).is_defined:
  var_153_1_namespace_aliases, 1, var_234_1_alias, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_namespace_aliasesalias_is_defined, lambda_20, TAIL_CALL,
  POS(234, 13),
  POS(235, 13),
  POS(237, 15),
  POS(237, 40),
  POS(236, 13)
};

static TAB_NUM t_lambda_namespace_aliasesalias_is_defined[] = {
  0, // locals
  0, // parameters
  // syntax_error "Redefinition of namespace alias" statement
  var_syntax_error, 2, str_Redefinition_of, var_169_1_statement, TAIL_CALL,
  POS(238, 17)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  // namespace_aliases(alias) name
  var_153_1_namespace_aliases, 2, var_234_1_alias, var_235_1_name, 1, var_153_1_namespace_aliases,
  // inc &i
  var_inc, 1, var_147_1_i, 1, var_147_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(240, 18),
  POS(241, 17),
  POS(242, 17)
};

static TAB_NUM t_lambda_ALLOW_INSTRUCTION[] = {
  2, // locals
  0, // parameters
  // pragma_of(statement))
  var_pragma_of, 1, var_169_1_statement, 1, LOCAL(1),
  // node_type_of(pragma_of(statement))
  var_node_type_of, 1, LOCAL(1), 1, LOCAL(2),
  // case node_type_of(pragma_of(statement))
  var_case, 5, LOCAL(2), var_ALLOW_HIDDEN, lambda_ALLOW_HIDDEN, var_ALLOW_UNUSED, lambda_ALLOW_UNUSED, TAIL_CALL,
  POS(244, 31),
  POS(244, 18),
  POS(244, 13)
};

static TAB_NUM t_lambda_ALLOW_HIDDEN[] = {
  0, // locals
  0, // parameters
  // on allow_hidden:
  var_on, 2, var_154_1_allow_hidden, lambda_21, 0,
  // !allow_hidden true
  LET, 1, var_true, 1, var_154_1_allow_hidden,
  // inc &i
  var_inc, 1, var_147_1_i, 1, var_147_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(246, 17),
  POS(248, 17),
  POS(249, 17),
  POS(250, 17)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // syntax_error "Allow hidden was already set" statement
  var_syntax_error, 2, str_Allow_hidden_was, var_169_1_statement, TAIL_CALL,
  POS(247, 19)
};

static TAB_NUM t_lambda_ALLOW_UNUSED[] = {
  0, // locals
  0, // parameters
  // on allow_unused:
  var_on, 2, var_155_1_allow_unused, lambda_22, 0,
  // !allow_unused true
  LET, 1, var_true, 1, var_155_1_allow_unused,
  // inc &i
  var_inc, 1, var_147_1_i, 1, var_147_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(252, 17),
  POS(254, 17),
  POS(255, 17),
  POS(256, 17)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // syntax_error "Allow unused was already set" statement
  var_syntax_error, 2, str_Allow_unused_was, var_169_1_statement, TAIL_CALL,
  POS(253, 19)
};

static TAB_NUM t_lambda_MULTILINE_REMARK[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_147_1_i, 1, var_147_1_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(258, 13),
  POS(259, 13)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // range(statements i -1)
  var_range, 3, var_146_30_statements, var_147_1_i, minus_num_1, 1, LOCAL(1),
  // 
  LET, 8, LOCAL(1), var_149_1_defined_namespaces, var_150_1_required_modules, var_151_1_used_namespaces, var_152_1_namespace_versions, var_153_1_namespace_aliases, var_154_1_allow_hidden, var_155_1_allow_unused, TAIL_CALL,
  POS(261, 13),
  POS(260, 13)
};

static TAB_NUM t_func_funky_types__node___equal[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 281_27_left
  LOCAL(5), // 281_32_right
  // funky::key_of(left) == funky::key_of(right)
  var_funky__key_of, 1, LOCAL(4), 1, LOCAL(1),
  // funky::key_of(right)
  var_funky__key_of, 1, LOCAL(5), 1, LOCAL(2),
  // funky::key_of(left) == funky::key_of(right)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // -> funky::key_of(left) == funky::key_of(right)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(282, 6),
  POS(282, 29),
  POS(282, 6),
  POS(282, 3)
};

static TAB_NUM t_func_funky_types__node___hash[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 284_26_self
  // funky::key_of(self))
  var_funky__key_of, 1, LOCAL(3), 1, LOCAL(1),
  // hash(funky::key_of(self))
  var_hash, 1, LOCAL(1), 1, LOCAL(2),
  // -> hash(funky::key_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(284, 41),
  POS(284, 36),
  POS(284, 33)
};

static TAB_NUM t_func_collect_global_definitions[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 288_30_statements
  // for_each statements add_definitions -> resolve_variable
  var_for_each, 3, LOCAL(1), var_add_definitions, lambda_24, TAIL_CALL,
  POS(289, 3)
};

static TAB_NUM t_lambda_24[] = {
  0, // locals
  0, // parameters
  //  resolve_variable
  LET, 1, var_resolve_variable, TAIL_CALL,
  POS(289, 41)
};

static TAB_NUM t_func_funky_types__node___add_definitions[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next
  var_next, 0, TAIL_CALL,
  POS(294, 3)
};

static TAB_NUM t_func_funky_types__statement___add_definitions[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 296_42_self
  // $head head_of(self)
  var_head_of, 1, LOCAL(4), 1, var_297_1_head,
  // $arguments arguments_of(self)
  var_arguments_of, 1, LOCAL(4), 1, var_298_1_arguments,
  // node_type_of(head) == DEFINITION
  var_node_type_of, 1, var_297_1_head, 1, LOCAL(1),
  // node_type_of(head) == DEFINITION
  var_std__equal, 2, LOCAL(1), var_DEFINITION, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_25, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_27, func_resolve_arguments, TAIL_CALL,
  POS(297, 3),
  POS(298, 3),
  POS(301, 7),
  POS(301, 7),
  POS(300, 7),
  POS(299, 3)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // is_not_empty
  var_is_not_empty, 1, var_298_1_arguments, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_26, 1, LOCAL(2),
  // arguments.is_not_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(302, 17),
  POS(300, 7),
  POS(302, 7)
};

static TAB_NUM t_lambda_26[] = {
  3, // locals
  0, // parameters
  // arguments(1).is_a_slot_definition)
  var_298_1_arguments, 1, num_1, 1, LOCAL(1),
  // is_a_slot_definition)
  var_is_a_slot_definition, 1, LOCAL(1), 1, LOCAL(2),
  // not(arguments(1).is_a_slot_definition)
  var_not, 1, LOCAL(2), 1, LOCAL(3),
  // not(arguments(1).is_a_slot_definition)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(303, 11),
  POS(303, 24),
  POS(303, 7),
  POS(303, 7)
};

static TAB_NUM t_lambda_27[] = {
  1, // locals
  0, // parameters
  // $identifier identifier_of(head)
  var_identifier_of, 1, var_297_1_head, 1, LOCAL(1),
  // resolve_variable(identifier) identifier
  var_resolve_variable, 2, LOCAL(1), LOCAL(1), 1, var_resolve_variable,
  // resolve_arguments
  func_resolve_arguments, 0, TAIL_CALL,
  POS(305, 7),
  POS(306, 8),
  POS(307, 7)
};

static TAB_NUM t_func_resolve_arguments[] = {
  0, // locals
  0, // parameters
  // for_each arguments add_definition next
  var_for_each, 3, var_298_1_arguments, var_add_definition, var_next, TAIL_CALL,
  POS(311, 5)
};

static TAB_NUM t_func_funky_types__node___add_definition[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next
  var_next, 0, TAIL_CALL,
  POS(316, 3)
};

static TAB_NUM t_func_funky_types__definition___add_definition[] = {
  2, // locals
  1, // parameters
  LOCAL(1), // 318_42_self
  // $identifier identifier_of(self)
  var_identifier_of, 1, LOCAL(1), 1, LOCAL(2),
  // resolve_variable(identifier) identifier
  var_resolve_variable, 2, LOCAL(2), LOCAL(2), 1, var_resolve_variable,
  // next
  var_next, 0, TAIL_CALL,
  POS(319, 3),
  POS(320, 4),
  POS(321, 3)
};

static TAB_NUM t_func_collect_global_redefinitions[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 323_32_statements
  // for_each statements add_redefinitions -> redefined_variables
  var_for_each, 3, LOCAL(1), var_add_redefinitions, lambda_28, TAIL_CALL,
  POS(324, 3)
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  //  redefined_variables
  LET, 1, var_redefined_variables, TAIL_CALL,
  POS(324, 43)
};

static TAB_NUM t_func_funky_types__node___add_redefinitions[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next
  var_next, 0, TAIL_CALL,
  POS(329, 3)
};

static TAB_NUM t_func_funky_types__statement___add_redefinitions[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 331_44_self
  // arguments_of(self) head_of(self)) add_redefinition
  var_arguments_of, 1, LOCAL(4), 1, LOCAL(1),
  // head_of(self)) add_redefinition
  var_head_of, 1, LOCAL(4), 1, LOCAL(2),
  // push(arguments_of(self) head_of(self)) add_redefinition
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // for_each
  var_for_each, 3, LOCAL(3), var_add_redefinition, var_next, TAIL_CALL,
  POS(333, 10),
  POS(333, 29),
  POS(333, 5),
  POS(332, 3)
};

static TAB_NUM t_func_funky_types__node___add_redefinition[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next
  var_next, 0, TAIL_CALL,
  POS(339, 3)
};

static TAB_NUM t_func_add_identifier_redefinition[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 344_31_self
  // $identifier identifier_of(self)
  var_identifier_of, 1, LOCAL(2), 1, var_345_1_identifier,
  // identifier .contains. ':'
  var_contains, 2, var_345_1_identifier, chr_58, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_29, TAIL_CALL,
  POS(345, 3),
  POS(347, 5),
  POS(346, 3)
};

static TAB_NUM t_lambda_29[] = {
  0, // locals
  0, // parameters
  // redefined_variables(identifier) true
  var_redefined_variables, 2, var_345_1_identifier, var_true, 1, var_redefined_variables,
  // next
  var_next, 0, TAIL_CALL,
  POS(350, 8),
  POS(351, 7)
};

static int key_value_pair_68_1_arguments[] = {
  -chr_47, -string_1
};

static int tuple_92_22_arguments[] = {
  -num_1, -num_0
};

static int key_value_pair_92_15_arguments[] = {
  -str_std, -tuple_92_22
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__compile_module}},
  {FLT_STRING_8, 4, {.str_8 = ".fky"}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_STRING_8, 2, {.str_8 = "__"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_68_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_STRING_8, 17, {.str_8 = "The source file \042"}},
  {FLT_STRING_8, 36, {.str_8 = "\042 does not contain any source code!\012"}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_CHARACTER, 0, {.value = 33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_required_modules}},
  {FLT_STRING_8, 12, {.str_8 = "basic/stdlib"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 2, {.arguments = tuple_92_22_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "std"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_92_15_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_retrieve_meta_instructions}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_NAMESPACE_INSTRUCTION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_version_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_STRING_8, 1, {.str_8 = "1"}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_STRING_8, 1, {.str_8 = "-"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_defined_namespacesnamespace_name_is_defined}},
  {FLT_STRING_8, 28, {.str_8 = "Namespace is already defined"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_REQUIRE_INSTRUCTION}},
  {FLT_STRING_8, 2, {.str_8 = "./"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_required_modulesrequired_module}},
  {FLT_STRING_8, 26, {.str_8 = "Module is already required"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_USING_INSTRUCTION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_used_namespacesused_namespace_is_defined}},
  {FLT_STRING_8, 25, {.str_8 = "Namespace is already used"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_RESOLVE_INSTRUCTION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_namespace_versionsresolved_namespace_is_defined}},
  {FLT_STRING_8, 29, {.str_8 = "Namespace is already resolved"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_STRING_8, 8, {.str_8 = "unstable"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_STRING_8, 1, {.str_8 = "."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ALIAS_INSTRUCTION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_namespace_aliasesalias_is_defined}},
  {FLT_STRING_8, 31, {.str_8 = "Redefinition of namespace alias"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ALLOW_INSTRUCTION}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ALLOW_HIDDEN}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_STRING_8, 28, {.str_8 = "Allow hidden was already set"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_ALLOW_UNUSED}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_STRING_8, 28, {.str_8 = "Allow unused was already set"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_MULTILINE_REMARK}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___equal}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___hash}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_global_definitions}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___add_definitions}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___add_definitions}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_resolve_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___add_definition}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__definition___add_definition}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_global_redefinitions}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___add_redefinitions}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__statement___add_redefinitions}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky_types__node___add_redefinition}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_add_identifier_redefinition}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}}
};

static ATTRIBUTE_DEFINITION funky_types__node__attributes[] = {
  {-var_is_a_slot_definition, -var_false},
  {var_equal, -func_funky_types__node___equal},
  {var_hash, -func_funky_types__node___hash},
  {var_add_definitions, -func_funky_types__node___add_definitions},
  {var_add_definition, -func_funky_types__node___add_definition},
  {var_add_redefinitions, -func_funky_types__node___add_redefinitions},
  {var_add_redefinition, -func_funky_types__node___add_redefinition}
};

static ATTRIBUTE_DEFINITION funky_types__attribute_value_pair__attributes[] = {
  {-var_is_a_slot_definition, -var_true}
};

static ATTRIBUTE_DEFINITION funky_types__method_value_pair__attributes[] = {
  {-var_is_a_slot_definition, -var_true}
};

static ATTRIBUTE_DEFINITION funky_types__type_function__attributes[] = {
  {-var_is_a_slot_definition, -var_true}
};

static ATTRIBUTE_DEFINITION funky_types__statement__attributes[] = {
  {var_add_definitions, -func_funky_types__statement___add_definitions},
  {var_add_redefinitions, -func_funky_types__statement___add_redefinitions}
};

static ATTRIBUTE_DEFINITION funky_types__definition__attributes[] = {
  {var_add_definition, -func_funky_types__definition___add_definition}
};

static ATTRIBUTE_DEFINITION funky_types__redefinition__attributes[] = {
  {var_add_redefinition, -func_add_identifier_redefinition}
};

static ATTRIBUTE_DEFINITION funky_types__update__attributes[] = {
  {var_add_redefinition, -func_add_identifier_redefinition}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_DERIVED, 0, 0,
    "resolve_variable\000funky", NULL,
    {"empty_hash_table\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_table\000", NULL,
    {.position = POS(25, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(25, 1)}
  },
  {
    FOT_DERIVED, 0, 0,
    "redefined_variables\000", NULL,
    {"empty_hash_set\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(28, 22)}
  },
  {
    FOT_DERIVED, 0, 0,
    "variables\000funky", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(33, 19)}
  },
  {
    FOT_DERIVED, 0, 0,
    "literals\000funky", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "defined_namespaces\000funky", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "required_modules\000funky", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "used_namespaces\000funky", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "namespace_versions\000funky", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "namespace_aliases\000funky", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "allow_hidden\000funky", NULL,
    {"undefined\000"}
  },
  {
    FOT_DERIVED, 0, 0,
    "allow_unused\000funky", NULL,
    {"undefined\000"}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "compile_module\000funky", NULL,
    {.const_idx = -func_funky__compile_module}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "base_directory\000", NULL,
    {.position = POS(63, 28)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "without_prefix\000", NULL,
    {.position = POS(63, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_filename\000", NULL,
    {.position = POS(64, 4)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(67, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(68, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_module_name\000", NULL,
    {.position = POS(65, 4)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_all\000", NULL,
    {.position = POS(66, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "69_7_statements\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_top_level_statement_group\000", NULL,
    {.position = POS(69, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse\000", NULL,
    {.position = POS(69, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(70, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(71, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "syntax_error\000", NULL,
    {.position = POS(71, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(70, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "78_1_first_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_remark\000", NULL,
    {.position = POS(81, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "text_of\000", NULL,
    {.position = POS(82, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(82, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "79_1_is_a_main_module\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(80, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "defined_namespaces\000", NULL,
    {.position = POS(87, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "required_modules\000", NULL,
    {.position = POS(87, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "used_namespaces\000", NULL,
    {.position = POS(87, 44)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "namespace_versions\000", NULL,
    {.position = POS(87, 61)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "namespace_aliases\000", NULL,
    {.position = POS(88, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "allow_hidden\000", NULL,
    {.position = POS(88, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "allow_unused\000", NULL,
    {.position = POS(88, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(89, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash_set\000", NULL,
    {.position = POS(90, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(89, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(92, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash_table\000", NULL,
    {.position = POS(92, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "resolve_variable\000", NULL,
    {.position = POS(93, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "simplify_statement\000", NULL,
    {.position = POS(97, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(97, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(97, 52)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(97, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "variables\000", NULL,
    {.position = POS(107, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "collect_variables\000", NULL,
    {.position = POS(107, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "categorize_variables\000", NULL,
    {.position = POS(109, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "literals\000", NULL,
    {.position = POS(111, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "collect_literals\000", NULL,
    {.position = POS(111, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "generate_tabular_code\000", NULL,
    {.position = POS(126, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "146_30_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "147_1_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "148_1_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(148, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "149_1_defined_namespaces\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(149, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_1_required_modules\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_set\000", NULL,
    {.position = POS(150, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_1_used_namespaces\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "152_1_namespace_versions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "153_1_namespace_aliases\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_1_allow_hidden\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(154, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "155_1_allow_unused\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(158, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "169_1_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "node_type_of\000", NULL,
    {.position = POS(170, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NAMESPACE_INSTRUCTION\000", NULL,
    {.position = POS(171, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "172_1_namespace_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000funky", NULL,
    {.position = POS(172, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "173_1_version\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "version_of\000", NULL,
    {.position = POS(173, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(175, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "174_4_major\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "174_11_minor\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "UNSTABLE\000", NULL,
    {.position = POS(177, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(177, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "major_of\000", NULL,
    {.position = POS(179, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minor_of\000", NULL,
    {.position = POS(179, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(176, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(187, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(188, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REQUIRE_INSTRUCTION\000", NULL,
    {.position = POS(189, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "190_1_required_module\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filename_of\000", NULL,
    {.position = POS(190, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "until\000", NULL,
    {.position = POS(195, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(196, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(201, 52)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "USING_INSTRUCTION\000", NULL,
    {.position = POS(204, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "205_1_used_namespace\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "206_1_version\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "207_4_major\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "207_11_minor\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "RESOLVE_INSTRUCTION\000", NULL,
    {.position = POS(218, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "219_1_resolved_namespace\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "220_1_version\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ALIAS_INSTRUCTION\000", NULL,
    {.position = POS(233, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "234_1_alias\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "alias_of\000", NULL,
    {.position = POS(234, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "235_1_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ALLOW_INSTRUCTION\000", NULL,
    {.position = POS(243, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pragma_of\000", NULL,
    {.position = POS(244, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ALLOW_HIDDEN\000", NULL,
    {.position = POS(245, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ALLOW_UNUSED\000", NULL,
    {.position = POS(251, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(244, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MULTILINE_REMARK\000", NULL,
    {.position = POS(257, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(156, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_slot_definition\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 7,
    "node\000funky_types", funky_types__node__attributes,
    {.position = POS(272, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_slot_definition\000", NULL,
    {.position = POS(272, 20)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_value_pair\000funky_types", funky_types__attribute_value_pair__attributes,
    {.position = POS(273, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "method_value_pair\000funky_types", funky_types__method_value_pair__attributes,
    {.position = POS(274, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "type_function\000funky_types", funky_types__type_function__attributes,
    {.position = POS(275, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "key_of\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "equal\000", NULL,
    {.position = POS(281, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "hash\000", NULL,
    {.position = POS(284, 20)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "add_definitions\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(289, 3)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "statement\000funky_types", funky_types__statement__attributes,
    {.position = POS(296, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "297_1_head\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "head_of\000", NULL,
    {.position = POS(297, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "298_1_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "arguments_of\000", NULL,
    {.position = POS(298, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DEFINITION\000", NULL,
    {.position = POS(301, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(302, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(303, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "identifier_of\000", NULL,
    {.position = POS(305, 19)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "add_definition\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "definition\000funky_types", funky_types__definition__attributes,
    {.position = POS(318, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "add_redefinitions\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(333, 5)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "add_redefinition\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "redefinition\000funky_types", funky_types__redefinition__attributes,
    {.position = POS(341, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "update\000funky_types", funky_types__update__attributes,
    {.position = POS(342, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "345_1_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(347, 5)}
  }
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0},
  {"funky", 1, 0}
};

FUNKY_MODULE module__compile = {
  "_compile", // module name
  "compile.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  90, // number of constants
  145, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
