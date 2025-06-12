#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  func_funky__compile_module = -1,
  lambda_1 = -2,
  string_1 = -3,
  str_fky = -4,
  chr_47 = -5,
  string_2 = -6,
  key_value_pair_70_8 = -7,
  lambda_2 = -8,
  str_The_source_file = -9,
  str__does_not_contai = -10,
  num_1 = -11,
  lambda_3 = -12,
  chr_33 = -13,
  lambda_4 = -14,
  lambda_required_modules = -15,
  str_basicstdlib = -16,
  lambda_5 = -17,
  num_0 = -18,
  tuple_94_27 = -19,
  str_std = -20,
  key_value_pair_94_20 = -21,
  lambda_6 = -22,
  func_retrieve_meta_instructions = -23,
  lambda_loop = -24,
  lambda_7 = -25,
  lambda_8 = -26,
  lambda_NAMESPACE_INSTRUCTION = -27,
  lambda_version_is_defined = -28,
  lambda_9 = -29,
  lambda_10 = -30,
  lambda_11 = -31,
  string_3 = -32,
  string_4 = -33,
  string_5 = -34,
  lambda_defined_namespacesnamespace_name_is_defined = -35,
  str_Namespace_is_alr = -36,
  lambda_12 = -37,
  lambda_REQUIRE_INSTRUCTION = -38,
  string_6 = -39,
  lambda_13 = -40,
  minus_num_1 = -41,
  num_3 = -42,
  lambda_required_modulesrequired_module = -43,
  str_Module_is_alread = -44,
  lambda_14 = -45,
  lambda_USING_INSTRUCTION = -46,
  lambda_15 = -47,
  lambda_16 = -48,
  lambda_used_namespacesused_namespace_is_defined = -49,
  str_Namespace_is_alr_2 = -50,
  lambda_17 = -51,
  lambda_RESOLVE_INSTRUCTION = -52,
  lambda_namespace_versionsresolved_namespace_is_defined = -53,
  str_Namespace_is_alr_3 = -54,
  lambda_18 = -55,
  lambda_19 = -56,
  str_unstable = -57,
  lambda_20 = -58,
  string_7 = -59,
  lambda_ALIAS_INSTRUCTION = -60,
  lambda_namespace_aliasesalias_is_defined = -61,
  str_Redefinition_of = -62,
  lambda_21 = -63,
  lambda_ALLOW_INSTRUCTION = -64,
  lambda_ALLOW_HIDDEN = -65,
  lambda_22 = -66,
  str_Allow_hidden_was = -67,
  lambda_ALLOW_UNUSED = -68,
  lambda_23 = -69,
  str_Allow_unused_was = -70,
  lambda_MULTILINE_REMARK = -71,
  lambda_24 = -72,
  func_funky_types__node___equal = -73,
  func_funky_types__node___hash = -74,
  func_collect_global_definitions = -75,
  lambda_25 = -76,
  func_funky_types__node___add_definitions = -77,
  func_funky_types__statement___add_definitions = -78,
  lambda_26 = -79,
  lambda_27 = -80,
  lambda_28 = -81,
  func_resolve_arguments = -82,
  func_funky_types__node___add_definition = -83,
  func_funky_types__definition___add_definition = -84,
  func_add_variable = -85,
  lambda_29 = -86,
  lambda_30 = -87,
  str_Variable_is_alre = -88,
  func_collect_global_redefinitions = -89,
  lambda_31 = -90,
  func_funky_types__node___add_redefinitions = -91,
  func_funky_types__statement___add_redefinitions = -92,
  func_funky_types__node___add_redefinition = -93,
  func_add_identifier_redefinition = -94,
  chr_58 = -95,
  lambda_32 = -96
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
  var_60_26_filename, // dynamic
  var_base_directory, // extern
  var_without_prefix, // extern
  var_module_prefix, // extern
  var_is_defined, // extern
  var_append, // extern
  var_update_if, // extern
  var_current_filename, // extern
  var_without_suffix, // extern
  var_std__key_value_pair, // extern
  var_current_module_name, // extern
  var_replace_all, // extern
  var_71_10_statements, // dynamic
  var_parse_top_level_statement_group, // extern
  var_parse, // extern
  var_is_undefined, // extern
  var_std__string, // extern
  var_syntax_error, // extern
  var_on, // extern
  var_80_4_first_statement, // dynamic
  var_is_a_remark, // extern
  var_text_of, // extern
  var_has_prefix, // extern
  var_81_4_is_a_main_module, // dynamic
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
  var_tuple, // extern
  var_hash_table, // extern
  var_resolve_variable, // extern
  var_simplify_statement, // extern
  var_empty_list, // extern
  var_map_reduce, // extern
  var_variables, // extern
  var_collect_variables, // extern
  var_categorize_variables, // extern
  var_literals, // extern
  var_collect_literals, // extern
  var_generate_tabular_code, // extern
  var_148_31_statements, // dynamic
  var_149_4_i, // dynamic
  var_150_4_n, // dynamic
  var_length_of, // extern
  var_151_4_defined_namespaces, // dynamic
  var_empty_insert_order_table, // extern
  var_152_4_required_modules, // dynamic
  var_empty_insert_order_set, // extern
  var_153_4_used_namespaces, // dynamic
  var_154_4_namespace_versions, // dynamic
  var_155_4_namespace_aliases, // dynamic
  var_156_4_allow_hidden, // dynamic
  var_false, // extern
  var_157_4_allow_unused, // dynamic
  var_std__less, // extern
  var_171_10_statement, // dynamic
  var_node_type_of, // extern
  var_NAMESPACE_INSTRUCTION, // extern
  var_174_14_namespace_name, // dynamic
  var_funky__name_of, // extern
  var_175_14_version, // dynamic
  var_version_of, // extern
  var_176_17_major, // dynamic
  var_176_24_minor, // dynamic
  var_UNSTABLE, // extern
  var_std__equal, // extern
  var_major_of, // extern
  var_minor_of, // extern
  var_if, // extern
  var_inc, // extern
  var_next, // extern
  var_REQUIRE_INSTRUCTION, // extern
  var_192_14_required_module, // dynamic
  var_filename_of, // extern
  var_until, // extern
  var_range, // extern
  var_true, // extern
  var_USING_INSTRUCTION, // extern
  var_207_14_used_namespace, // dynamic
  var_208_14_version, // dynamic
  var_209_17_major, // dynamic
  var_209_24_minor, // dynamic
  var_RESOLVE_INSTRUCTION, // extern
  var_221_14_resolved_namespace, // dynamic
  var_222_14_version, // dynamic
  var_ALIAS_INSTRUCTION, // extern
  var_236_14_alias, // dynamic
  var_alias_of, // extern
  var_237_14_name, // dynamic
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
  var_299_4_head, // dynamic
  var_head_of, // extern
  var_300_4_arguments, // dynamic
  var_arguments_of, // extern
  var_DEFINITION, // extern
  var_is_not_empty, // extern
  var_not, // extern
  var_add_definition, // attribute
  var_funky_types__definition, // extern
  var_323_17_node, // dynamic
  var_324_4_identifier, // dynamic
  var_identifier_of, // extern
  var_add_redefinitions, // attribute
  var_push, // extern
  var_add_redefinition, // attribute
  var_funky_types__redefinition, // extern
  var_funky_types__update, // extern
  var_351_4_identifier, // dynamic
  var_contains, // extern
  var__END
};


static TAB_NUM t_func_funky__compile_module[] = {
  3, // locals
  2, // parameters
  var_60_26_filename,
  LOCAL(3), // 60_35_lines
  // without_prefix &filename base_directory
  var_without_prefix, 2, var_60_26_filename, var_base_directory, 1, var_60_26_filename,
  // is_defined &filename
  var_is_defined, 1, var_module_prefix, 1, LOCAL(1),
  // update_if module_prefix.is_defined &filename
  var_update_if, 3, LOCAL(1), var_60_26_filename, lambda_1, 1, var_60_26_filename,
  // !current_filename filename
  LET, 1, var_60_26_filename, 1, var_current_filename,
  // filename .without_suffix. ".fky"
  var_without_suffix, 2, var_60_26_filename, str_fky, 1, LOCAL(1),
  // !current_module_name
  var_replace_all, 2, LOCAL(1), key_value_pair_70_8, 1, var_current_module_name,
  // parse $statements lines parse_top_level_statement_group
  var_parse, 2, LOCAL(3), var_parse_top_level_statement_group, 1, var_71_10_statements,
  // is_undefined:
  var_is_undefined, 1, var_71_10_statements, 1, LOCAL(1),
  // on statements.is_undefined:
  var_on, 2, LOCAL(1), lambda_2, 0,
  // $first_statement statements(1)
  var_71_10_statements, 1, num_1, 1, var_80_4_first_statement,
  // is_a_remark
  var_is_a_remark, 1, var_80_4_first_statement, 1, LOCAL(1),
  // $is_a_main_module
  var_std__and, 2, LOCAL(1), lambda_3, 1, var_81_4_is_a_main_module,
  // retrieve_meta_instructions &statements
  func_retrieve_meta_instructions, 1, var_71_10_statements, 8, var_71_10_statements, var_defined_namespaces, var_required_modules, var_used_namespaces, var_namespace_versions, var_namespace_aliases, var_allow_hidden, var_allow_unused,
  // is_empty && is_a_main_module
  var_is_empty, 1, var_required_modules, 1, LOCAL(1),
  // is_empty && is_a_main_module
  var_std__and, 2, LOCAL(1), lambda_4, 1, LOCAL(2),
  // update_if required_modules.is_empty && is_a_main_module
  var_update_if, 3, LOCAL(2), var_required_modules, lambda_required_modules, 1, var_required_modules,
  // is_empty &used_namespaces
  var_is_empty, 1, var_used_namespaces, 1, LOCAL(1),
  // update_if used_namespaces.is_empty &used_namespaces
  var_update_if, 3, LOCAL(1), var_used_namespaces, lambda_5, 1, var_used_namespaces,
  // collect_global_definitions !resolve_variable statements
  func_collect_global_definitions, 1, var_71_10_statements, 1, var_resolve_variable,
  // update_if is_a_main_module &redefined_variables:
  var_update_if, 3, var_81_4_is_a_main_module, var_redefined_variables, lambda_6, 1, var_redefined_variables,
  // map_reduce &statements simplify_statement append empty_list
  var_map_reduce, 4, var_71_10_statements, var_simplify_statement, var_append, var_empty_list, 1, var_71_10_statements,
  // collect_variables !variables statements
  var_collect_variables, 1, var_71_10_statements, 1, var_variables,
  // categorize_variables &variables
  var_categorize_variables, 1, var_variables, 1, var_variables,
  // collect_literals !literals statements
  var_collect_literals, 1, var_71_10_statements, 1, var_literals,
  // generate_tabular_code statements is_a_main_module
  var_generate_tabular_code, 2, var_71_10_statements, var_81_4_is_a_main_module, TAIL_CALL,
  POS(63, 3),
  POS(64, 27),
  POS(64, 3),
  POS(66, 3),
  POS(69, 7),
  POS(67, 3),
  POS(71, 3),
  POS(72, 17),
  POS(72, 3),
  POS(80, 3),
  POS(83, 23),
  POS(81, 3),
  POS(88, 3),
  POS(91, 30),
  POS(91, 30),
  POS(91, 3),
  POS(93, 29),
  POS(93, 3),
  POS(95, 3),
  POS(97, 3),
  POS(99, 3),
  POS(109, 3),
  POS(111, 3),
  POS(113, 3),
  POS(128, 3),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky__compile_module = {
  t_func_funky__compile_module, NULL, 25, 1,
  {"60_35_lines\000"}
};

static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // append(module_prefix "/" filename)
  var_append, 3, var_module_prefix, string_1, var_60_26_filename, 1, LOCAL(1),
  //  append(module_prefix "/" filename)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(65, 8),
  POS(65, 7)
};

static FUNCTION_INFO i_lambda_1 = {
  t_lambda_1, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_The_source_file, var_current_filename, str__does_not_contai, 1, LOCAL(1),
  // syntax_error "
  var_syntax_error, 1, LOCAL(1), TAIL_CALL,
  POS(73, 18),
  POS(73, 5)
};

static FUNCTION_INFO i_lambda_2 = {
  t_lambda_2, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_3[] = {
  2, // locals
  0, // parameters
  // text_of(first_statement) .has_prefix. '!'
  var_text_of, 1, var_80_4_first_statement, 1, LOCAL(1),
  // text_of(first_statement) .has_prefix. '!'
  var_has_prefix, 2, LOCAL(1), chr_33, 1, LOCAL(2),
  // text_of(first_statement) .has_prefix. '!'
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(84, 7),
  POS(84, 7),
  POS(84, 7)
};

static FUNCTION_INFO i_lambda_3 = {
  t_lambda_3, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  // is_a_main_module
  LET, 1, var_81_4_is_a_main_module, TAIL_CALL,
  POS(91, 42)
};

static FUNCTION_INFO i_lambda_4 = {
  t_lambda_4, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_required_modules[] = {
  1, // locals
  0, // parameters
  // hash_set("basic/stdlib")
  var_hash_set, 1, str_basicstdlib, 1, LOCAL(1),
  //  hash_set("basic/stdlib")
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(92, 26),
  POS(92, 25)
};

static FUNCTION_INFO i_lambda_required_modules = {
  t_lambda_required_modules, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_5[] = {
  3, // locals
  0, // parameters
  // hash_table("std" = tuple(1 0))
  var_hash_table, 1, key_value_pair_94_20, 1, LOCAL(3),
  //  hash_table("std" = tuple(1 0))
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(94, 8),
  POS(94, 7)
};

static FUNCTION_INFO i_lambda_5 = {
  t_lambda_5, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_6[] = {
  0, // locals
  0, // parameters
  // collect_global_redefinitions statements
  func_collect_global_redefinitions, 1, var_71_10_statements, TAIL_CALL,
  POS(98, 5)
};

static FUNCTION_INFO i_lambda_6 = {
  t_lambda_6, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_retrieve_meta_instructions[] = {
  0, // locals
  1, // parameters
  var_148_31_statements,
  // $i 1
  LET, 1, num_1, 1, var_149_4_i,
  // $n length_of(statements)
  var_length_of, 1, var_148_31_statements, 1, var_150_4_n,
  // $defined_namespaces empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_151_4_defined_namespaces,
  // $required_modules empty_insert_order_set
  LET, 1, var_empty_insert_order_set, 1, var_152_4_required_modules,
  // $used_namespaces empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_153_4_used_namespaces,
  // $namespace_versions empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_154_4_namespace_versions,
  // $namespace_aliases empty_insert_order_table
  LET, 1, var_empty_insert_order_table, 1, var_155_4_namespace_aliases,
  // $allow_hidden false
  LET, 1, var_false, 1, var_156_4_allow_hidden,
  // $allow_unused false
  LET, 1, var_false, 1, var_157_4_allow_unused,
  // loop:
  var_loop, 1, lambda_loop, TAIL_CALL,
  POS(149, 3),
  POS(150, 3),
  POS(151, 3),
  POS(152, 3),
  POS(153, 3),
  POS(154, 3),
  POS(155, 3),
  POS(156, 3),
  POS(157, 3),
  POS(158, 3)
};

static FUNCTION_INFO i_func_retrieve_meta_instructions = {
  t_func_retrieve_meta_instructions, NULL, 10, 0,
  {}
};

static TAB_NUM t_lambda_loop[] = {
  1, // locals
  0, // parameters
  // n
  var_std__less, 2, var_150_4_n, var_149_4_i, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_7, lambda_8, TAIL_CALL,
  POS(160, 11),
  POS(159, 5)
};

static FUNCTION_INFO i_lambda_loop = {
  t_lambda_loop, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_7[] = {
  0, // locals
  0, // parameters
  // 
  LET, 8, var_empty_list, var_151_4_defined_namespaces, var_152_4_required_modules, var_153_4_used_namespaces, var_154_4_namespace_versions, var_155_4_namespace_aliases, var_156_4_allow_hidden, var_157_4_allow_unused, TAIL_CALL,
  POS(161, 9)
};

static FUNCTION_INFO i_lambda_7 = {
  t_lambda_7, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_8[] = {
  1, // locals
  0, // parameters
  // $statement statements(i)
  var_148_31_statements, 1, var_149_4_i, 1, var_171_10_statement,
  // node_type_of(statement)
  var_node_type_of, 1, var_171_10_statement, 1, LOCAL(1),
  // case node_type_of(statement)
  var_case, 16, LOCAL(1), var_NAMESPACE_INSTRUCTION, lambda_NAMESPACE_INSTRUCTION, var_REQUIRE_INSTRUCTION, lambda_REQUIRE_INSTRUCTION, var_USING_INSTRUCTION, lambda_USING_INSTRUCTION, var_RESOLVE_INSTRUCTION, lambda_RESOLVE_INSTRUCTION, var_ALIAS_INSTRUCTION, lambda_ALIAS_INSTRUCTION, var_ALLOW_INSTRUCTION, lambda_ALLOW_INSTRUCTION, var_MULTILINE_REMARK, lambda_MULTILINE_REMARK, lambda_24, TAIL_CALL,
  POS(171, 9),
  POS(172, 14),
  POS(172, 9)
};

static FUNCTION_INFO i_lambda_8 = {
  t_lambda_8, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_NAMESPACE_INSTRUCTION[] = {
  2, // locals
  0, // parameters
  // $namespace_name funky::name_of(statement)
  var_funky__name_of, 1, var_171_10_statement, 1, var_174_14_namespace_name,
  // $version version_of(statement)
  var_version_of, 1, var_171_10_statement, 1, var_175_14_version,
  // is_defined:
  var_is_defined, 1, var_175_14_version, 1, LOCAL(1),
  // if $major $minor
  var_if, 3, LOCAL(1), lambda_version_is_defined, lambda_11, 2, var_176_17_major, var_176_24_minor,
  // "-@(major)"
  var_std__string, 2, string_5, var_176_17_major, 1, LOCAL(1),
  // append &namespace_name "-@(major)"
  var_append, 2, var_174_14_namespace_name, LOCAL(1), 1, var_174_14_namespace_name,
  // defined_namespaces(namespace_name).is_defined:
  var_151_4_defined_namespaces, 1, var_174_14_namespace_name, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_defined_namespacesnamespace_name_is_defined, lambda_12, TAIL_CALL,
  POS(174, 13),
  POS(175, 13),
  POS(177, 23),
  POS(176, 13),
  POS(183, 36),
  POS(183, 13),
  POS(185, 15),
  POS(185, 50),
  POS(184, 13)
};

static FUNCTION_INFO i_lambda_NAMESPACE_INSTRUCTION = {
  t_lambda_NAMESPACE_INSTRUCTION, NULL, 9, 0,
  {}
};

static TAB_NUM t_lambda_version_is_defined[] = {
  2, // locals
  0, // parameters
  // node_type_of(version) == UNSTABLE
  var_node_type_of, 1, var_175_14_version, 1, LOCAL(1),
  // node_type_of(version) == UNSTABLE
  var_std__equal, 2, LOCAL(1), var_UNSTABLE, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_9, lambda_10, TAIL_CALL,
  POS(179, 20),
  POS(179, 20),
  POS(178, 18)
};

static FUNCTION_INFO i_lambda_version_is_defined = {
  t_lambda_version_is_defined, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  0 0
  LET, 2, num_0, num_0, TAIL_CALL,
  POS(180, 22)
};

static FUNCTION_INFO i_lambda_9 = {
  t_lambda_9, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_10[] = {
  2, // locals
  0, // parameters
  // major_of(version) minor_of(version)
  var_major_of, 1, var_175_14_version, 1, LOCAL(1),
  // minor_of(version)
  var_minor_of, 1, var_175_14_version, 1, LOCAL(2),
  //  major_of(version) minor_of(version)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(181, 23),
  POS(181, 41),
  POS(181, 22)
};

static FUNCTION_INFO i_lambda_10 = {
  t_lambda_10, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_11[] = {
  0, // locals
  0, // parameters
  //  "1" "0"
  LET, 2, string_3, string_4, TAIL_CALL,
  POS(182, 17)
};

static FUNCTION_INFO i_lambda_11 = {
  t_lambda_11, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_defined_namespacesnamespace_name_is_defined[] = {
  0, // locals
  0, // parameters
  // syntax_error "Namespace is already defined" statement
  var_syntax_error, 2, str_Namespace_is_alr, var_171_10_statement, TAIL_CALL,
  POS(186, 17)
};

static FUNCTION_INFO i_lambda_defined_namespacesnamespace_name_is_defined = {
  t_lambda_defined_namespacesnamespace_name_is_defined, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_12[] = {
  2, // locals
  0, // parameters
  // !defined_namespaces(namespace_name) tuple(major minor)
  var_tuple, 2, var_176_17_major, var_176_24_minor, 1, LOCAL(2),
  // defined_namespaces(namespace_name) tuple(major minor)
  var_151_4_defined_namespaces, 2, var_174_14_namespace_name, LOCAL(2), 1, var_151_4_defined_namespaces,
  // inc &i
  var_inc, 1, var_149_4_i, 1, var_149_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(188, 17),
  POS(188, 18),
  POS(189, 17),
  POS(190, 17)
};

static FUNCTION_INFO i_lambda_12 = {
  t_lambda_12, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_REQUIRE_INSTRUCTION[] = {
  1, // locals
  0, // parameters
  // $required_module filename_of(statement)
  var_filename_of, 1, var_171_10_statement, 1, var_192_14_required_module,
  // required_module .has_prefix. "./" &required_module:
  var_has_prefix, 2, var_192_14_required_module, string_6, 1, LOCAL(1),
  // update_if required_module .has_prefix. "./" &required_module:
  var_update_if, 3, LOCAL(1), var_192_14_required_module, lambda_13, 1, var_192_14_required_module,
  // required_modules(required_module):
  var_152_4_required_modules, 1, var_192_14_required_module, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_required_modulesrequired_module, lambda_14, TAIL_CALL,
  POS(192, 13),
  POS(193, 23),
  POS(193, 13),
  POS(200, 15),
  POS(199, 13)
};

static FUNCTION_INFO i_lambda_REQUIRE_INSTRUCTION = {
  t_lambda_REQUIRE_INSTRUCTION, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_13[] = {
  3, // locals
  0, // parameters
  // until(current_filename '/' -1)
  var_until, 3, var_current_filename, chr_47, minus_num_1, 1, LOCAL(1),
  // range(required_module 3 -1)
  var_range, 3, var_192_14_required_module, num_3, minus_num_1, 1, LOCAL(2),
  // append
  var_append, 3, string_6, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // ->
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(197, 19),
  POS(198, 19),
  POS(195, 17),
  POS(194, 15)
};

static FUNCTION_INFO i_lambda_13 = {
  t_lambda_13, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_required_modulesrequired_module[] = {
  0, // locals
  0, // parameters
  // syntax_error "Module is already required" statement
  var_syntax_error, 2, str_Module_is_alread, var_171_10_statement, TAIL_CALL,
  POS(201, 17)
};

static FUNCTION_INFO i_lambda_required_modulesrequired_module = {
  t_lambda_required_modulesrequired_module, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_14[] = {
  0, // locals
  0, // parameters
  // required_modules(required_module) true
  var_152_4_required_modules, 2, var_192_14_required_module, var_true, 1, var_152_4_required_modules,
  // inc &i
  var_inc, 1, var_149_4_i, 1, var_149_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(203, 18),
  POS(204, 17),
  POS(205, 17)
};

static FUNCTION_INFO i_lambda_14 = {
  t_lambda_14, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_USING_INSTRUCTION[] = {
  2, // locals
  0, // parameters
  // $used_namespace funky::name_of(statement)
  var_funky__name_of, 1, var_171_10_statement, 1, var_207_14_used_namespace,
  // $version version_of(statement)
  var_version_of, 1, var_171_10_statement, 1, var_208_14_version,
  // is_defined
  var_is_defined, 1, var_208_14_version, 1, LOCAL(1),
  // if $major $minor
  var_if, 3, LOCAL(1), lambda_15, lambda_16, 2, var_209_17_major, var_209_24_minor,
  // used_namespaces(used_namespace).is_defined:
  var_153_4_used_namespaces, 1, var_207_14_used_namespace, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_used_namespacesused_namespace_is_defined, lambda_17, TAIL_CALL,
  POS(207, 13),
  POS(208, 13),
  POS(210, 23),
  POS(209, 13),
  POS(214, 15),
  POS(214, 47),
  POS(213, 13)
};

static FUNCTION_INFO i_lambda_USING_INSTRUCTION = {
  t_lambda_USING_INSTRUCTION, NULL, 7, 0,
  {}
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // major_of(version) minor_of(version)
  var_major_of, 1, var_208_14_version, 1, LOCAL(1),
  // minor_of(version)
  var_minor_of, 1, var_208_14_version, 1, LOCAL(2),
  //  major_of(version) minor_of(version)
  LET, 2, LOCAL(1), LOCAL(2), TAIL_CALL,
  POS(211, 18),
  POS(211, 36),
  POS(211, 17)
};

static FUNCTION_INFO i_lambda_15 = {
  t_lambda_15, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_16[] = {
  0, // locals
  0, // parameters
  //  "1" "0"
  LET, 2, string_3, string_4, TAIL_CALL,
  POS(212, 17)
};

static FUNCTION_INFO i_lambda_16 = {
  t_lambda_16, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_used_namespacesused_namespace_is_defined[] = {
  0, // locals
  0, // parameters
  // syntax_error "Namespace is already used" statement
  var_syntax_error, 2, str_Namespace_is_alr_2, var_171_10_statement, TAIL_CALL,
  POS(215, 17)
};

static FUNCTION_INFO i_lambda_used_namespacesused_namespace_is_defined = {
  t_lambda_used_namespacesused_namespace_is_defined, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_17[] = {
  2, // locals
  0, // parameters
  // !used_namespaces(used_namespace) tuple(major minor)
  var_tuple, 2, var_209_17_major, var_209_24_minor, 1, LOCAL(2),
  // used_namespaces(used_namespace) tuple(major minor)
  var_153_4_used_namespaces, 2, var_207_14_used_namespace, LOCAL(2), 1, var_153_4_used_namespaces,
  // inc &i
  var_inc, 1, var_149_4_i, 1, var_149_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(217, 17),
  POS(217, 18),
  POS(218, 17),
  POS(219, 17)
};

static FUNCTION_INFO i_lambda_17 = {
  t_lambda_17, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_RESOLVE_INSTRUCTION[] = {
  2, // locals
  0, // parameters
  // $resolved_namespace funky::name_of(statement)
  var_funky__name_of, 1, var_171_10_statement, 1, var_221_14_resolved_namespace,
  // $version version_of(statement)
  var_version_of, 1, var_171_10_statement, 1, var_222_14_version,
  // namespace_versions(resolved_namespace).is_defined:
  var_154_4_namespace_versions, 1, var_221_14_resolved_namespace, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_namespace_versionsresolved_namespace_is_defined, lambda_18, TAIL_CALL,
  POS(221, 13),
  POS(222, 13),
  POS(224, 15),
  POS(224, 54),
  POS(223, 13)
};

static FUNCTION_INFO i_lambda_RESOLVE_INSTRUCTION = {
  t_lambda_RESOLVE_INSTRUCTION, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_namespace_versionsresolved_namespace_is_defined[] = {
  0, // locals
  0, // parameters
  // syntax_error "Namespace is already resolved" statement
  var_syntax_error, 2, str_Namespace_is_alr_3, var_171_10_statement, TAIL_CALL,
  POS(225, 17)
};

static FUNCTION_INFO i_lambda_namespace_versionsresolved_namespace_is_defined = {
  t_lambda_namespace_versionsresolved_namespace_is_defined, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_18[] = {
  2, // locals
  0, // parameters
  // node_type_of(version) == UNSTABLE
  var_node_type_of, 1, var_222_14_version, 1, LOCAL(1),
  // node_type_of(version) == UNSTABLE
  var_std__equal, 2, LOCAL(1), var_UNSTABLE, 1, LOCAL(2),
  // !version
  var_if, 3, LOCAL(2), lambda_19, lambda_20, 1, var_222_14_version,
  // namespace_versions(resolved_namespace) version
  var_154_4_namespace_versions, 2, var_221_14_resolved_namespace, var_222_14_version, 1, var_154_4_namespace_versions,
  // inc &i
  var_inc, 1, var_149_4_i, 1, var_149_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(229, 21),
  POS(229, 21),
  POS(227, 17),
  POS(232, 18),
  POS(233, 17),
  POS(234, 17)
};

static FUNCTION_INFO i_lambda_18 = {
  t_lambda_18, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_19[] = {
  0, // locals
  0, // parameters
  //  "unstable"
  LET, 1, str_unstable, TAIL_CALL,
  POS(230, 23)
};

static FUNCTION_INFO i_lambda_19 = {
  t_lambda_19, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_20[] = {
  3, // locals
  0, // parameters
  // major_of(version)).@(minor_of(version))"
  var_major_of, 1, var_222_14_version, 1, LOCAL(1),
  // minor_of(version))"
  var_minor_of, 1, var_222_14_version, 1, LOCAL(2),
  // "@(major_of(version)).@(minor_of(version))"
  var_std__string, 3, LOCAL(1), string_7, LOCAL(2), 1, LOCAL(3),
  //  "@(major_of(version)).@(minor_of(version))"
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(231, 27),
  POS(231, 48),
  POS(231, 24),
  POS(231, 23)
};

static FUNCTION_INFO i_lambda_20 = {
  t_lambda_20, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_ALIAS_INSTRUCTION[] = {
  2, // locals
  0, // parameters
  // $alias alias_of(statement)
  var_alias_of, 1, var_171_10_statement, 1, var_236_14_alias,
  // $name funky::name_of(statement)
  var_funky__name_of, 1, var_171_10_statement, 1, var_237_14_name,
  // namespace_aliases(alias).is_defined:
  var_155_4_namespace_aliases, 1, var_236_14_alias, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_namespace_aliasesalias_is_defined, lambda_21, TAIL_CALL,
  POS(236, 13),
  POS(237, 13),
  POS(239, 15),
  POS(239, 40),
  POS(238, 13)
};

static FUNCTION_INFO i_lambda_ALIAS_INSTRUCTION = {
  t_lambda_ALIAS_INSTRUCTION, NULL, 5, 0,
  {}
};

static TAB_NUM t_lambda_namespace_aliasesalias_is_defined[] = {
  0, // locals
  0, // parameters
  // syntax_error "Redefinition of namespace alias" statement
  var_syntax_error, 2, str_Redefinition_of, var_171_10_statement, TAIL_CALL,
  POS(240, 17)
};

static FUNCTION_INFO i_lambda_namespace_aliasesalias_is_defined = {
  t_lambda_namespace_aliasesalias_is_defined, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // namespace_aliases(alias) name
  var_155_4_namespace_aliases, 2, var_236_14_alias, var_237_14_name, 1, var_155_4_namespace_aliases,
  // inc &i
  var_inc, 1, var_149_4_i, 1, var_149_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(242, 18),
  POS(243, 17),
  POS(244, 17)
};

static FUNCTION_INFO i_lambda_21 = {
  t_lambda_21, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_ALLOW_INSTRUCTION[] = {
  2, // locals
  0, // parameters
  // pragma_of(statement))
  var_pragma_of, 1, var_171_10_statement, 1, LOCAL(1),
  // node_type_of(pragma_of(statement))
  var_node_type_of, 1, LOCAL(1), 1, LOCAL(2),
  // case node_type_of(pragma_of(statement))
  var_case, 5, LOCAL(2), var_ALLOW_HIDDEN, lambda_ALLOW_HIDDEN, var_ALLOW_UNUSED, lambda_ALLOW_UNUSED, TAIL_CALL,
  POS(246, 31),
  POS(246, 18),
  POS(246, 13)
};

static FUNCTION_INFO i_lambda_ALLOW_INSTRUCTION = {
  t_lambda_ALLOW_INSTRUCTION, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_ALLOW_HIDDEN[] = {
  0, // locals
  0, // parameters
  // on allow_hidden:
  var_on, 2, var_156_4_allow_hidden, lambda_22, 0,
  // !allow_hidden true
  LET, 1, var_true, 1, var_156_4_allow_hidden,
  // inc &i
  var_inc, 1, var_149_4_i, 1, var_149_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(248, 17),
  POS(250, 17),
  POS(251, 17),
  POS(252, 17)
};

static FUNCTION_INFO i_lambda_ALLOW_HIDDEN = {
  t_lambda_ALLOW_HIDDEN, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  // syntax_error "Allow hidden was already set" statement
  var_syntax_error, 2, str_Allow_hidden_was, var_171_10_statement, TAIL_CALL,
  POS(249, 19)
};

static FUNCTION_INFO i_lambda_22 = {
  t_lambda_22, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_ALLOW_UNUSED[] = {
  0, // locals
  0, // parameters
  // on allow_unused:
  var_on, 2, var_157_4_allow_unused, lambda_23, 0,
  // !allow_unused true
  LET, 1, var_true, 1, var_157_4_allow_unused,
  // inc &i
  var_inc, 1, var_149_4_i, 1, var_149_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(254, 17),
  POS(256, 17),
  POS(257, 17),
  POS(258, 17)
};

static FUNCTION_INFO i_lambda_ALLOW_UNUSED = {
  t_lambda_ALLOW_UNUSED, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_23[] = {
  0, // locals
  0, // parameters
  // syntax_error "Allow unused was already set" statement
  var_syntax_error, 2, str_Allow_unused_was, var_171_10_statement, TAIL_CALL,
  POS(255, 19)
};

static FUNCTION_INFO i_lambda_23 = {
  t_lambda_23, NULL, 1, 0,
  {}
};

static TAB_NUM t_lambda_MULTILINE_REMARK[] = {
  0, // locals
  0, // parameters
  // inc &i
  var_inc, 1, var_149_4_i, 1, var_149_4_i,
  // next
  var_next, 0, TAIL_CALL,
  POS(260, 13),
  POS(261, 13)
};

static FUNCTION_INFO i_lambda_MULTILINE_REMARK = {
  t_lambda_MULTILINE_REMARK, NULL, 2, 0,
  {}
};

static TAB_NUM t_lambda_24[] = {
  1, // locals
  0, // parameters
  // range(statements i -1)
  var_range, 3, var_148_31_statements, var_149_4_i, minus_num_1, 1, LOCAL(1),
  // 
  LET, 8, LOCAL(1), var_151_4_defined_namespaces, var_152_4_required_modules, var_153_4_used_namespaces, var_154_4_namespace_versions, var_155_4_namespace_aliases, var_156_4_allow_hidden, var_157_4_allow_unused, TAIL_CALL,
  POS(263, 13),
  POS(262, 13)
};

static FUNCTION_INFO i_lambda_24 = {
  t_lambda_24, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_funky_types__node___equal[] = {
  5, // locals
  2, // parameters
  LOCAL(4), // 283_28_left
  LOCAL(5), // 283_33_right
  // funky::key_of(left) == funky::key_of(right)
  var_funky__key_of, 1, LOCAL(4), 1, LOCAL(1),
  // funky::key_of(right)
  var_funky__key_of, 1, LOCAL(5), 1, LOCAL(2),
  // funky::key_of(left) == funky::key_of(right)
  var_std__equal, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // -> funky::key_of(left) == funky::key_of(right)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(284, 6),
  POS(284, 29),
  POS(284, 6),
  POS(284, 3),
  LOCAL(5),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__node___equal = {
  t_func_funky_types__node___equal, NULL, 4, 2,
  {"283_33_right\000", "283_28_left\000"}
};

static TAB_NUM t_func_funky_types__node___hash[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 286_27_self
  // funky::key_of(self))
  var_funky__key_of, 1, LOCAL(3), 1, LOCAL(1),
  // hash(funky::key_of(self))
  var_hash, 1, LOCAL(1), 1, LOCAL(2),
  // -> hash(funky::key_of(self))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(286, 41),
  POS(286, 36),
  POS(286, 33),
  LOCAL(3)
};

static FUNCTION_INFO i_func_funky_types__node___hash = {
  t_func_funky_types__node___hash, NULL, 3, 1,
  {"286_27_self\000"}
};

static TAB_NUM t_func_collect_global_definitions[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 290_31_statements
  // for_each statements add_definitions -> resolve_variable
  var_for_each, 3, LOCAL(1), var_add_definitions, lambda_25, TAIL_CALL,
  POS(291, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_collect_global_definitions = {
  t_func_collect_global_definitions, NULL, 1, 1,
  {"290_31_statements\000"}
};

static TAB_NUM t_lambda_25[] = {
  0, // locals
  0, // parameters
  //  resolve_variable
  LET, 1, var_resolve_variable, TAIL_CALL,
  POS(291, 41)
};

static FUNCTION_INFO i_lambda_25 = {
  t_lambda_25, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__node___add_definitions[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next
  var_next, 0, TAIL_CALL,
  POS(296, 3)
};

static FUNCTION_INFO i_func_funky_types__node___add_definitions = {
  t_func_funky_types__node___add_definitions, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__statement___add_definitions[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 298_43_self
  // $head head_of(self)
  var_head_of, 1, LOCAL(4), 1, var_299_4_head,
  // $arguments arguments_of(self)
  var_arguments_of, 1, LOCAL(4), 1, var_300_4_arguments,
  // node_type_of(head) == DEFINITION
  var_node_type_of, 1, var_299_4_head, 1, LOCAL(1),
  // node_type_of(head) == DEFINITION
  var_std__equal, 2, LOCAL(1), var_DEFINITION, 1, LOCAL(2),
  // 
  var_std__and, 2, LOCAL(2), lambda_26, 1, LOCAL(3),
  // if
  var_if, 3, LOCAL(3), lambda_28, func_resolve_arguments, TAIL_CALL,
  POS(299, 3),
  POS(300, 3),
  POS(303, 7),
  POS(303, 7),
  POS(302, 7),
  POS(301, 3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__statement___add_definitions = {
  t_func_funky_types__statement___add_definitions, NULL, 6, 1,
  {"298_43_self\000"}
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // is_not_empty
  var_is_not_empty, 1, var_300_4_arguments, 1, LOCAL(1),
  // 
  var_std__and, 2, LOCAL(1), lambda_27, 1, LOCAL(2),
  // arguments.is_not_empty
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(304, 17),
  POS(302, 7),
  POS(304, 7)
};

static FUNCTION_INFO i_lambda_26 = {
  t_lambda_26, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_27[] = {
  3, // locals
  0, // parameters
  // arguments(1).is_a_slot_definition)
  var_300_4_arguments, 1, num_1, 1, LOCAL(1),
  // is_a_slot_definition)
  var_is_a_slot_definition, 1, LOCAL(1), 1, LOCAL(2),
  // not(arguments(1).is_a_slot_definition)
  var_not, 1, LOCAL(2), 1, LOCAL(3),
  // not(arguments(1).is_a_slot_definition)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(305, 11),
  POS(305, 24),
  POS(305, 7),
  POS(305, 7)
};

static FUNCTION_INFO i_lambda_27 = {
  t_lambda_27, NULL, 4, 0,
  {}
};

static TAB_NUM t_lambda_28[] = {
  0, // locals
  0, // parameters
  // add_variable !resolve_variable head
  func_add_variable, 1, var_299_4_head, 1, var_resolve_variable,
  // resolve_arguments
  func_resolve_arguments, 0, TAIL_CALL,
  POS(307, 7),
  POS(308, 7)
};

static FUNCTION_INFO i_lambda_28 = {
  t_lambda_28, NULL, 2, 0,
  {}
};

static TAB_NUM t_func_resolve_arguments[] = {
  0, // locals
  0, // parameters
  // for_each arguments add_definition next
  var_for_each, 3, var_300_4_arguments, var_add_definition, var_next, TAIL_CALL,
  POS(312, 5)
};

static FUNCTION_INFO i_func_resolve_arguments = {
  t_func_resolve_arguments, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__node___add_definition[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next
  var_next, 0, TAIL_CALL,
  POS(317, 3)
};

static FUNCTION_INFO i_func_funky_types__node___add_definition = {
  t_func_funky_types__node___add_definition, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__definition___add_definition[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 319_43_self
  // add_variable !resolve_variable self
  func_add_variable, 1, LOCAL(1), 1, var_resolve_variable,
  // next
  var_next, 0, TAIL_CALL,
  POS(320, 3),
  POS(321, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_funky_types__definition___add_definition = {
  t_func_funky_types__definition___add_definition, NULL, 2, 1,
  {"319_43_self\000"}
};

static TAB_NUM t_func_add_variable[] = {
  2, // locals
  1, // parameters
  var_323_17_node,
  // $identifier identifier_of(node)
  var_identifier_of, 1, var_323_17_node, 1, var_324_4_identifier,
  // not(allow_hidden) && resolve_variable(identifier).is_defined:
  var_not, 1, var_allow_hidden, 1, LOCAL(1),
  // not(allow_hidden) && resolve_variable(identifier).is_defined:
  var_std__and, 2, LOCAL(1), lambda_29, 1, LOCAL(2),
  // on not(allow_hidden) && resolve_variable(identifier).is_defined:
  var_on, 2, LOCAL(2), lambda_30, 0,
  // resolve_variable(identifier identifier)
  var_resolve_variable, 2, var_324_4_identifier, var_324_4_identifier, 1, LOCAL(1),
  // -> resolve_variable(identifier identifier)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(324, 3),
  POS(325, 6),
  POS(325, 6),
  POS(325, 3),
  POS(327, 6),
  POS(327, 3)
};

static FUNCTION_INFO i_func_add_variable = {
  t_func_add_variable, NULL, 6, 0,
  {}
};

static TAB_NUM t_lambda_29[] = {
  2, // locals
  0, // parameters
  // resolve_variable(identifier).is_defined:
  var_resolve_variable, 1, var_324_4_identifier, 1, LOCAL(1),
  // is_defined:
  var_is_defined, 1, LOCAL(1), 1, LOCAL(2),
  // resolve_variable(identifier).is_defined:
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(325, 27),
  POS(325, 56),
  POS(325, 27)
};

static FUNCTION_INFO i_lambda_29 = {
  t_lambda_29, NULL, 3, 0,
  {}
};

static TAB_NUM t_lambda_30[] = {
  0, // locals
  0, // parameters
  // syntax_error "Variable is already defined" node
  var_syntax_error, 2, str_Variable_is_alre, var_323_17_node, TAIL_CALL,
  POS(326, 5)
};

static FUNCTION_INFO i_lambda_30 = {
  t_lambda_30, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_collect_global_redefinitions[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 329_33_statements
  // for_each statements add_redefinitions -> redefined_variables
  var_for_each, 3, LOCAL(1), var_add_redefinitions, lambda_31, TAIL_CALL,
  POS(330, 3),
  LOCAL(1)
};

static FUNCTION_INFO i_func_collect_global_redefinitions = {
  t_func_collect_global_redefinitions, NULL, 1, 1,
  {"329_33_statements\000"}
};

static TAB_NUM t_lambda_31[] = {
  0, // locals
  0, // parameters
  //  redefined_variables
  LET, 1, var_redefined_variables, TAIL_CALL,
  POS(330, 43)
};

static FUNCTION_INFO i_lambda_31 = {
  t_lambda_31, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__node___add_redefinitions[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next
  var_next, 0, TAIL_CALL,
  POS(335, 3)
};

static FUNCTION_INFO i_func_funky_types__node___add_redefinitions = {
  t_func_funky_types__node___add_redefinitions, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_funky_types__statement___add_redefinitions[] = {
  4, // locals
  1, // parameters
  LOCAL(4), // 337_45_self
  // arguments_of(self) head_of(self)) add_redefinition
  var_arguments_of, 1, LOCAL(4), 1, LOCAL(1),
  // head_of(self)) add_redefinition
  var_head_of, 1, LOCAL(4), 1, LOCAL(2),
  // push(arguments_of(self) head_of(self)) add_redefinition
  var_push, 2, LOCAL(1), LOCAL(2), 1, LOCAL(3),
  // for_each
  var_for_each, 3, LOCAL(3), var_add_redefinition, var_next, TAIL_CALL,
  POS(339, 10),
  POS(339, 29),
  POS(339, 5),
  POS(338, 3),
  LOCAL(4)
};

static FUNCTION_INFO i_func_funky_types__statement___add_redefinitions = {
  t_func_funky_types__statement___add_redefinitions, NULL, 4, 1,
  {"337_45_self\000"}
};

static TAB_NUM t_func_funky_types__node___add_redefinition[] = {
  1, // locals
  1, // parameters
  LOCAL(1),
  // next
  var_next, 0, TAIL_CALL,
  POS(345, 3)
};

static FUNCTION_INFO i_func_funky_types__node___add_redefinition = {
  t_func_funky_types__node___add_redefinition, NULL, 1, 0,
  {}
};

static TAB_NUM t_func_add_identifier_redefinition[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 350_32_self
  // $identifier identifier_of(self)
  var_identifier_of, 1, LOCAL(2), 1, var_351_4_identifier,
  // identifier .contains. ':'
  var_contains, 2, var_351_4_identifier, chr_58, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_32, TAIL_CALL,
  POS(351, 3),
  POS(353, 5),
  POS(352, 3),
  LOCAL(2)
};

static FUNCTION_INFO i_func_add_identifier_redefinition = {
  t_func_add_identifier_redefinition, NULL, 3, 1,
  {"350_32_self\000"}
};

static TAB_NUM t_lambda_32[] = {
  0, // locals
  0, // parameters
  // redefined_variables(identifier) true
  var_redefined_variables, 2, var_351_4_identifier, var_true, 1, var_redefined_variables,
  // next
  var_next, 0, TAIL_CALL,
  POS(356, 8),
  POS(357, 7)
};

static FUNCTION_INFO i_lambda_32 = {
  t_lambda_32, NULL, 2, 0,
  {}
};

static int key_value_pair_70_8_arguments[] = {
  -chr_47, -string_2
};

static int tuple_94_27_arguments[] = {
  -num_1, -num_0
};

static int key_value_pair_94_20_arguments[] = {
  -str_std, -tuple_94_27
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky__compile_module}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_1}},
  {FLT_STRING_8, 1, {.str_8 = "/"}},
  {FLT_STRING_8, 4, {.str_8 = ".fky"}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_STRING_8, 2, {.str_8 = "__"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_70_8_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_2}},
  {FLT_STRING_8, 17, {.str_8 = "The source file \042"}},
  {FLT_STRING_8, 36, {.str_8 = "\042 does not contain any source code!\012"}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_3}},
  {FLT_CHARACTER, 0, {.value = 33}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_4}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_required_modules}},
  {FLT_STRING_8, 12, {.str_8 = "basic/stdlib"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_5}},
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_TUPLE, 2, {.arguments = tuple_94_27_arguments}},
  {FLT_STRING_8, 3, {.str_8 = "std"}},
  {FLT_KEY_VALUE_PAIR, 2, {.arguments = key_value_pair_94_20_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_6}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_retrieve_meta_instructions}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_loop}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_7}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_8}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_NAMESPACE_INSTRUCTION}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_version_is_defined}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_9}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_10}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_11}},
  {FLT_STRING_8, 1, {.str_8 = "1"}},
  {FLT_STRING_8, 1, {.str_8 = "0"}},
  {FLT_STRING_8, 1, {.str_8 = "-"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_defined_namespacesnamespace_name_is_defined}},
  {FLT_STRING_8, 28, {.str_8 = "Namespace is already defined"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_12}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_REQUIRE_INSTRUCTION}},
  {FLT_STRING_8, 2, {.str_8 = "./"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_13}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_POSITIVE_INT64, 0, {.value = 3}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_required_modulesrequired_module}},
  {FLT_STRING_8, 26, {.str_8 = "Module is already required"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_14}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_USING_INSTRUCTION}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_15}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_16}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_used_namespacesused_namespace_is_defined}},
  {FLT_STRING_8, 25, {.str_8 = "Namespace is already used"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_17}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_RESOLVE_INSTRUCTION}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_namespace_versionsresolved_namespace_is_defined}},
  {FLT_STRING_8, 29, {.str_8 = "Namespace is already resolved"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_18}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_19}},
  {FLT_STRING_8, 8, {.str_8 = "unstable"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_20}},
  {FLT_STRING_8, 1, {.str_8 = "."}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_ALIAS_INSTRUCTION}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_namespace_aliasesalias_is_defined}},
  {FLT_STRING_8, 31, {.str_8 = "Redefinition of namespace alias"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_21}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_ALLOW_INSTRUCTION}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_ALLOW_HIDDEN}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_22}},
  {FLT_STRING_8, 28, {.str_8 = "Allow hidden was already set"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_ALLOW_UNUSED}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_23}},
  {FLT_STRING_8, 28, {.str_8 = "Allow unused was already set"}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_MULTILINE_REMARK}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_24}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__node___equal}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__node___hash}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collect_global_definitions}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_25}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__node___add_definitions}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__statement___add_definitions}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_26}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_27}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_28}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_resolve_arguments}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__node___add_definition}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__definition___add_definition}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add_variable}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_29}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_30}},
  {FLT_STRING_8, 27, {.str_8 = "Variable is already defined"}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_collect_global_redefinitions}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_31}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__node___add_redefinitions}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__statement___add_redefinitions}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_funky_types__node___add_redefinition}},
  {FLT_FUNCTION, 0, {.func_info = &i_func_add_identifier_redefinition}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.func_info = &i_lambda_32}}
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
    FOT_UNINITIALIZED, 0, 0,
    "60_26_filename\000", NULL
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
    "module_prefix\000", NULL,
    {.position = POS(64, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(64, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(65, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(64, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_filename\000", NULL,
    {.position = POS(66, 4)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(69, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "key_value_pair\000std", NULL,
    {.position = POS(70, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_module_name\000", NULL,
    {.position = POS(67, 4)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "replace_all\000", NULL,
    {.position = POS(68, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "71_10_statements\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse_top_level_statement_group\000", NULL,
    {.position = POS(71, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "parse\000", NULL,
    {.position = POS(71, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(72, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(73, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "syntax_error\000", NULL,
    {.position = POS(73, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(72, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "80_4_first_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_a_remark\000", NULL,
    {.position = POS(83, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "text_of\000", NULL,
    {.position = POS(84, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(84, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "81_4_is_a_main_module\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(82, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "defined_namespaces\000", NULL,
    {.position = POS(89, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "required_modules\000", NULL,
    {.position = POS(89, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "used_namespaces\000", NULL,
    {.position = POS(89, 44)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "namespace_versions\000", NULL,
    {.position = POS(89, 61)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "namespace_aliases\000", NULL,
    {.position = POS(90, 6)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "allow_hidden\000", NULL,
    {.position = POS(90, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "allow_unused\000", NULL,
    {.position = POS(90, 39)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(91, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash_set\000", NULL,
    {.position = POS(92, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(94, 27)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash_table\000", NULL,
    {.position = POS(94, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "resolve_variable\000", NULL,
    {.position = POS(95, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "simplify_statement\000", NULL,
    {.position = POS(99, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(99, 52)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(99, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "variables\000", NULL,
    {.position = POS(109, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "collect_variables\000", NULL,
    {.position = POS(109, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "categorize_variables\000", NULL,
    {.position = POS(111, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "literals\000", NULL,
    {.position = POS(113, 21)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "collect_literals\000", NULL,
    {.position = POS(113, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "generate_tabular_code\000", NULL,
    {.position = POS(128, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "148_31_statements\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "149_4_i\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "150_4_n\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(150, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "151_4_defined_namespaces\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_table\000", NULL,
    {.position = POS(151, 23)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "152_4_required_modules\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_set\000", NULL,
    {.position = POS(152, 21)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "153_4_used_namespaces\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "154_4_namespace_versions\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "155_4_namespace_aliases\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "156_4_allow_hidden\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(156, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "157_4_allow_unused\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(160, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "171_10_statement\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "node_type_of\000", NULL,
    {.position = POS(172, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "NAMESPACE_INSTRUCTION\000", NULL,
    {.position = POS(173, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "174_14_namespace_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000funky", NULL,
    {.position = POS(174, 29)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "175_14_version\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "version_of\000", NULL,
    {.position = POS(175, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "176_17_major\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "176_24_minor\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "UNSTABLE\000", NULL,
    {.position = POS(179, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(179, 20)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "major_of\000", NULL,
    {.position = POS(181, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minor_of\000", NULL,
    {.position = POS(181, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(178, 18)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "inc\000", NULL,
    {.position = POS(189, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(190, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REQUIRE_INSTRUCTION\000", NULL,
    {.position = POS(191, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "192_14_required_module\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "filename_of\000", NULL,
    {.position = POS(192, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "until\000", NULL,
    {.position = POS(197, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(198, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(203, 52)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "USING_INSTRUCTION\000", NULL,
    {.position = POS(206, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "207_14_used_namespace\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "208_14_version\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "209_17_major\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "209_24_minor\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "RESOLVE_INSTRUCTION\000", NULL,
    {.position = POS(220, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "221_14_resolved_namespace\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "222_14_version\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ALIAS_INSTRUCTION\000", NULL,
    {.position = POS(235, 11)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "236_14_alias\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "alias_of\000", NULL,
    {.position = POS(236, 20)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "237_14_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ALLOW_INSTRUCTION\000", NULL,
    {.position = POS(245, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "pragma_of\000", NULL,
    {.position = POS(246, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ALLOW_HIDDEN\000", NULL,
    {.position = POS(247, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "ALLOW_UNUSED\000", NULL,
    {.position = POS(253, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(246, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MULTILINE_REMARK\000", NULL,
    {.position = POS(259, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(158, 3)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "is_a_slot_definition\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 7,
    "node\000funky_types", funky_types__node__attributes,
    {.position = POS(274, 1)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "is_a_slot_definition\000", NULL,
    {.position = POS(274, 20)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "attribute_value_pair\000funky_types", funky_types__attribute_value_pair__attributes,
    {.position = POS(275, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "method_value_pair\000funky_types", funky_types__method_value_pair__attributes,
    {.position = POS(276, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "type_function\000funky_types", funky_types__type_function__attributes,
    {.position = POS(277, 1)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "key_of\000funky", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "equal\000", NULL,
    {.position = POS(283, 20)}
  },
  {
    FOT_UNKNOWN_POLYMORPHIC, 0, 0,
    "hash\000", NULL,
    {.position = POS(286, 20)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "add_definitions\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(291, 3)}
  },
  {
    FOT_UNKNOWN, 0, 2,
    "statement\000funky_types", funky_types__statement__attributes,
    {.position = POS(298, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "299_4_head\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "head_of\000", NULL,
    {.position = POS(299, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "300_4_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "arguments_of\000", NULL,
    {.position = POS(300, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DEFINITION\000", NULL,
    {.position = POS(303, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(304, 17)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000", NULL,
    {.position = POS(305, 7)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "add_definition\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "definition\000funky_types", funky_types__definition__attributes,
    {.position = POS(319, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "323_17_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "324_4_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "identifier_of\000", NULL,
    {.position = POS(324, 15)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "add_redefinitions\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(339, 5)}
  },
  {
    FOT_POLYMORPHIC, 0, 0,
    "add_redefinition\000", NULL,
    {.has_a_setter = false}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "redefinition\000funky_types", funky_types__redefinition__attributes,
    {.position = POS(347, 1)}
  },
  {
    FOT_UNKNOWN, 0, 1,
    "update\000funky_types", funky_types__update__attributes,
    {.position = POS(348, 1)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "351_4_identifier\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "contains\000", NULL,
    {.position = POS(353, 5)}
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
  .feature_flags = FEAT_POSITIONS|FEAT_FUNCTION_INFO,
  .marker = 0,
  0, // number of required modules
  0, // number of defined namespaces
  2, // number of used namespaces
  96, // number of constants
  149, // number of variables
  NULL, // required modules
  NULL, // defined namespaces
  used_namespaces,
  constants_table,
  variables_table,
};
