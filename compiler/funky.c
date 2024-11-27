/// require basic/stdlib
/// require ./configuration
/// require ./character_names
/// require ./nodes
/// require ./parser
/// require ./nodes_metadata
/// require ./dump
/// require ./compile
/// require ./simplify
/// require ./simplify_autogen
/// require ./collect_literals
/// require ./collect_literals_autogen
/// require ./collect_variables
/// require ./collect_variables_autogen
/// require ./generate_tabular_code

#include <stddef.h>
#include <stdint.h>

#include "runtime/common.h"
#include "runtime/builtins.h"
#include "runtime/fko.h"
#include "runtime/memory.h"

enum {
  num_0 = -1,
  str_cygwin = -2,
  lambda_1 = -3,
  string_1 = -4,
  str_dll = -5,
  lambda_2 = -6,
  str_so = -7,
  lambda_3 = -8,
  str_exe = -9,
  lambda_4 = -10,
  string_2 = -11,
  str_Wall = -12,
  str_Wnounusedfunctio = -13,
  str_Wnounusedvariabl = -14,
  str_Wnoparentheses = -15,
  str_Wnoswitch = -16,
  str_Wnotrigraphs = -17,
  str_O = -18,
  str_fomitframepointe = -19,
  str_fnostackprotecto = -20,
  str_falignfunctions = -21,
  str_falignloops = -22,
  list_65_0 = -23,
  str_assign = -24,
  str_key_value_pair = -25,
  str_list = -26,
  str_tuple = -27,
  str_sequence = -28,
  str_value_range = -29,
  func_funky__is_a_builtin_function_name = -30,
  chr_58 = -31,
  lambda_5 = -32,
  lambda_6 = -33,
  str_std = -34,
  lambda_7 = -35,
  str_std_2 = -36,
  lambda_8 = -37,
  string_3 = -38,
  lambda_9 = -39,
  str_FUNKY_INCLUDE_PA = -40,
  str_sharefunky = -41,
  chr_47 = -42,
  minus_num_1 = -43,
  chr_45 = -44,
  str_fkyrun = -45,
  lambda_do_run = -46,
  lambda_10 = -47,
  str_Missing_command = -48,
  num_1 = -49,
  lambda_11 = -50,
  str_Copyright_C = -51,
  str_filename = -52,
  str_a_source_code_fi = -53,
  str_verbose = -54,
  str_output_detailed = -55,
  list_143_0 = -56,
  str_rebuild = -57,
  str_rebuild_all_sour = -58,
  list_146_0 = -59,
  str_printc = -60,
  str_print_C_source_c = -61,
  list_149_0 = -62,
  str_moduleprefix = -63,
  str_needed_to_compil = -64,
  str_static = -65,
  str_create_a_statica = -66,
  list_155_0 = -67,
  str_FUNKY_LIBRARY_PA = -68,
  str_lib = -69,
  lambda_input_filename = -70,
  string_4 = -71,
  str_fky = -72,
  lambda_12 = -73,
  func_print_c = -74,
  func_build_executable = -75,
  lambda_13 = -76,
  lambda_14 = -77,
  lambda_15 = -78,
  lambda_16 = -79,
  lambda_17 = -80,
  str_creating_executa = -81,
  string_5 = -82,
  lambda_modules = -83,
  str_o = -84,
  str_L = -85,
  lambda_do_build_static = -86,
  str_static_2 = -87,
  str_staticlibgcc = -88,
  lambda_18 = -89,
  str_lm = -90,
  str_o_2 = -91,
  lambda_19 = -92,
  str_llibfky = -93,
  lambda_2_do_run = -94,
  num_2 = -95,
  lambda_20 = -96,
  lambda_21 = -97,
  str_done = -98,
  str_runtimebuiltins = -99,
  str_runtimedebugger = -100,
  str_runtimeinterpret = -101,
  str_runtimelinker = -102,
  str_runtimememory = -103,
  str_runtimeprofiler = -104,
  list_237_0 = -105,
  func_build_library = -106,
  str_VERSION = -107,
  lambda_22 = -108,
  lambda_23 = -109,
  lambda_2_modules = -110,
  lambda_2_do_build_static = -111,
  str_libfky = -112,
  str_a = -113,
  lambda_24 = -114,
  lambda_25 = -115,
  lambda_26 = -116,
  lambda_27 = -117,
  lambda_28 = -118,
  str_creating_static = -119,
  str_rcs = -120,
  lambda_29 = -121,
  lambda_30 = -122,
  lambda_31 = -123,
  lambda_32 = -124,
  lambda_33 = -125,
  lambda_34 = -126,
  str_creating_dynamic = -127,
  str_shared = -128,
  str_Wlsonamelibfky = -129,
  lambda_35 = -130,
  func_find_newest_timestamp = -131,
  lambda_36 = -132,
  lambda_timestamp_is_undefined = -133,
  lambda_37 = -134,
  lambda_38 = -135,
  lambda_39 = -136,
  lambda_40 = -137,
  lambda_41 = -138,
  func_collect_entries = -139,
  lambda_42 = -140,
  lambda_43 = -141,
  string_6 = -142,
  lambda_DIRECTORY = -143,
  chr_46 = -144,
  lambda_44 = -145,
  lambda_REGULAR_FILE = -146,
  lambda_45 = -147,
  lambda_46 = -148,
  func_compile = -149,
  lambda_loop = -150,
  lambda_47 = -151,
  lambda_48 = -152,
  lambda_49 = -153,
  lambda_50 = -154,
  lambda_51 = -155,
  lambda_52 = -156,
  lambda_53 = -157,
  lambda_54 = -158,
  lambda_55 = -159,
  str_llibfky_2 = -160,
  lambda_56 = -161,
  lambda_57 = -162,
  func_load_or_create_c_sources = -163,
  lambda_58 = -164,
  str_c = -165,
  lambda_59 = -166,
  str_Input_file = -167,
  str__does_not_exist = -168,
  lambda_60 = -169,
  lambda_61 = -170,
  lambda_62 = -171,
  lambda_63 = -172,
  str_compiling = -173,
  lambda_64 = -174,
  lambda_65 = -175,
  lambda_66 = -176,
  lambda_c_timestamp_is_undefined = -177,
  lambda_67 = -178,
  func_maybe_compile = -179,
  lambda_68 = -180,
  func_c_compile = -181,
  lambda_69 = -182,
  lambda_70 = -183,
  lambda_71 = -184,
  lambda_72 = -185,
  lambda_73 = -186,
  lambda_74 = -187,
  lambda_75 = -188,
  func_compile_c_file = -189,
  lambda_76 = -190,
  str_I = -191,
  str_DNDEBUG = -192,
  str_c_2 = -193,
  func_cc = -194,
  lambda_77 = -195,
  func_ar = -196,
  str_ar = -197,
  lambda_78 = -198,
  func_extract_required = -199,
  lambda_79 = -200,
  str__require = -201,
  lambda_80 = -202,
  num_12 = -203,
  chr_10 = -204,
  lambda_81 = -205,
  lambda_82 = -206,
  lambda_83 = -207,
  func_load_lines = -208,
  lambda_84 = -209,
  lambda_85 = -210,
  str_Empty_source_fil = -211,
  string_7 = -212,
  lambda_86 = -213,
  lambda_87 = -214,
  str_Missing_trailing = -215,
  func_funky__syntax_error = -216,
  lambda_node_is_defined = -217,
  lambda_88 = -218,
  lambda_89 = -219,
  chr_36 = -220,
  chr_33 = -221,
  chr_38 = -222,
  chr_34 = -223,
  chr_39 = -224,
  sequence_568_1 = -225,
  lambda_90 = -226,
  lambda_91 = -227,
  lambda_92 = -228,
  lambda_93 = -229,
  lambda_94 = -230,
  func_handle_error = -231,
  lambda_95 = -232,
  lambda_96 = -233,
  lambda_97 = -234,
  num_50 = -235,
  func_display_error = -236,
  lambda_line_is_defined = -237,
  str_ERROR = -238,
  str__IN_LINE = -239,
  str__OF_FILE = -240,
  string_8 = -241,
  string_9 = -242,
  lambda_98 = -243,
  str__IN_FILE = -244,
  string_10 = -245
};

enum {
  var__START = FIRST_VAR-1,
  var_std__assign, // extern
  var_DLL_VERSION, // initialized
  var_OS, // extern
  var_std__equal, // extern
  var_std__string, // extern
  var_DLL_EXTENSION, // dynamic
  var_if, // extern
  var_EXE_EXTENSION, // dynamic
  var_list, // extern
  var_builtin_functions, // dynamic
  var_hash_set, // extern
  var_funky__is_a_builtin_function_name, // initialized
  var_88_37_identifier, // dynamic
  var_89_1_namespace, // dynamic
  var_before, // extern
  var_is_empty, // extern
  var_has_prefix, // extern
  var_std__or, // extern
  var_behind, // extern
  var_false, // extern
  var_funky__character_from_name, // dynamic
  var_get_character_names, // extern
  var_environment, // extern
  var_PREFIX, // extern
  var_include_path, // dynamic
  var_default_value, // extern
  var_program_name, // extern
  var_truncate_until, // extern
  var_truncate_from, // extern
  var_do_run, // dynamic
  var_funky__base_directory, // derived
  var_undefined, // extern
  var_funky__current_module_name, // derived
  var_input_filename, // dynamic
  var_be_verbose, // dynamic
  var_do_rebuild, // dynamic
  var_do_print_c, // dynamic
  var_funky__module_prefix, // dynamic
  var_do_build_static, // dynamic
  var_command_line_arguments, // extern
  var_Error, // extern
  var_on, // extern
  var_COPYRIGHT, // extern
  var_MANDATORY_PARAMETER, // extern
  var_VALUED_OPTION, // extern
  var_program_parameters, // extern
  var_library_path, // dynamic
  var_std__not, // extern
  var_append, // extern
  var_update_if, // extern
  var_has_suffix, // extern
  var_base_directory, // extern
  var_until, // extern
  var_compile_module, // extern
  var_print, // extern
  var_185_10_modules, // dynamic
  var_185_19_libraries, // dynamic
  var_187_1_newest_timestamp, // dynamic
  var_without_suffix, // extern
  var_188_1_exe_filename, // dynamic
  var_192_7_exe_info, // dynamic
  var_stat, // extern
  var_is_undefined, // extern
  var_is_an_error, // extern
  var_modification_time_of, // extern
  var_std__less, // extern
  var_eprint, // extern
  var_first, // extern
  var_map, // extern
  var_208_1_arguments, // dynamic
  var_push, // extern
  var_range, // extern
  var_exec, // extern
  var_253_1_newest_timestamp, // dynamic
  var_254_1_version_filename, // dynamic
  var_256_4_version, // dynamic
  var_load, // extern
  var_trim, // extern
  var_put, // extern
  var_263_1_basename, // dynamic
  var_264_1_object_files, // dynamic
  var_272_1_a_filename, // dynamic
  var_273_7_a_info, // dynamic
  var_285_1_so_filename, // dynamic
  var_286_7_so_info, // dynamic
  var_empty_list, // extern
  var_309_1_newest_timestamp, // dynamic
  var_312_19_timestamp, // dynamic
  var_break, // extern
  var_is_defined, // extern
  var_std__and, // extern
  var_next, // extern
  var_for_each, // extern
  var_328_19_path, // dynamic
  var_329_12_entries, // dynamic
  var_directory, // extern
  var_to_error_message_string, // extern
  var_eprintln, // extern
  var_EXIT_FAILURE, // extern
  var_exit, // extern
  var_333_1_filenames, // dynamic
  var_336_1_name, // dynamic
  var_std__name_of, // extern
  var_337_1_fullname, // dynamic
  var_type_of, // extern
  var_DIRECTORY, // extern
  var_REGULAR_FILE, // extern
  var_case, // extern
  var_357_1_fky_filenames, // dynamic
  var_358_1_modules, // dynamic
  var_359_1_libraries, // dynamic
  var_360_1_object_files_handled, // dynamic
  var_empty_hash_set, // extern
  var_361_1_libraries_handled, // dynamic
  var_363_1_files_to_compile, // dynamic
  var_365_3_fky_filename, // dynamic
  var_true, // extern
  var_merge, // extern
  var_empty_insert_order_set, // extern
  var_map_reduce, // extern
  var_385_3_filename, // dynamic
  var_391_1_library_name, // dynamic
  var_loop, // extern
  var_407_1_modules, // dynamic
  var_409_3_fky_filename, // dynamic
  var_411_1_c_filename, // dynamic
  var_412_7_fky_info, // dynamic
  var_415_7_c_info, // dynamic
  var_tuple, // extern
  var_436_35_c_source, // dynamic
  var_437_1_basename, // dynamic
  var_to_utf8, // extern
  var_save, // extern
  var_446_8_filename, // dynamic
  var_446_41_fky_lines, // dynamic
  var_tuple_or_error, // extern
  var_452_1_compiled_modules, // dynamic
  var_455_8_fky_filename, // dynamic
  var_455_22_c_timestamp, // dynamic
  var_456_1_basename, // dynamic
  var_457_1_obj_filename, // dynamic
  var_458_7_obj_info, // dynamic
  var_500_18_c_filename, // dynamic
  var_CC, // extern
  var_513_34_err, // dynamic
  var_call, // extern
  var_from_utf8, // extern
  var_519_36_err, // dynamic
  var_525_32_c_source, // dynamic
  var_526_1_path, // dynamic
  var_527_1_required, // dynamic
  var_531_1_module_name, // dynamic
  var_is_not_empty, // extern
  var_while, // extern
  var_539_14_filename, // dynamic
  var_540_7_source, // dynamic
  var_cond, // extern
  var_split_source_into_lines, // extern
  var_funky__syntax_error, // initialized
  var_556_0_node, // dynamic
  var_558_4_column, // dynamic
  var_source_group_of, // extern
  var_560_1_line, // dynamic
  var_line_text_of, // extern
  var_length_of, // extern
  var_std__plus, // extern
  var_source_position_of, // extern
  var_std__minus, // extern
  var_std__sequence, // extern
  var_current_filename, // extern
  var_funky__SYNTAX_ERROR, // extern
  var_error, // extern
  var_581_16_obj, // dynamic
  var_error_category_of, // extern
  var_SYNTAX_ERROR, // extern
  var_debug__dump_object, // extern
  var_591_1_message, // dynamic
  var_error_message_text_of, // extern
  var_error_details_of, // extern
  var_592_25_filename, // dynamic
  var_592_35_line, // dynamic
  var_592_41_position, // dynamic
  var_line_no_of, // extern
  var_to_sentence_case, // extern
  var_tabs_and_spaces, // extern
  var__END
};


static TAB_NUM t_lambda_1[] = {
  1, // locals
  0, // parameters
  // "-@(DLL_VERSION).dll"
  var_std__string, 3, string_1, var_DLL_VERSION, str_dll, 1, LOCAL(1),
  //  "-@(DLL_VERSION).dll"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(56, 8),
  POS(56, 7)
};

static TAB_NUM t_lambda_2[] = {
  1, // locals
  0, // parameters
  // ".so.@(DLL_VERSION)"
  var_std__string, 2, str_so, var_DLL_VERSION, 1, LOCAL(1),
  //  ".so.@(DLL_VERSION)"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(57, 8),
  POS(57, 7)
};

static TAB_NUM t_lambda_3[] = {
  0, // locals
  0, // parameters
  //  ".exe"
  LET, 1, str_exe, TAIL_CALL,
  POS(62, 7)
};

static TAB_NUM t_lambda_4[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(63, 7)
};

static TAB_NUM t_func_funky__is_a_builtin_function_name[] = {
  1, // locals
  1, // parameters
  var_88_37_identifier,
  // $namespace identifier .before. ':'
  var_before, 2, var_88_37_identifier, chr_58, 1, var_89_1_namespace,
  // is_empty
  var_is_empty, 1, var_89_1_namespace, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_5, lambda_6, TAIL_CALL,
  POS(89, 3),
  POS(91, 15),
  POS(90, 3)
};

static TAB_NUM t_lambda_5[] = {
  1, // locals
  0, // parameters
  // builtin_functions(identifier)
  var_builtin_functions, 1, var_88_37_identifier, 1, LOCAL(1),
  //  builtin_functions(identifier)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(92, 8),
  POS(92, 7)
};

static TAB_NUM t_lambda_6[] = {
  2, // locals
  0, // parameters
  // namespace == "std" || namespace .has_prefix. "std-"
  var_std__equal, 2, var_89_1_namespace, str_std, 1, LOCAL(1),
  // namespace == "std" || namespace .has_prefix. "std-"
  var_std__or, 2, LOCAL(1), lambda_7, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_8, lambda_9, TAIL_CALL,
  POS(95, 9),
  POS(95, 9),
  POS(94, 7)
};

static TAB_NUM t_lambda_7[] = {
  1, // locals
  0, // parameters
  // namespace .has_prefix. "std-"
  var_has_prefix, 2, var_89_1_namespace, str_std_2, 1, LOCAL(1),
  // namespace .has_prefix. "std-"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(95, 31),
  POS(95, 31)
};

static TAB_NUM t_lambda_8[] = {
  2, // locals
  0, // parameters
  // identifier .behind. "::")
  var_behind, 2, var_88_37_identifier, string_3, 1, LOCAL(1),
  // builtin_functions(identifier .behind. "::")
  var_builtin_functions, 1, LOCAL(1), 1, LOCAL(2),
  //  builtin_functions(identifier .behind. "::")
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(96, 30),
  POS(96, 12),
  POS(96, 11)
};

static TAB_NUM t_lambda_9[] = {
  0, // locals
  0, // parameters
  //  false
  LET, 1, var_false, TAIL_CALL,
  POS(97, 11)
};

static TAB_NUM t_lambda_do_run[] = {
  1, // locals
  0, // parameters
  // is_empty: Error "Missing command line arguments!"
  var_is_empty, 1, var_command_line_arguments, 1, LOCAL(1),
  // on command_line_arguments.is_empty: Error "Missing command line arguments!"
  var_on, 2, LOCAL(1), lambda_10, 0,
  // command_line_arguments(1) false false false undefined false
  var_command_line_arguments, 1, num_1, 1, LOCAL(1),
  // -> command_line_arguments(1) false false false undefined false
  LET, 6, LOCAL(1), var_false, var_false, var_false, var_undefined, var_false, TAIL_CALL,
  POS(115, 31),
  POS(115, 5),
  POS(116, 8),
  POS(116, 5)
};

static TAB_NUM t_lambda_10[] = {
  0, // locals
  0, // parameters
  // Error "Missing command line arguments!"
  var_Error, 1, str_Missing_command, TAIL_CALL,
  POS(115, 41)
};

static TAB_NUM t_lambda_11[] = {
  6, // locals
  0, // parameters
  // list
  var_list, 2, var_COPYRIGHT, str_Copyright_C, 1, LOCAL(1),
  // list
  var_list, 3, var_MANDATORY_PARAMETER, str_filename, str_a_source_code_fi, 1, LOCAL(2),
  // list
  var_list, 3, var_VALUED_OPTION, str_moduleprefix, str_needed_to_compil, 1, LOCAL(6),
  // program_parameters!
  var_program_parameters, 7, LOCAL(1), LOCAL(2), list_143_0, list_146_0, list_149_0, LOCAL(6), list_155_0, IO_TAIL_CALL,
  POS(119, 7),
  POS(140, 7),
  POS(152, 7),
  POS(118, 5)
};

static TAB_NUM t_lambda_input_filename[] = {
  1, // locals
  0, // parameters
  // append("./" input_filename)
  var_append, 2, string_4, var_input_filename, 1, LOCAL(1),
  //  append("./" input_filename)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(165, 22),
  POS(165, 21)
};

static TAB_NUM t_lambda_12[] = {
  0, // locals
  0, // parameters
  // if!
  var_if, 3, var_do_print_c, func_print_c, func_build_executable, IO_TAIL_CALL,
  POS(169, 5)
};

static TAB_NUM t_func_print_c[] = {
  2, // locals
  0, // parameters
  // !base_directory until(input_filename '/' -1)
  var_until, 3, var_input_filename, chr_47, minus_num_1, 1, var_base_directory,
  // load_lines! $fky_lines input_filename
  func_load_lines, 1, var_input_filename, IO_CALL(1), LOCAL(1),
  // compile_module $c_source input_filename fky_lines
  var_compile_module, 2, var_input_filename, LOCAL(1), 1, LOCAL(2),
  // handle_error! c_source
  func_handle_error, 1, LOCAL(2), IO_CALL(0),
  // print! c_source
  var_print, 1, LOCAL(2), IO_TAIL_CALL,
  POS(176, 3),
  POS(177, 3),
  POS(178, 3),
  POS(179, 3),
  POS(180, 3)
};

static TAB_NUM t_func_build_executable[] = {
  1, // locals
  0, // parameters
  // !base_directory until(input_filename '/' -1)
  var_until, 3, var_input_filename, chr_47, minus_num_1, 1, var_base_directory,
  // compile! $modules $libraries input_filename
  func_compile, 1, var_input_filename, IO_CALL(2), var_185_10_modules, var_185_19_libraries,
  // c_compile! &modules
  func_c_compile, 1, var_185_10_modules, IO_CALL(1), var_185_10_modules,
  // $newest_timestamp find_newest_timestamp(modules)
  func_find_newest_timestamp, 1, var_185_10_modules, 1, var_187_1_newest_timestamp,
  // input_filename .without_suffix. ".fky"
  var_without_suffix, 2, var_input_filename, str_fky, 1, LOCAL(1),
  // $exe_filename
  var_append, 2, LOCAL(1), var_EXE_EXTENSION, 1, var_188_1_exe_filename,
  // stat! $exe_info exe_filename
  var_stat, 1, var_188_1_exe_filename, IO_CALL(1), var_192_7_exe_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_13, 1, LOCAL(1),
  // on
  var_on, 2, LOCAL(1), lambda_16, IO_CALL(0),
  // if
  var_if, 3, var_do_run, lambda_2_do_run, lambda_20, IO_TAIL_CALL,
  POS(184, 3),
  POS(185, 3),
  POS(186, 3),
  POS(187, 3),
  POS(190, 7),
  POS(188, 3),
  POS(192, 3),
  POS(194, 7),
  POS(193, 3),
  POS(229, 3)
};

static TAB_NUM t_lambda_13[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_187_1_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_14, 1, LOCAL(2),
  // newest_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(196, 24),
  POS(194, 7),
  POS(196, 7)
};

static TAB_NUM t_lambda_14[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_192_7_exe_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_15, 1, LOCAL(2),
  // exe_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(197, 16),
  POS(194, 7),
  POS(197, 7)
};

static TAB_NUM t_lambda_15[] = {
  2, // locals
  0, // parameters
  // modification_time_of(exe_info)
  var_modification_time_of, 1, var_192_7_exe_info, 1, LOCAL(1),
  // modification_time_of(exe_info)
  var_std__less, 2, LOCAL(1), var_187_1_newest_timestamp, 1, LOCAL(2),
  // newest_timestamp > modification_time_of(exe_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(198, 26),
  POS(198, 26),
  POS(198, 7)
};

static TAB_NUM t_lambda_16[] = {
  1, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_17, IO_CALL(0),
  // $object_files
  var_map, 2, var_185_10_modules, lambda_modules, 1, LOCAL(1),
  // $arguments cc_options
  LET, 1, list_65_0, 1, var_208_1_arguments,
  // push &arguments "-L"
  var_push, 2, var_208_1_arguments, str_L, 1, var_208_1_arguments,
  // push &arguments library_path
  var_push, 2, var_208_1_arguments, var_library_path, 1, var_208_1_arguments,
  // append &arguments object_files
  var_append, 2, var_208_1_arguments, LOCAL(1), 1, var_208_1_arguments,
  // if
  var_if, 3, var_do_build_static, lambda_do_build_static, lambda_19, IO_TAIL_CALL,
  POS(200, 7),
  POS(202, 7),
  POS(208, 7),
  POS(209, 7),
  POS(210, 7),
  POS(211, 7),
  POS(212, 7)
};

static TAB_NUM t_lambda_17[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_creating_executa, var_188_1_exe_filename, string_5, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(200, 30),
  POS(200, 22)
};

static TAB_NUM t_lambda_modules[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 204_10_module
  // first(module) .without_suffix. ".fky"
  var_first, 1, LOCAL(3), 1, LOCAL(1),
  // first(module) .without_suffix. ".fky"
  var_without_suffix, 2, LOCAL(1), str_fky, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(2), str_o, TAIL_CALL,
  POS(206, 15),
  POS(206, 15),
  POS(205, 13)
};

static TAB_NUM t_lambda_do_build_static[] = {
  1, // locals
  0, // parameters
  // push &arguments "-static"
  var_push, 2, var_208_1_arguments, str_static_2, 1, var_208_1_arguments,
  // push &arguments "-static-libgcc"
  var_push, 2, var_208_1_arguments, str_staticlibgcc, 1, var_208_1_arguments,
  // append &arguments libraries
  var_append, 2, var_208_1_arguments, var_185_19_libraries, 1, var_208_1_arguments,
  // map(runtime_objects: (name) append name ".o")
  var_map, 2, list_237_0, lambda_18, 1, LOCAL(1),
  // append &arguments map(runtime_objects: (name) append name ".o")
  var_append, 2, var_208_1_arguments, LOCAL(1), 1, var_208_1_arguments,
  // push &arguments "-lm"
  var_push, 2, var_208_1_arguments, str_lm, 1, var_208_1_arguments,
  // push &arguments "-o"
  var_push, 2, var_208_1_arguments, str_o_2, 1, var_208_1_arguments,
  // push &arguments exe_filename
  var_push, 2, var_208_1_arguments, var_188_1_exe_filename, 1, var_208_1_arguments,
  // cc! arguments
  func_cc, 1, var_208_1_arguments, IO_TAIL_CALL,
  POS(214, 11),
  POS(215, 11),
  POS(216, 11),
  POS(217, 29),
  POS(217, 11),
  POS(218, 11),
  POS(219, 11),
  POS(220, 11),
  POS(221, 11)
};

static TAB_NUM t_lambda_18[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 217_40_name
  // append name ".o")
  var_append, 2, LOCAL(1), str_o, TAIL_CALL,
  POS(217, 57)
};

static TAB_NUM t_lambda_19[] = {
  1, // locals
  0, // parameters
  // append &arguments libraries
  var_append, 2, var_208_1_arguments, var_185_19_libraries, 1, var_208_1_arguments,
  // "-l:libfky@(DLL_EXTENSION)"
  var_std__string, 2, str_llibfky, var_DLL_EXTENSION, 1, LOCAL(1),
  // push &arguments "-l:libfky@(DLL_EXTENSION)"
  var_push, 2, var_208_1_arguments, LOCAL(1), 1, var_208_1_arguments,
  // push &arguments "-lm"
  var_push, 2, var_208_1_arguments, str_lm, 1, var_208_1_arguments,
  // push &arguments "-o"
  var_push, 2, var_208_1_arguments, str_o_2, 1, var_208_1_arguments,
  // push &arguments exe_filename
  var_push, 2, var_208_1_arguments, var_188_1_exe_filename, 1, var_208_1_arguments,
  // cc! arguments
  func_cc, 1, var_208_1_arguments, IO_TAIL_CALL,
  POS(223, 11),
  POS(224, 27),
  POS(224, 11),
  POS(225, 11),
  POS(226, 11),
  POS(227, 11),
  POS(228, 11)
};

static TAB_NUM t_lambda_2_do_run[] = {
  1, // locals
  0, // parameters
  // range(command_line_arguments 2 -1)
  var_range, 3, var_command_line_arguments, num_2, minus_num_1, 1, LOCAL(1),
  // exec! exe_filename range(command_line_arguments 2 -1)
  var_exec, 2, var_188_1_exe_filename, LOCAL(1), IO_TAIL_CALL,
  POS(231, 26),
  POS(231, 7)
};

static TAB_NUM t_lambda_20[] = {
  0, // locals
  0, // parameters
  // on be_verbose:
  var_on, 2, var_be_verbose, lambda_21, IO_TAIL_CALL,
  POS(233, 7)
};

static TAB_NUM t_lambda_21[] = {
  0, // locals
  0, // parameters
  // eprint! "
  var_eprint, 1, str_done, IO_TAIL_CALL,
  POS(234, 9)
};

static TAB_NUM t_func_build_library[] = {
  4, // locals
  0, // parameters
  // without_suffix &input_filename '/'
  var_without_suffix, 2, var_input_filename, chr_47, 1, var_input_filename,
  // !base_directory until(input_filename '/' -1)
  var_until, 3, var_input_filename, chr_47, minus_num_1, 1, var_base_directory,
  // collect_entries! $filenames input_filename
  func_collect_entries, 1, var_input_filename, IO_CALL(1), LOCAL(2),
  // load_or_create_c_sources! $modules filenames
  func_load_or_create_c_sources, 1, LOCAL(2), IO_CALL(1), LOCAL(3),
  // handle_error! modules
  func_handle_error, 1, LOCAL(3), IO_CALL(0),
  // c_compile! &modules
  func_c_compile, 1, LOCAL(3), IO_CALL(1), LOCAL(3),
  // $newest_timestamp find_newest_timestamp(modules)
  func_find_newest_timestamp, 1, LOCAL(3), 1, var_253_1_newest_timestamp,
  // $version_filename append(input_filename "/VERSION")
  var_append, 2, var_input_filename, str_VERSION, 1, var_254_1_version_filename,
  // stat! $version_info version_filename
  var_stat, 1, var_254_1_version_filename, IO_CALL(1), LOCAL(4),
  // is_an_error
  var_is_an_error, 1, LOCAL(4), 1, LOCAL(1),
  // if $version
  var_if, 3, LOCAL(1), lambda_22, lambda_23, IO_CALL(1), var_256_4_version,
  // $basename truncate_until(input_filename '/' -1)
  var_truncate_until, 3, var_input_filename, chr_47, minus_num_1, 1, var_263_1_basename,
  // $object_files
  var_map, 2, LOCAL(3), lambda_2_modules, 1, var_264_1_object_files,
  // if
  var_if, 3, var_do_build_static, lambda_2_do_build_static, lambda_29, IO_TAIL_CALL,
  POS(247, 3),
  POS(248, 3),
  POS(249, 3),
  POS(250, 3),
  POS(251, 3),
  POS(252, 3),
  POS(253, 3),
  POS(254, 3),
  POS(255, 3),
  POS(257, 18),
  POS(256, 3),
  POS(263, 3),
  POS(264, 3),
  POS(270, 3)
};

static TAB_NUM t_lambda_22[] = {
  0, // locals
  0, // parameters
  //  ""
  LET, 1, string_2, TAIL_CALL,
  POS(258, 7)
};

static TAB_NUM t_lambda_23[] = {
  1, // locals
  0, // parameters
  // load! !version version_filename
  var_load, 1, var_254_1_version_filename, IO_CALL(1), var_256_4_version,
  // trim &version
  var_trim, 1, var_256_4_version, 1, var_256_4_version,
  // put(version '-')
  var_put, 2, var_256_4_version, chr_45, 1, LOCAL(1),
  // -> put(version '-')
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(260, 7),
  POS(261, 7),
  POS(262, 10),
  POS(262, 7)
};

static TAB_NUM t_lambda_2_modules[] = {
  3, // locals
  1, // parameters
  LOCAL(3), // 266_10_module
  // first(module) .without_suffix. ".fky"
  var_first, 1, LOCAL(3), 1, LOCAL(1),
  // first(module) .without_suffix. ".fky"
  var_without_suffix, 2, LOCAL(1), str_fky, 1, LOCAL(2),
  // append
  var_append, 2, LOCAL(2), str_o, TAIL_CALL,
  POS(268, 11),
  POS(268, 11),
  POS(267, 9)
};

static TAB_NUM t_lambda_2_do_build_static[] = {
  1, // locals
  0, // parameters
  // $a_filename "libfky-@(basename).a"
  var_std__string, 3, str_libfky, var_263_1_basename, str_a, 1, var_272_1_a_filename,
  // stat! $a_info a_filename
  var_stat, 1, var_272_1_a_filename, IO_CALL(1), var_273_7_a_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_24, 1, LOCAL(1),
  // on
  var_on, 2, LOCAL(1), lambda_27, IO_TAIL_CALL,
  POS(272, 7),
  POS(273, 7),
  POS(275, 11),
  POS(274, 7)
};

static TAB_NUM t_lambda_24[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_253_1_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_25, 1, LOCAL(2),
  // newest_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(277, 28),
  POS(275, 11),
  POS(277, 11)
};

static TAB_NUM t_lambda_25[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_273_7_a_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_26, 1, LOCAL(2),
  // a_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(278, 18),
  POS(275, 11),
  POS(278, 11)
};

static TAB_NUM t_lambda_26[] = {
  2, // locals
  0, // parameters
  // modification_time_of(a_info)
  var_modification_time_of, 1, var_273_7_a_info, 1, LOCAL(1),
  // modification_time_of(a_info)
  var_std__less, 2, LOCAL(1), var_253_1_newest_timestamp, 1, LOCAL(2),
  // newest_timestamp > modification_time_of(a_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(279, 30),
  POS(279, 30),
  POS(279, 11)
};

static TAB_NUM t_lambda_27[] = {
  2, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_28, IO_CALL(0),
  // list("rcs" a_filename) object_files)
  var_list, 2, str_rcs, var_272_1_a_filename, 1, LOCAL(1),
  // append(list("rcs" a_filename) object_files)
  var_append, 2, LOCAL(1), var_264_1_object_files, 1, LOCAL(2),
  // ar! append(list("rcs" a_filename) object_files)
  func_ar, 1, LOCAL(2), IO_TAIL_CALL,
  POS(281, 11),
  POS(283, 22),
  POS(283, 15),
  POS(283, 11)
};

static TAB_NUM t_lambda_28[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_creating_static, var_272_1_a_filename, string_5, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(281, 34),
  POS(281, 26)
};

static TAB_NUM t_lambda_29[] = {
  1, // locals
  0, // parameters
  // $so_filename "libfky-@(basename)@(version)@(DLL_EXTENSION)"
  var_std__string, 4, str_libfky, var_263_1_basename, var_256_4_version, var_DLL_EXTENSION, 1, var_285_1_so_filename,
  // stat! $so_info so_filename
  var_stat, 1, var_285_1_so_filename, IO_CALL(1), var_286_7_so_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_30, 1, LOCAL(1),
  // on
  var_on, 2, LOCAL(1), lambda_33, IO_CALL(0),
  // on be_verbose:
  var_on, 2, var_be_verbose, lambda_35, IO_TAIL_CALL,
  POS(285, 7),
  POS(286, 7),
  POS(288, 11),
  POS(287, 7),
  POS(304, 7)
};

static TAB_NUM t_lambda_30[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_253_1_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_31, 1, LOCAL(2),
  // newest_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(290, 28),
  POS(288, 11),
  POS(290, 11)
};

static TAB_NUM t_lambda_31[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_286_7_so_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_32, 1, LOCAL(2),
  // so_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(291, 19),
  POS(288, 11),
  POS(291, 11)
};

static TAB_NUM t_lambda_32[] = {
  2, // locals
  0, // parameters
  // modification_time_of(so_info)
  var_modification_time_of, 1, var_286_7_so_info, 1, LOCAL(1),
  // modification_time_of(so_info)
  var_std__less, 2, LOCAL(1), var_253_1_newest_timestamp, 1, LOCAL(2),
  // newest_timestamp > modification_time_of(so_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(292, 30),
  POS(292, 30),
  POS(292, 11)
};

static TAB_NUM t_lambda_33[] = {
  2, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_34, IO_CALL(0),
  // $arguments empty_list
  LET, 1, var_empty_list, 1, LOCAL(2),
  // push &arguments "-shared"
  var_push, 2, LOCAL(2), str_shared, 1, LOCAL(2),
  // "-Wl,-soname,libfky-@(basename)@(DLL_EXTENSION)"
  var_std__string, 3, str_Wlsonamelibfky, var_263_1_basename, var_DLL_EXTENSION, 1, LOCAL(1),
  // push &arguments
  var_push, 2, LOCAL(2), LOCAL(1), 1, LOCAL(2),
  // append &arguments object_files
  var_append, 2, LOCAL(2), var_264_1_object_files, 1, LOCAL(2),
  // push &arguments "-o"
  var_push, 2, LOCAL(2), str_o_2, 1, LOCAL(2),
  // push &arguments so_filename
  var_push, 2, LOCAL(2), var_285_1_so_filename, 1, LOCAL(2),
  // cc! arguments
  func_cc, 1, LOCAL(2), IO_TAIL_CALL,
  POS(294, 11),
  POS(296, 11),
  POS(297, 11),
  POS(299, 13),
  POS(298, 11),
  POS(300, 11),
  POS(301, 11),
  POS(302, 11),
  POS(303, 11)
};

static TAB_NUM t_lambda_34[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_creating_dynamic, var_285_1_so_filename, string_5, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(294, 34),
  POS(294, 26)
};

static TAB_NUM t_lambda_35[] = {
  0, // locals
  0, // parameters
  // eprint! "
  var_eprint, 1, str_done, IO_TAIL_CALL,
  POS(305, 9)
};

static TAB_NUM t_func_find_newest_timestamp[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 308_25_modules
  // $newest_timestamp undefined
  LET, 1, var_undefined, 1, var_309_1_newest_timestamp,
  // for_each modules
  var_for_each, 3, LOCAL(1), lambda_36, lambda_41, IO_TAIL_CALL,
  POS(309, 3),
  POS(310, 3)
};

static TAB_NUM t_lambda_36[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 311_3_module
  // module $_filename $timestamp
  LOCAL(2), 0, 2, LOCAL(1), var_312_19_timestamp,
  // is_undefined:
  var_is_undefined, 1, var_312_19_timestamp, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_timestamp_is_undefined, lambda_37, IO_TAIL_CALL,
  POS(312, 7),
  POS(314, 19),
  POS(313, 7)
};

static TAB_NUM t_lambda_timestamp_is_undefined[] = {
  0, // locals
  0, // parameters
  // !newest_timestamp undefined
  LET, 1, var_undefined, 1, var_309_1_newest_timestamp,
  // break!
  var_break, 0, IO_TAIL_CALL,
  POS(315, 11),
  POS(316, 11)
};

static TAB_NUM t_lambda_37[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_309_1_newest_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_38, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_40, var_next, IO_TAIL_CALL,
  POS(320, 32),
  POS(319, 15),
  POS(318, 11)
};

static TAB_NUM t_lambda_38[] = {
  2, // locals
  0, // parameters
  // is_defined && timestamp > newest_timestamp
  var_is_defined, 1, var_312_19_timestamp, 1, LOCAL(1),
  // is_defined && timestamp > newest_timestamp
  var_std__and, 2, LOCAL(1), lambda_39, 1, LOCAL(2),
  // timestamp.is_defined && timestamp > newest_timestamp
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(321, 25),
  POS(321, 25),
  POS(321, 15)
};

static TAB_NUM t_lambda_39[] = {
  1, // locals
  0, // parameters
  // newest_timestamp
  var_std__less, 2, var_309_1_newest_timestamp, var_312_19_timestamp, 1, LOCAL(1),
  // timestamp > newest_timestamp
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(321, 51),
  POS(321, 39)
};

static TAB_NUM t_lambda_40[] = {
  0, // locals
  0, // parameters
  // !newest_timestamp timestamp
  LET, 1, var_312_19_timestamp, 1, var_309_1_newest_timestamp,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(323, 15),
  POS(324, 15)
};

static TAB_NUM t_lambda_41[] = {
  0, // locals
  0, // parameters
  //  newest_timestamp
  LET, 1, var_309_1_newest_timestamp, TAIL_CALL,
  POS(326, 7)
};

static TAB_NUM t_func_collect_entries[] = {
  1, // locals
  1, // parameters
  var_328_19_path,
  // directory! $entries path
  var_directory, 1, var_328_19_path, IO_CALL(1), var_329_12_entries,
  // is_an_error:
  var_is_an_error, 1, var_329_12_entries, 1, LOCAL(1),
  // on entries.is_an_error:
  var_on, 2, LOCAL(1), lambda_42, IO_CALL(0),
  // $filenames empty_list
  LET, 1, var_empty_list, 1, var_333_1_filenames,
  // for_each entries
  var_for_each, 3, var_329_12_entries, lambda_43, lambda_46, IO_TAIL_CALL,
  POS(329, 3),
  POS(330, 14),
  POS(330, 3),
  POS(333, 3),
  POS(334, 3)
};

static TAB_NUM t_lambda_42[] = {
  1, // locals
  0, // parameters
  // to_error_message_string
  var_to_error_message_string, 1, var_329_12_entries, 1, LOCAL(1),
  // eprintln! entries.to_error_message_string
  var_eprintln, 1, LOCAL(1), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(331, 23),
  POS(331, 5),
  POS(332, 5)
};

static TAB_NUM t_lambda_43[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 335_3_entry
  // $name std::name_of(entry)
  var_std__name_of, 1, LOCAL(2), 1, var_336_1_name,
  // $fullname append(path "/" name)
  var_append, 3, var_328_19_path, string_6, var_336_1_name, 1, var_337_1_fullname,
  // type_of(entry)
  var_type_of, 1, LOCAL(2), 1, LOCAL(1),
  // case type_of(entry)
  var_case, 6, LOCAL(1), var_DIRECTORY, lambda_DIRECTORY, var_REGULAR_FILE, lambda_REGULAR_FILE, var_next, IO_TAIL_CALL,
  POS(336, 7),
  POS(337, 7),
  POS(338, 12),
  POS(338, 7)
};

static TAB_NUM t_lambda_DIRECTORY[] = {
  1, // locals
  0, // parameters
  // name .has_prefix. '.'
  var_has_prefix, 2, var_336_1_name, chr_46, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_44, IO_TAIL_CALL,
  POS(341, 13),
  POS(340, 11)
};

static TAB_NUM t_lambda_44[] = {
  1, // locals
  0, // parameters
  // collect_entries! $more_filenames fullname
  func_collect_entries, 1, var_337_1_fullname, IO_CALL(1), LOCAL(1),
  // append &filenames more_filenames
  var_append, 2, var_333_1_filenames, LOCAL(1), 1, var_333_1_filenames,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(344, 15),
  POS(345, 15),
  POS(346, 15)
};

static TAB_NUM t_lambda_REGULAR_FILE[] = {
  1, // locals
  0, // parameters
  // name .has_suffix. ".fky":
  var_has_suffix, 2, var_336_1_name, str_fky, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_45, var_next, IO_TAIL_CALL,
  POS(349, 13),
  POS(348, 11)
};

static TAB_NUM t_lambda_45[] = {
  0, // locals
  0, // parameters
  // push &filenames fullname
  var_push, 2, var_333_1_filenames, var_337_1_fullname, 1, var_333_1_filenames,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(350, 15),
  POS(351, 15)
};

static TAB_NUM t_lambda_46[] = {
  0, // locals
  0, // parameters
  //  filenames
  LET, 1, var_333_1_filenames, TAIL_CALL,
  POS(354, 7)
};

static TAB_NUM t_func_compile[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 356_11_base_filename
  // $fky_filenames list(base_filename)
  var_list, 1, LOCAL(1), 1, var_357_1_fky_filenames,
  // $modules empty_list
  LET, 1, var_empty_list, 1, var_358_1_modules,
  // $libraries empty_list
  LET, 1, var_empty_list, 1, var_359_1_libraries,
  // $object_files_handled empty_hash_set
  LET, 1, var_empty_hash_set, 1, var_360_1_object_files_handled,
  // $libraries_handled empty_hash_set
  LET, 1, var_empty_hash_set, 1, var_361_1_libraries_handled,
  // loop:
  var_loop, 1, lambda_loop, IO_TAIL_CALL,
  POS(357, 3),
  POS(358, 3),
  POS(359, 3),
  POS(360, 3),
  POS(361, 3),
  POS(362, 3)
};

static TAB_NUM t_lambda_loop[] = {
  0, // locals
  0, // parameters
  // $files_to_compile empty_list
  LET, 1, var_empty_list, 1, var_363_1_files_to_compile,
  // for_each fky_filenames
  var_for_each, 3, var_357_1_fky_filenames, lambda_47, lambda_49, IO_TAIL_CALL,
  POS(363, 5),
  POS(364, 5)
};

static TAB_NUM t_lambda_47[] = {
  1, // locals
  1, // parameters
  var_365_3_fky_filename,
  // object_files_handled(fky_filename)
  var_360_1_object_files_handled, 1, var_365_3_fky_filename, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_48, IO_TAIL_CALL,
  POS(367, 11),
  POS(366, 9)
};

static TAB_NUM t_lambda_48[] = {
  0, // locals
  0, // parameters
  // object_files_handled(fky_filename) true
  var_360_1_object_files_handled, 2, var_365_3_fky_filename, var_true, 1, var_360_1_object_files_handled,
  // push &files_to_compile fky_filename
  var_push, 2, var_363_1_files_to_compile, var_365_3_fky_filename, 1, var_363_1_files_to_compile,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(370, 14),
  POS(371, 13),
  POS(372, 13)
};

static TAB_NUM t_lambda_49[] = {
  1, // locals
  0, // parameters
  // is_empty
  var_is_empty, 1, var_363_1_files_to_compile, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_50, lambda_51, IO_TAIL_CALL,
  POS(375, 28),
  POS(374, 9)
};

static TAB_NUM t_lambda_50[] = {
  0, // locals
  0, // parameters
  //  modules libraries
  LET, 2, var_358_1_modules, var_359_1_libraries, TAIL_CALL,
  POS(376, 13)
};

static TAB_NUM t_lambda_51[] = {
  2, // locals
  0, // parameters
  // load_or_create_c_sources! $more_modules files_to_compile
  func_load_or_create_c_sources, 1, var_363_1_files_to_compile, IO_CALL(1), LOCAL(1),
  // handle_error! more_modules
  func_handle_error, 1, LOCAL(1), IO_CALL(0),
  // map_reduce $required
  var_map_reduce, 4, LOCAL(1), func_extract_required, var_merge, var_empty_insert_order_set, 1, LOCAL(2),
  // append &modules more_modules
  var_append, 2, var_358_1_modules, LOCAL(1), 1, var_358_1_modules,
  // !fky_filenames empty_list
  LET, 1, var_empty_list, 1, var_357_1_fky_filenames,
  // for_each required
  var_for_each, 3, LOCAL(2), lambda_52, var_next, IO_TAIL_CALL,
  POS(378, 13),
  POS(379, 13),
  POS(380, 13),
  POS(382, 13),
  POS(383, 13),
  POS(384, 13)
};

static TAB_NUM t_lambda_52[] = {
  2, // locals
  1, // parameters
  var_385_3_filename,
  // filename(1) == '.':
  var_385_3_filename, 1, num_1, 1, LOCAL(1),
  // filename(1) == '.':
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_53, lambda_54, IO_TAIL_CALL,
  POS(387, 19),
  POS(387, 19),
  POS(386, 17)
};

static TAB_NUM t_lambda_53[] = {
  1, // locals
  0, // parameters
  // "@(filename).fky"
  var_std__string, 2, var_385_3_filename, str_fky, 1, LOCAL(1),
  // push &fky_filenames "@(filename).fky"
  var_push, 2, var_357_1_fky_filenames, LOCAL(1), 1, var_357_1_fky_filenames,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(388, 41),
  POS(388, 21),
  POS(389, 21)
};

static TAB_NUM t_lambda_54[] = {
  1, // locals
  0, // parameters
  // $library_name filename .truncate_from. '/'
  var_truncate_from, 2, var_385_3_filename, chr_47, 1, var_391_1_library_name,
  // !library_name
  var_if, 3, var_do_build_static, lambda_55, lambda_56, 1, var_391_1_library_name,
  // libraries_handled(library_name)
  var_361_1_libraries_handled, 1, var_391_1_library_name, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), var_next, lambda_57, IO_TAIL_CALL,
  POS(391, 21),
  POS(392, 21),
  POS(398, 23),
  POS(397, 21)
};

static TAB_NUM t_lambda_55[] = {
  1, // locals
  0, // parameters
  // "-l:libfky-@(library_name).a"
  var_std__string, 3, str_llibfky_2, var_391_1_library_name, str_a, 1, LOCAL(1),
  //  "-l:libfky-@(library_name).a"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(395, 28),
  POS(395, 27)
};

static TAB_NUM t_lambda_56[] = {
  1, // locals
  0, // parameters
  // "-l:libfky-@(library_name)@(DLL_EXTENSION)"
  var_std__string, 3, str_llibfky_2, var_391_1_library_name, var_DLL_EXTENSION, 1, LOCAL(1),
  //  "-l:libfky-@(library_name)@(DLL_EXTENSION)"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(396, 28),
  POS(396, 27)
};

static TAB_NUM t_lambda_57[] = {
  0, // locals
  0, // parameters
  // libraries_handled(library_name) true
  var_361_1_libraries_handled, 2, var_391_1_library_name, var_true, 1, var_361_1_libraries_handled,
  // push &libraries library_name
  var_push, 2, var_359_1_libraries, var_391_1_library_name, 1, var_359_1_libraries,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(401, 26),
  POS(402, 25),
  POS(403, 25)
};

static TAB_NUM t_func_load_or_create_c_sources[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 406_28_filenames
  // $modules empty_list # a list of tuple(filename c_timestamp c_source fky_lines)
  LET, 1, var_empty_list, 1, var_407_1_modules,
  // for_each filenames # sequential load
  var_for_each, 3, LOCAL(1), lambda_58, lambda_65, IO_TAIL_CALL,
  POS(407, 3),
  POS(408, 3)
};

static TAB_NUM t_lambda_58[] = {
  2, // locals
  1, // parameters
  var_409_3_fky_filename,
  // $basename truncate_from(fky_filename '.' -1)
  var_truncate_from, 3, var_409_3_fky_filename, chr_46, minus_num_1, 1, LOCAL(2),
  // $c_filename append(basename ".c")
  var_append, 2, LOCAL(2), str_c, 1, var_411_1_c_filename,
  // stat! $fky_info fky_filename
  var_stat, 1, var_409_3_fky_filename, IO_CALL(1), var_412_7_fky_info,
  // is_an_error: Error! "
  var_is_an_error, 1, var_412_7_fky_info, 1, LOCAL(1),
  // on fky_info.is_an_error: Error! "
  var_on, 2, LOCAL(1), lambda_59, IO_CALL(0),
  // stat! $c_info c_filename
  var_stat, 1, var_411_1_c_filename, IO_CALL(1), var_415_7_c_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_60, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_62, lambda_64, IO_TAIL_CALL,
  POS(410, 7),
  POS(411, 7),
  POS(412, 7),
  POS(413, 19),
  POS(413, 7),
  POS(415, 7),
  POS(417, 11),
  POS(416, 7)
};

static TAB_NUM t_lambda_59[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_Input_file, var_409_3_fky_filename, str__does_not_exist, 1, LOCAL(1),
  // Error! "
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(413, 39),
  POS(413, 32)
};

static TAB_NUM t_lambda_60[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_415_7_c_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_61, 1, LOCAL(2),
  // c_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(419, 18),
  POS(417, 11),
  POS(419, 11)
};

static TAB_NUM t_lambda_61[] = {
  3, // locals
  0, // parameters
  // modification_time_of(fky_info) > modification_time_of(c_info)
  var_modification_time_of, 1, var_412_7_fky_info, 1, LOCAL(1),
  // modification_time_of(c_info)
  var_modification_time_of, 1, var_415_7_c_info, 1, LOCAL(2),
  // modification_time_of(c_info)
  var_std__less, 2, LOCAL(2), LOCAL(1), 1, LOCAL(3),
  // modification_time_of(fky_info) > modification_time_of(c_info)
  LET, 1, LOCAL(3), TAIL_CALL,
  POS(420, 11),
  POS(420, 44),
  POS(420, 44),
  POS(420, 11)
};

static TAB_NUM t_lambda_62[] = {
  2, // locals
  0, // parameters
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_63, IO_CALL(0),
  // load_lines! $fky_lines fky_filename
  func_load_lines, 1, var_409_3_fky_filename, IO_CALL(1), LOCAL(2),
  // tuple(fky_filename undefined undefined fky_lines)
  var_tuple, 4, var_409_3_fky_filename, var_undefined, var_undefined, LOCAL(2), 1, LOCAL(1),
  // push &modules tuple(fky_filename undefined undefined fky_lines)
  var_push, 2, var_407_1_modules, LOCAL(1), 1, var_407_1_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(422, 11),
  POS(424, 11),
  POS(425, 25),
  POS(425, 11),
  POS(426, 11)
};

static TAB_NUM t_lambda_63[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_compiling, var_409_3_fky_filename, string_5, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(422, 34),
  POS(422, 26)
};

static TAB_NUM t_lambda_64[] = {
  3, // locals
  0, // parameters
  // load! $c_source c_filename
  var_load, 1, var_411_1_c_filename, IO_CALL(1), LOCAL(3),
  // modification_time_of(c_info) c_source undefined)
  var_modification_time_of, 1, var_415_7_c_info, 1, LOCAL(1),
  // tuple(fky_filename modification_time_of(c_info) c_source undefined)
  var_tuple, 4, var_409_3_fky_filename, LOCAL(1), LOCAL(3), var_undefined, 1, LOCAL(2),
  // push &modules
  var_push, 2, var_407_1_modules, LOCAL(2), 1, var_407_1_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(428, 11),
  POS(430, 32),
  POS(430, 13),
  POS(429, 11),
  POS(431, 11)
};

static TAB_NUM t_lambda_65[] = {
  0, // locals
  0, // parameters
  // map &modules maybe_compile # parallel compile
  var_map, 2, var_407_1_modules, func_maybe_compile, 1, var_407_1_modules,
  // for_each modules # sequential save
  var_for_each, 3, var_407_1_modules, lambda_66, lambda_67, IO_TAIL_CALL,
  POS(433, 7),
  POS(434, 7)
};

static TAB_NUM t_lambda_66[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 435_3_module
  // module $fky_filename $c_timestamp $c_source
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(4), var_436_35_c_source,
  // $basename truncate_from(fky_filename '.' -1)
  var_truncate_from, 3, LOCAL(3), chr_46, minus_num_1, 1, var_437_1_basename,
  // is_undefined:
  var_is_undefined, 1, LOCAL(4), 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_c_timestamp_is_undefined, var_next, IO_TAIL_CALL,
  POS(436, 11),
  POS(437, 11),
  POS(439, 25),
  POS(438, 11)
};

static TAB_NUM t_lambda_c_timestamp_is_undefined[] = {
  2, // locals
  0, // parameters
  // "@(basename).c" c_source.to_utf8
  var_std__string, 2, var_437_1_basename, str_c, 1, LOCAL(1),
  // to_utf8
  var_to_utf8, 1, var_436_35_c_source, 1, LOCAL(2),
  // save! "@(basename).c" c_source.to_utf8
  var_save, 2, LOCAL(1), LOCAL(2), IO_CALL(0),
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(440, 21),
  POS(440, 46),
  POS(440, 15),
  POS(441, 15)
};

static TAB_NUM t_lambda_67[] = {
  0, // locals
  0, // parameters
  //  modules
  LET, 1, var_407_1_modules, TAIL_CALL,
  POS(443, 11)
};

static TAB_NUM t_func_maybe_compile[] = {
  4, // locals
  1, // parameters
  LOCAL(2), // 445_17_module
  // module $filename $c_timestamp $c_source $fky_lines
  LOCAL(2), 0, 4, var_446_8_filename, LOCAL(3), LOCAL(4), var_446_41_fky_lines,
  // is_undefined &c_source:
  var_is_undefined, 1, LOCAL(4), 1, LOCAL(1),
  // update_if c_source.is_undefined &c_source:
  var_update_if, 3, LOCAL(1), LOCAL(4), lambda_68, 1, LOCAL(4),
  // tuple_or_error(filename c_timestamp c_source)
  var_tuple_or_error, 3, var_446_8_filename, LOCAL(3), LOCAL(4), 1, LOCAL(1),
  // -> tuple_or_error(filename c_timestamp c_source)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(446, 3),
  POS(447, 22),
  POS(447, 3),
  POS(449, 6),
  POS(449, 3)
};

static TAB_NUM t_lambda_68[] = {
  0, // locals
  0, // parameters
  // compile_module filename fky_lines
  var_compile_module, 2, var_446_8_filename, var_446_41_fky_lines, TAIL_CALL,
  POS(448, 5)
};

static TAB_NUM t_func_c_compile[] = {
  1, // locals
  1, // parameters
  LOCAL(1), // 451_13_modules
  // $compiled_modules empty_list
  LET, 1, var_empty_list, 1, var_452_1_compiled_modules,
  // for_each modules
  var_for_each, 3, LOCAL(1), lambda_69, lambda_75, IO_TAIL_CALL,
  POS(452, 3),
  POS(453, 3)
};

static TAB_NUM t_lambda_69[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 454_3_module
  // module $fky_filename $c_timestamp
  LOCAL(2), 0, 2, var_455_8_fky_filename, var_455_22_c_timestamp,
  // $basename truncate_from(fky_filename '.' -1)
  var_truncate_from, 3, var_455_8_fky_filename, chr_46, minus_num_1, 1, var_456_1_basename,
  // $obj_filename "@(basename).o"
  var_std__string, 2, var_456_1_basename, str_o, 1, var_457_1_obj_filename,
  // stat! $obj_info obj_filename
  var_stat, 1, var_457_1_obj_filename, IO_CALL(1), var_458_7_obj_info,
  // 
  var_std__or, 2, var_do_rebuild, lambda_70, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_73, lambda_74, IO_TAIL_CALL,
  POS(455, 7),
  POS(456, 7),
  POS(457, 7),
  POS(458, 7),
  POS(460, 11),
  POS(459, 7)
};

static TAB_NUM t_lambda_70[] = {
  2, // locals
  0, // parameters
  // is_undefined
  var_is_undefined, 1, var_455_22_c_timestamp, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_71, 1, LOCAL(2),
  // c_timestamp.is_undefined
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(462, 23),
  POS(460, 11),
  POS(462, 11)
};

static TAB_NUM t_lambda_71[] = {
  2, // locals
  0, // parameters
  // is_an_error
  var_is_an_error, 1, var_458_7_obj_info, 1, LOCAL(1),
  // 
  var_std__or, 2, LOCAL(1), lambda_72, 1, LOCAL(2),
  // obj_info.is_an_error
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(463, 20),
  POS(460, 11),
  POS(463, 11)
};

static TAB_NUM t_lambda_72[] = {
  2, // locals
  0, // parameters
  // modification_time_of(obj_info)
  var_modification_time_of, 1, var_458_7_obj_info, 1, LOCAL(1),
  // modification_time_of(obj_info)
  var_std__less, 2, LOCAL(1), var_455_22_c_timestamp, 1, LOCAL(2),
  // c_timestamp > modification_time_of(obj_info)
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(464, 25),
  POS(464, 25),
  POS(464, 11)
};

static TAB_NUM t_lambda_73[] = {
  1, // locals
  0, // parameters
  // "@(basename).c" obj_filename
  var_std__string, 2, var_456_1_basename, str_c, 1, LOCAL(1),
  // compile_c_file! "@(basename).c" obj_filename
  func_compile_c_file, 2, LOCAL(1), var_457_1_obj_filename, IO_CALL(0),
  // tuple(fky_filename undefined)
  var_tuple, 2, var_455_8_fky_filename, var_undefined, 1, LOCAL(1),
  // push &compiled_modules tuple(fky_filename undefined)
  var_push, 2, var_452_1_compiled_modules, LOCAL(1), 1, var_452_1_compiled_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(466, 27),
  POS(466, 11),
  POS(467, 34),
  POS(467, 11),
  POS(468, 11)
};

static TAB_NUM t_lambda_74[] = {
  2, // locals
  0, // parameters
  // modification_time_of(obj_info))
  var_modification_time_of, 1, var_458_7_obj_info, 1, LOCAL(1),
  // tuple(fky_filename modification_time_of(obj_info))
  var_tuple, 2, var_455_8_fky_filename, LOCAL(1), 1, LOCAL(2),
  // push &compiled_modules
  var_push, 2, var_452_1_compiled_modules, LOCAL(2), 1, var_452_1_compiled_modules,
  // next!
  var_next, 0, IO_TAIL_CALL,
  POS(471, 32),
  POS(471, 13),
  POS(470, 11),
  POS(472, 11)
};

static TAB_NUM t_lambda_75[] = {
  0, // locals
  0, // parameters
  //  compiled_modules
  LET, 1, var_452_1_compiled_modules, TAIL_CALL,
  POS(473, 7)
};

static TAB_NUM t_func_compile_c_file[] = {
  3, // locals
  2, // parameters
  var_500_18_c_filename,
  LOCAL(2), // 500_29_o_filename
  // on be_verbose: eprint! "
  var_on, 2, var_be_verbose, lambda_76, IO_CALL(0),
  // $arguments cc_options
  LET, 1, list_65_0, 1, LOCAL(3),
  // "-I@(include_path)"
  var_std__string, 2, str_I, var_include_path, 1, LOCAL(1),
  // push &arguments "-I@(include_path)"
  var_push, 2, LOCAL(3), LOCAL(1), 1, LOCAL(3),
  // push &arguments "-DNDEBUG"
  var_push, 2, LOCAL(3), str_DNDEBUG, 1, LOCAL(3),
  // push &arguments "-c"
  var_push, 2, LOCAL(3), str_c_2, 1, LOCAL(3),
  // push &arguments c_filename
  var_push, 2, LOCAL(3), var_500_18_c_filename, 1, LOCAL(3),
  // push &arguments "-o"
  var_push, 2, LOCAL(3), str_o_2, 1, LOCAL(3),
  // push &arguments o_filename
  var_push, 2, LOCAL(3), LOCAL(2), 1, LOCAL(3),
  // cc! arguments
  func_cc, 1, LOCAL(3), IO_TAIL_CALL,
  POS(501, 3),
  POS(503, 3),
  POS(504, 19),
  POS(504, 3),
  POS(505, 3),
  POS(506, 3),
  POS(507, 3),
  POS(508, 3),
  POS(509, 3),
  POS(510, 3)
};

static TAB_NUM t_lambda_76[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_compiling, var_500_18_c_filename, string_5, 1, LOCAL(1),
  // eprint! "
  var_eprint, 1, LOCAL(1), IO_TAIL_CALL,
  POS(501, 26),
  POS(501, 18)
};

static TAB_NUM t_func_cc[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 512_6_arguments
  // call! CC arguments $status $_out $err
  var_call, 2, var_CC, LOCAL(3), IO_CALL(3), LOCAL(4), LOCAL(1), var_513_34_err,
  // status != 0:
  var_std__equal, 2, LOCAL(4), num_0, 1, LOCAL(1),
  // status != 0:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // on status != 0:
  var_on, 2, LOCAL(2), lambda_77, IO_TAIL_CALL,
  POS(513, 3),
  POS(514, 6),
  POS(514, 6),
  POS(514, 3)
};

static TAB_NUM t_lambda_77[] = {
  1, // locals
  0, // parameters
  // from_utf8
  var_from_utf8, 1, var_513_34_err, 1, LOCAL(1),
  // eprint! err.from_utf8
  var_eprint, 1, LOCAL(1), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(515, 17),
  POS(515, 5),
  POS(516, 5)
};

static TAB_NUM t_func_ar[] = {
  4, // locals
  1, // parameters
  LOCAL(3), // 518_6_arguments
  // call! "ar" arguments $status $_out $err
  var_call, 2, str_ar, LOCAL(3), IO_CALL(3), LOCAL(4), LOCAL(1), var_519_36_err,
  // status != 0:
  var_std__equal, 2, LOCAL(4), num_0, 1, LOCAL(1),
  // status != 0:
  var_std__not, 1, LOCAL(1), 1, LOCAL(2),
  // on status != 0:
  var_on, 2, LOCAL(2), lambda_78, IO_TAIL_CALL,
  POS(519, 3),
  POS(520, 6),
  POS(520, 6),
  POS(520, 3)
};

static TAB_NUM t_lambda_78[] = {
  1, // locals
  0, // parameters
  // from_utf8
  var_from_utf8, 1, var_519_36_err, 1, LOCAL(1),
  // eprint! err.from_utf8
  var_eprint, 1, LOCAL(1), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(521, 17),
  POS(521, 5),
  POS(522, 5)
};

static TAB_NUM t_func_extract_required[] = {
  3, // locals
  1, // parameters
  LOCAL(2), // 524_20_module
  // module $filename $_c_timestamp $c_source
  LOCAL(2), 0, 3, LOCAL(3), LOCAL(1), var_525_32_c_source,
  // $path before(filename '/' -1)
  var_before, 3, LOCAL(3), chr_47, minus_num_1, 1, var_526_1_path,
  // $required empty_insert_order_set
  LET, 1, var_empty_insert_order_set, 1, var_527_1_required,
  // while
  var_while, 3, lambda_79, lambda_80, lambda_83, TAIL_CALL,
  POS(525, 3),
  POS(526, 3),
  POS(527, 3),
  POS(528, 3)
};

static TAB_NUM t_lambda_79[] = {
  1, // locals
  0, // parameters
  // c_source .has_prefix. "/// require"
  var_has_prefix, 2, var_525_32_c_source, str__require, 1, LOCAL(1),
  //  c_source .has_prefix. "/// require"
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(529, 8),
  POS(529, 7)
};

static TAB_NUM t_lambda_80[] = {
  2, // locals
  0, // parameters
  // range(c_source 12 -1) .before. '@nl;').trim
  var_range, 3, var_525_32_c_source, num_12, minus_num_1, 1, LOCAL(1),
  // range(c_source 12 -1) .before. '@nl;').trim
  var_before, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // $module_name (range(c_source 12 -1) .before. '@nl;').trim
  var_trim, 1, LOCAL(2), 1, var_531_1_module_name,
  // is_not_empty && module_name(1) == '.' &module_name
  var_is_not_empty, 1, var_526_1_path, 1, LOCAL(1),
  // is_not_empty && module_name(1) == '.' &module_name
  var_std__and, 2, LOCAL(1), lambda_81, 1, LOCAL(2),
  // update_if path.is_not_empty && module_name(1) == '.' &module_name
  var_update_if, 3, LOCAL(2), var_531_1_module_name, lambda_82, 1, var_531_1_module_name,
  // required(module_name) true
  var_527_1_required, 2, var_531_1_module_name, var_true, 1, var_527_1_required,
  // truncate_until &c_source '@nl;'
  var_truncate_until, 2, var_525_32_c_source, chr_10, 1, var_525_32_c_source,
  // next
  var_next, 0, TAIL_CALL,
  POS(531, 21),
  POS(531, 21),
  POS(531, 7),
  POS(532, 22),
  POS(532, 22),
  POS(532, 7),
  POS(534, 8),
  POS(535, 7),
  POS(536, 7)
};

static TAB_NUM t_lambda_81[] = {
  2, // locals
  0, // parameters
  // module_name(1) == '.' &module_name
  var_531_1_module_name, 1, num_1, 1, LOCAL(1),
  // module_name(1) == '.' &module_name
  var_std__equal, 2, LOCAL(1), chr_46, 1, LOCAL(2),
  // module_name(1) == '.' &module_name
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(532, 38),
  POS(532, 38),
  POS(532, 38)
};

static TAB_NUM t_lambda_82[] = {
  2, // locals
  0, // parameters
  // range(module_name 2 -1))
  var_range, 3, var_531_1_module_name, num_2, minus_num_1, 1, LOCAL(1),
  // append(path range(module_name 2 -1))
  var_append, 2, var_526_1_path, LOCAL(1), 1, LOCAL(2),
  //  append(path range(module_name 2 -1))
  LET, 1, LOCAL(2), TAIL_CALL,
  POS(533, 24),
  POS(533, 12),
  POS(533, 11)
};

static TAB_NUM t_lambda_83[] = {
  0, // locals
  0, // parameters
  //  required
  LET, 1, var_527_1_required, TAIL_CALL,
  POS(537, 7)
};

static TAB_NUM t_func_load_lines[] = {
  0, // locals
  1, // parameters
  var_539_14_filename,
  // load! $source filename
  var_load, 1, var_539_14_filename, IO_CALL(1), var_540_7_source,
  // cond
  var_cond, 2, lambda_84, lambda_86, IO_CALL(0),
  // from_utf8 &source
  var_from_utf8, 1, var_540_7_source, 1, var_540_7_source,
  // split_source_into_lines source
  var_split_source_into_lines, 1, var_540_7_source, TAIL_CALL,
  POS(540, 3),
  POS(541, 3),
  POS(548, 3),
  POS(549, 3)
};

static TAB_NUM t_lambda_84[] = {
  1, // locals
  0, // parameters
  // is_empty:
  var_is_empty, 1, var_540_7_source, 1, LOCAL(1),
  //  source.is_empty:
  LET, 2, LOCAL(1), lambda_85, IO_TAIL_CALL,
  POS(542, 15),
  POS(542, 7)
};

static TAB_NUM t_lambda_85[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_Empty_source_fil, var_539_14_filename, string_7, 1, LOCAL(1),
  // Error! "
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(543, 14),
  POS(543, 7)
};

static TAB_NUM t_lambda_86[] = {
  3, // locals
  0, // parameters
  // source(-1) != '@nl;':
  var_540_7_source, 1, minus_num_1, 1, LOCAL(1),
  // source(-1) != '@nl;':
  var_std__equal, 2, LOCAL(1), chr_10, 1, LOCAL(2),
  // source(-1) != '@nl;':
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  //  source(-1) != '@nl;':
  LET, 2, LOCAL(3), lambda_87, IO_TAIL_CALL,
  POS(545, 8),
  POS(545, 8),
  POS(545, 8),
  POS(545, 7)
};

static TAB_NUM t_lambda_87[] = {
  1, // locals
  0, // parameters
  // "
  var_std__string, 3, str_Missing_trailing, var_539_14_filename, string_7, 1, LOCAL(1),
  // Error! "
  var_Error, 1, LOCAL(1), IO_TAIL_CALL,
  POS(546, 14),
  POS(546, 7)
};

static TAB_NUM t_func_funky__syntax_error[] = {
  4, // locals
  -2, // parameters
  MANDATORY_PARAMETER, LOCAL(3), // 555_0_message
  var_undefined, var_556_0_node,
  // is_defined:
  var_is_defined, 1, var_556_0_node, 1, LOCAL(1),
  // if $column
  var_if, 3, LOCAL(1), lambda_node_is_defined, lambda_92, 1, var_558_4_column,
  // is_defined
  var_is_defined, 1, var_556_0_node, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_93, lambda_94, 1, LOCAL(2),
  // $details
  var_tuple, 3, var_current_filename, LOCAL(2), var_558_4_column, 1, LOCAL(4),
  // error funky::SYNTAX_ERROR message details
  var_error, 3, var_funky__SYNTAX_ERROR, LOCAL(3), LOCAL(4), TAIL_CALL,
  POS(559, 10),
  POS(558, 3),
  POS(575, 14),
  POS(574, 7),
  POS(571, 3),
  POS(579, 3)
};

static TAB_NUM t_lambda_node_is_defined[] = {
  4, // locals
  0, // parameters
  // source_group_of(node))
  var_source_group_of, 1, var_556_0_node, 1, LOCAL(1),
  // $line line_text_of(source_group_of(node))
  var_line_text_of, 1, LOCAL(1), 1, var_560_1_line,
  // length_of(line)+1-length_of(source_position_of(node))
  var_length_of, 1, var_560_1_line, 1, LOCAL(1),
  // length_of(line)+1-length_of(source_position_of(node))
  var_std__plus, 2, LOCAL(1), num_1, 1, LOCAL(2),
  // source_position_of(node))
  var_source_position_of, 1, var_556_0_node, 1, LOCAL(3),
  // length_of(source_position_of(node))
  var_length_of, 1, LOCAL(3), 1, LOCAL(4),
  // !column length_of(line)+1-length_of(source_position_of(node))
  var_std__minus, 2, LOCAL(2), LOCAL(4), 1, var_558_4_column,
  // column == 1
  var_std__equal, 2, var_558_4_column, num_1, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_88, lambda_89, TAIL_CALL,
  POS(560, 26),
  POS(560, 7),
  POS(561, 15),
  POS(561, 15),
  POS(561, 43),
  POS(561, 33),
  POS(561, 7),
  POS(563, 9),
  POS(562, 7)
};

static TAB_NUM t_lambda_88[] = {
  0, // locals
  0, // parameters
  //  column
  LET, 1, var_558_4_column, TAIL_CALL,
  POS(564, 11)
};

static TAB_NUM t_lambda_89[] = {
  2, // locals
  0, // parameters
  // column-1)
  var_std__minus, 2, var_558_4_column, num_1, 1, LOCAL(1),
  // line(column-1)
  var_560_1_line, 1, LOCAL(1), 1, LOCAL(2),
  // case
  var_case, 4, LOCAL(2), sequence_568_1, lambda_90, lambda_91, TAIL_CALL,
  POS(567, 18),
  POS(567, 13),
  POS(566, 11)
};

static TAB_NUM t_lambda_90[] = {
  1, // locals
  0, // parameters
  // column-1
  var_std__minus, 2, var_558_4_column, num_1, 1, LOCAL(1),
  //  column-1
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(568, 50),
  POS(568, 49)
};

static TAB_NUM t_lambda_91[] = {
  0, // locals
  0, // parameters
  //  column
  LET, 1, var_558_4_column, TAIL_CALL,
  POS(569, 15)
};

static TAB_NUM t_lambda_92[] = {
  0, // locals
  0, // parameters
  //  1
  LET, 1, num_1, TAIL_CALL,
  POS(570, 7)
};

static TAB_NUM t_lambda_93[] = {
  1, // locals
  0, // parameters
  // source_group_of(node)
  var_source_group_of, 1, var_556_0_node, 1, LOCAL(1),
  //  source_group_of(node)
  LET, 1, LOCAL(1), TAIL_CALL,
  POS(576, 12),
  POS(576, 11)
};

static TAB_NUM t_lambda_94[] = {
  0, // locals
  0, // parameters
  //  undefined
  LET, 1, var_undefined, TAIL_CALL,
  POS(577, 11)
};

static TAB_NUM t_func_handle_error[] = {
  1, // locals
  1, // parameters
  var_581_16_obj,
  // is_an_error:
  var_is_an_error, 1, var_581_16_obj, 1, LOCAL(1),
  // on obj.is_an_error:
  var_on, 2, LOCAL(1), lambda_95, IO_TAIL_CALL,
  POS(582, 10),
  POS(582, 3)
};

static TAB_NUM t_lambda_95[] = {
  2, // locals
  0, // parameters
  // error_category_of(obj) == SYNTAX_ERROR:
  var_error_category_of, 1, var_581_16_obj, 1, LOCAL(1),
  // error_category_of(obj) == SYNTAX_ERROR:
  var_std__equal, 2, LOCAL(1), var_SYNTAX_ERROR, 1, LOCAL(2),
  // if
  var_if, 3, LOCAL(2), lambda_96, lambda_97, IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(584, 7),
  POS(584, 7),
  POS(583, 5),
  POS(588, 5)
};

static TAB_NUM t_lambda_96[] = {
  0, // locals
  0, // parameters
  // display_error! obj
  func_display_error, 1, var_581_16_obj, IO_TAIL_CALL,
  POS(585, 9)
};

static TAB_NUM t_lambda_97[] = {
  0, // locals
  0, // parameters
  // debug::dump_object 50 obj
  var_debug__dump_object, 2, num_50, var_581_16_obj, TAIL_CALL,
  POS(587, 9)
};

static TAB_NUM t_func_display_error[] = {
  2, // locals
  1, // parameters
  LOCAL(2), // 590_17_error
  // $message error_message_text_of(error)
  var_error_message_text_of, 1, LOCAL(2), 1, var_591_1_message,
  // error_details_of(error) $filename $line $position
  var_error_details_of, 1, LOCAL(2), 1, LOCAL(1),
  // error_details_of(error) $filename $line $position
  LOCAL(1), 0, 3, var_592_25_filename, var_592_35_line, var_592_41_position,
  // is_defined:
  var_is_defined, 1, var_592_35_line, 1, LOCAL(1),
  // if
  var_if, 3, LOCAL(1), lambda_line_is_defined, lambda_98, IO_TAIL_CALL,
  POS(591, 3),
  POS(592, 3),
  POS(592, 3),
  POS(594, 10),
  POS(593, 3)
};

static TAB_NUM t_lambda_line_is_defined[] = {
  9, // locals
  0, // parameters
  // line $indent $text
  var_592_35_line, 0, 2, LOCAL(7), LOCAL(8),
  // $line_no line_no_of(line)
  var_line_no_of, 1, var_592_35_line, 1, LOCAL(9),
  // to_sentence_case) IN LINE @(line_no) OF FILE @(filename)
  var_to_sentence_case, 1, var_591_1_message, 1, LOCAL(1),
  // tabs_and_spaces(indent))@(text)@
  var_tabs_and_spaces, 1, LOCAL(7), 1, LOCAL(2),
  // indent+position-1))^
  var_std__plus, 2, LOCAL(7), var_592_41_position, 1, LOCAL(3),
  // indent+position-1))^
  var_std__minus, 2, LOCAL(3), num_1, 1, LOCAL(4),
  // tabs_and_spaces(indent+position-1))^
  var_tabs_and_spaces, 1, LOCAL(4), 1, LOCAL(5),
  // "
  var_std__string, 11, str_ERROR, LOCAL(1), str__IN_LINE, LOCAL(9), str__OF_FILE, var_592_25_filename, string_8, LOCAL(2), LOCAL(8), LOCAL(5), string_9, 1, LOCAL(6),
  // eprint! "
  var_eprint, 1, LOCAL(6), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(595, 7),
  POS(596, 7),
  POS(598, 26),
  POS(600, 11),
  POS(601, 27),
  POS(601, 27),
  POS(601, 11),
  POS(597, 15),
  POS(597, 7),
  POS(602, 7)
};

static TAB_NUM t_lambda_98[] = {
  2, // locals
  0, // parameters
  // to_sentence_case) IN FILE @(filename)
  var_to_sentence_case, 1, var_591_1_message, 1, LOCAL(1),
  // "
  var_std__string, 5, str_ERROR, LOCAL(1), str__IN_FILE, var_592_25_filename, string_10, 1, LOCAL(2),
  // eprint! "
  var_eprint, 1, LOCAL(2), IO_CALL(0),
  // exit! EXIT_FAILURE
  var_exit, 1, var_EXIT_FAILURE, IO_TAIL_CALL,
  POS(605, 26),
  POS(604, 15),
  POS(604, 7),
  POS(606, 7)
};

static TAB_NUM t_module_entry[] = {
  3, // locals
  0, // parameters
  // OS == "cygwin"
  var_std__equal, 2, var_OS, str_cygwin, 1, LOCAL(1),
  // $DLL_EXTENSION
  var_if, 3, LOCAL(1), lambda_1, lambda_2, 1, var_DLL_EXTENSION,
  // OS == "cygwin"
  var_std__equal, 2, var_OS, str_cygwin, 1, LOCAL(1),
  // $EXE_EXTENSION
  var_if, 3, LOCAL(1), lambda_3, lambda_4, 1, var_EXE_EXTENSION,
  // $builtin_functions
  var_hash_set, 6, str_assign, str_key_value_pair, str_list, str_tuple, str_sequence, str_value_range, 1, var_builtin_functions,
  // $funky::character_from_name get_character_names()
  var_get_character_names, 0, 1, var_funky__character_from_name,
  // environment("FUNKY_INCLUDE_PATH")
  var_environment, 1, str_FUNKY_INCLUDE_PA, 1, LOCAL(1),
  // "@(PREFIX)/share/funky-@(MAJOR)"
  var_std__string, 3, var_PREFIX, str_sharefunky, num_0, 1, LOCAL(2),
  // $include_path
  var_default_value, 2, LOCAL(1), LOCAL(2), 1, var_include_path,
  // truncate_until(program_name '/' -1) .truncate_from. '-') == "fkyrun"
  var_truncate_until, 3, var_program_name, chr_47, minus_num_1, 1, LOCAL(1),
  // truncate_until(program_name '/' -1) .truncate_from. '-') == "fkyrun"
  var_truncate_from, 2, LOCAL(1), chr_45, 1, LOCAL(2),
  // $do_run (truncate_until(program_name '/' -1) .truncate_from. '-') == "fkyrun"
  var_std__equal, 2, LOCAL(2), str_fkyrun, 1, var_do_run,
  // if
  var_if, 3, var_do_run, lambda_do_run, lambda_11, IO_CALL(6), var_input_filename, var_be_verbose, var_do_rebuild, var_do_print_c, var_funky__module_prefix, var_do_build_static,
  // environment("FUNKY_LIBRARY_PATH")
  var_environment, 1, str_FUNKY_LIBRARY_PA, 1, LOCAL(1),
  // "@(PREFIX)/lib"
  var_std__string, 2, var_PREFIX, str_lib, 1, LOCAL(2),
  // $library_path
  var_default_value, 2, LOCAL(1), LOCAL(2), 1, var_library_path,
  // input_filename(1) != '/'
  var_input_filename, 1, num_1, 1, LOCAL(1),
  // input_filename(1) != '/'
  var_std__equal, 2, LOCAL(1), chr_47, 1, LOCAL(2),
  // input_filename(1) != '/'
  var_std__not, 1, LOCAL(2), 1, LOCAL(3),
  // update_if input_filename(1) != '/'
  var_update_if, 3, LOCAL(3), var_input_filename, lambda_input_filename, 1, var_input_filename,
  // input_filename .has_suffix. ".fky"
  var_has_suffix, 2, var_input_filename, str_fky, 1, LOCAL(1),
  // if!
  var_if, 3, LOCAL(1), lambda_12, func_build_library, IO_TAIL_CALL,
  POS(55, 5),
  POS(53, 1),
  POS(61, 5),
  POS(59, 1),
  POS(79, 1),
  POS(99, 1),
  POS(103, 5),
  POS(104, 5),
  POS(101, 1),
  POS(106, 10),
  POS(106, 10),
  POS(106, 1),
  POS(111, 1),
  POS(161, 5),
  POS(162, 5),
  POS(159, 1),
  POS(164, 11),
  POS(164, 11),
  POS(164, 11),
  POS(164, 1),
  POS(167, 3),
  POS(166, 1)
};

static int list_65_0_arguments[] = {
  -str_Wall, -str_Wnounusedfunctio, -str_Wnounusedvariabl, -str_Wnoparentheses, -str_Wnoswitch, -str_Wnotrigraphs, -str_O, -str_fomitframepointe, -str_fnostackprotecto, -str_falignfunctions, -str_falignloops
};

static int list_143_0_arguments[] = {
  -str_verbose, -str_output_detailed
};

static int list_146_0_arguments[] = {
  -str_rebuild, -str_rebuild_all_sour
};

static int list_149_0_arguments[] = {
  -str_printc, -str_print_C_source_c
};

static int list_155_0_arguments[] = {
  -str_static, -str_create_a_statica
};

static int list_237_0_arguments[] = {
  -str_runtimebuiltins, -str_runtimedebugger, -str_runtimeinterpret, -str_runtimelinker, -str_runtimememory, -str_runtimeprofiler
};

static int sequence_568_1_arguments[] = {
  -chr_36, -chr_33, -chr_38, -chr_34, -chr_39
};

static FUNKY_CONSTANT constants_table[] = {
  {FLT_POSITIVE_INT64, 0, {.value = 0}},
  {FLT_STRING_8, 6, {.str_8 = "cygwin"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_1}},
  {FLT_STRING_8, 1, {.str_8 = "-"}},
  {FLT_STRING_8, 4, {.str_8 = ".dll"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2}},
  {FLT_STRING_8, 4, {.str_8 = ".so."}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_3}},
  {FLT_STRING_8, 4, {.str_8 = ".exe"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_4}},
  {FLT_STRING_8, 0, {.str_8 = ""}},
  {FLT_STRING_8, 5, {.str_8 = "-Wall"}},
  {FLT_STRING_8, 20, {.str_8 = "-Wno-unused-function"}},
  {FLT_STRING_8, 20, {.str_8 = "-Wno-unused-variable"}},
  {FLT_STRING_8, 16, {.str_8 = "-Wno-parentheses"}},
  {FLT_STRING_8, 11, {.str_8 = "-Wno-switch"}},
  {FLT_STRING_8, 14, {.str_8 = "-Wno-trigraphs"}},
  {FLT_STRING_8, 3, {.str_8 = "-O2"}},
  {FLT_STRING_8, 20, {.str_8 = "-fomit-frame-pointer"}},
  {FLT_STRING_8, 20, {.str_8 = "-fno-stack-protector"}},
  {FLT_STRING_8, 20, {.str_8 = "-falign-functions=16"}},
  {FLT_STRING_8, 16, {.str_8 = "-falign-loops=16"}},
  {FLT_LIST, 11, {.arguments = list_65_0_arguments}},
  {FLT_STRING_8, 6, {.str_8 = "assign"}},
  {FLT_STRING_8, 14, {.str_8 = "key_value_pair"}},
  {FLT_STRING_8, 4, {.str_8 = "list"}},
  {FLT_STRING_8, 5, {.str_8 = "tuple"}},
  {FLT_STRING_8, 8, {.str_8 = "sequence"}},
  {FLT_STRING_8, 11, {.str_8 = "value_range"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__is_a_builtin_function_name}},
  {FLT_CHARACTER, 0, {.value = 58}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_5}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_6}},
  {FLT_STRING_8, 3, {.str_8 = "std"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_7}},
  {FLT_STRING_8, 4, {.str_8 = "std-"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_8}},
  {FLT_STRING_8, 2, {.str_8 = "::"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_9}},
  {FLT_STRING_8, 18, {.str_8 = "FUNKY_INCLUDE_PATH"}},
  {FLT_STRING_8, 13, {.str_8 = "/share/funky-"}},
  {FLT_CHARACTER, 0, {.value = 47}},
  {FLT_NEGATIVE_INT64, 0, {.value = 1}},
  {FLT_CHARACTER, 0, {.value = 45}},
  {FLT_STRING_8, 6, {.str_8 = "fkyrun"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_run}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_10}},
  {FLT_STRING_8, 31, {.str_8 = "Missing command line arguments!"}},
  {FLT_POSITIVE_INT64, 0, {.value = 1}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_11}},
  {FLT_STRING_8, 742, {.str_8 = "Copyright (C) 2024 by\012Dipl.-Ing. Michael Niederle\012\012This program is free software; you can redistribute it and/or modify\012it under the terms of the GNU General Public License, version 2, or\012(at your option) version 3.\012\012This program is distributed in the hope that it will be useful,\012but WITHOUT ANY WARRANTY; without even the implied warranty of\012MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the\012GNU General Public License for more details.\012\012For details of the GNU General Public License see the accompanying\012files GPLv2.txt and GLPv3.txt or\012http://www.gnu.org/licenses/gpl-2.0.html\012http://www.gnu.org/licenses/gpl-3.0.html\012or write to the\012Free Software Foundation, Inc.,\01251 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.\012"}},
  {FLT_STRING_8, 8, {.str_8 = "filename"}},
  {FLT_STRING_8, 45, {.str_8 = "a source code file with the extension \042.fky\042\012"}},
  {FLT_STRING_8, 7, {.str_8 = "verbose"}},
  {FLT_STRING_8, 52, {.str_8 = "output detailed information about the build process\012"}},
  {FLT_LIST, 2, {.arguments = list_143_0_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "rebuild"}},
  {FLT_STRING_8, 25, {.str_8 = "rebuild all source files\012"}},
  {FLT_LIST, 2, {.arguments = list_146_0_arguments}},
  {FLT_STRING_8, 7, {.str_8 = "print-c"}},
  {FLT_STRING_8, 40, {.str_8 = "print C source code for a single module\012"}},
  {FLT_LIST, 2, {.arguments = list_149_0_arguments}},
  {FLT_STRING_8, 13, {.str_8 = "module-prefix"}},
  {FLT_STRING_8, 54, {.str_8 = "needed to compile a single file within a subdirectory\012"}},
  {FLT_STRING_8, 6, {.str_8 = "static"}},
  {FLT_STRING_8, 38, {.str_8 = "create a statically linked executable\012"}},
  {FLT_LIST, 2, {.arguments = list_155_0_arguments}},
  {FLT_STRING_8, 18, {.str_8 = "FUNKY_LIBRARY_PATH"}},
  {FLT_STRING_8, 4, {.str_8 = "/lib"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_input_filename}},
  {FLT_STRING_8, 2, {.str_8 = "./"}},
  {FLT_STRING_8, 4, {.str_8 = ".fky"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_12}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_print_c}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_executable}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_13}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_14}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_15}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_16}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_17}},
  {FLT_STRING_8, 21, {.str_8 = "creating executable \042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_modules}},
  {FLT_STRING_8, 2, {.str_8 = ".o"}},
  {FLT_STRING_8, 2, {.str_8 = "-L"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_do_build_static}},
  {FLT_STRING_8, 7, {.str_8 = "-static"}},
  {FLT_STRING_8, 14, {.str_8 = "-static-libgcc"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_18}},
  {FLT_STRING_8, 3, {.str_8 = "-lm"}},
  {FLT_STRING_8, 2, {.str_8 = "-o"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_19}},
  {FLT_STRING_8, 9, {.str_8 = "-l:libfky"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_run}},
  {FLT_POSITIVE_INT64, 0, {.value = 2}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_20}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_21}},
  {FLT_STRING_8, 5, {.str_8 = "done\012"}},
  {FLT_STRING_8, 16, {.str_8 = "runtime/builtins"}},
  {FLT_STRING_8, 16, {.str_8 = "runtime/debugger"}},
  {FLT_STRING_8, 19, {.str_8 = "runtime/interpreter"}},
  {FLT_STRING_8, 14, {.str_8 = "runtime/linker"}},
  {FLT_STRING_8, 14, {.str_8 = "runtime/memory"}},
  {FLT_STRING_8, 16, {.str_8 = "runtime/profiler"}},
  {FLT_LIST, 6, {.arguments = list_237_0_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_build_library}},
  {FLT_STRING_8, 8, {.str_8 = "/VERSION"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_22}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_23}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_modules}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_2_do_build_static}},
  {FLT_STRING_8, 7, {.str_8 = "libfky-"}},
  {FLT_STRING_8, 2, {.str_8 = ".a"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_24}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_25}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_26}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_27}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_28}},
  {FLT_STRING_8, 25, {.str_8 = "creating static library \042"}},
  {FLT_STRING_8, 3, {.str_8 = "rcs"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_29}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_30}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_31}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_32}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_33}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_34}},
  {FLT_STRING_8, 26, {.str_8 = "creating dynamic library \042"}},
  {FLT_STRING_8, 7, {.str_8 = "-shared"}},
  {FLT_STRING_8, 19, {.str_8 = "-Wl,-soname,libfky-"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_35}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_find_newest_timestamp}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_36}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_timestamp_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_37}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_38}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_39}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_40}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_41}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_collect_entries}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_42}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_43}},
  {FLT_STRING_8, 1, {.str_8 = "/"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_DIRECTORY}},
  {FLT_CHARACTER, 0, {.value = 46}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_44}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_REGULAR_FILE}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_45}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_46}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_compile}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_loop}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_47}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_48}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_49}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_50}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_51}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_52}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_53}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_54}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_55}},
  {FLT_STRING_8, 10, {.str_8 = "-l:libfky-"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_56}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_57}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_or_create_c_sources}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_58}},
  {FLT_STRING_8, 2, {.str_8 = ".c"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_59}},
  {FLT_STRING_8, 12, {.str_8 = "Input file \042"}},
  {FLT_STRING_8, 17, {.str_8 = "\042 does not exist!"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_60}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_61}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_62}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_63}},
  {FLT_STRING_8, 11, {.str_8 = "compiling \042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_64}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_65}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_66}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_c_timestamp_is_undefined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_67}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_maybe_compile}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_68}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_c_compile}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_69}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_70}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_71}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_72}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_73}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_74}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_75}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_compile_c_file}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_76}},
  {FLT_STRING_8, 2, {.str_8 = "-I"}},
  {FLT_STRING_8, 8, {.str_8 = "-DNDEBUG"}},
  {FLT_STRING_8, 2, {.str_8 = "-c"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_cc}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_77}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_ar}},
  {FLT_STRING_8, 2, {.str_8 = "ar"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_78}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_extract_required}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_79}},
  {FLT_STRING_8, 11, {.str_8 = "/// require"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_80}},
  {FLT_POSITIVE_INT64, 0, {.value = 12}},
  {FLT_CHARACTER, 0, {.value = 10}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_81}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_82}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_83}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_load_lines}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_84}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_85}},
  {FLT_STRING_8, 19, {.str_8 = "Empty source file \042"}},
  {FLT_STRING_8, 2, {.str_8 = "\042!"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_86}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_87}},
  {FLT_STRING_8, 39, {.str_8 = "Missing trailing newline character in \042"}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_funky__syntax_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_node_is_defined}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_88}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_89}},
  {FLT_CHARACTER, 0, {.value = 36}},
  {FLT_CHARACTER, 0, {.value = 33}},
  {FLT_CHARACTER, 0, {.value = 38}},
  {FLT_CHARACTER, 0, {.value = 34}},
  {FLT_CHARACTER, 0, {.value = 39}},
  {FLT_SEQUENCE, 5, {.arguments = sequence_568_1_arguments}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_90}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_91}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_92}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_93}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_94}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_handle_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_95}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_96}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_97}},
  {FLT_POSITIVE_INT64, 0, {.value = 50}},
  {FLT_FUNCTION, 0, {.tfunc = t_func_display_error}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_line_is_defined}},
  {FLT_STRING_8, 7, {.str_8 = "ERROR: "}},
  {FLT_STRING_8, 9, {.str_8 = " IN LINE "}},
  {FLT_STRING_8, 9, {.str_8 = " OF FILE "}},
  {FLT_STRING_8, 2, {.str_8 = "\012\012"}},
  {FLT_STRING_8, 2, {.str_8 = "^\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_lambda_98}},
  {FLT_STRING_8, 9, {.str_8 = " IN FILE "}},
  {FLT_STRING_8, 1, {.str_8 = "\012"}},
  {FLT_FUNCTION, 0, {.tfunc = t_module_entry}}
};

static FUNKY_VARIABLE variables_table[] = {
  {
    FOT_UNKNOWN, 0, 0,
    "assign\000std", NULL,
    {.position = POS(45, 1)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "DLL_VERSION\000", NULL,
    {.const_idx = -num_0}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "OS\000", NULL,
    {.position = POS(55, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "equal\000std", NULL,
    {.position = POS(55, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "string\000std", NULL,
    {.position = POS(56, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "DLL_EXTENSION\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "if\000", NULL,
    {.position = POS(54, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "EXE_EXTENSION\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "list\000", NULL,
    {.position = POS(66, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "builtin_functions\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "hash_set\000", NULL,
    {.position = POS(80, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "is_a_builtin_function_name\000funky", NULL,
    {.const_idx = -func_funky__is_a_builtin_function_name}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "88_37_identifier\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "89_1_namespace\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "before\000", NULL,
    {.position = POS(89, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_empty\000", NULL,
    {.position = POS(91, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_prefix\000", NULL,
    {.position = POS(95, 31)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "or\000std", NULL,
    {.position = POS(95, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "behind\000", NULL,
    {.position = POS(96, 30)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "false\000", NULL,
    {.position = POS(97, 12)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "character_from_name\000funky", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "get_character_names\000", NULL,
    {.position = POS(99, 29)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "environment\000", NULL,
    {.position = POS(103, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "PREFIX\000", NULL,
    {.position = POS(104, 8)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "include_path\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "default_value\000", NULL,
    {.position = POS(102, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "program_name\000", NULL,
    {.position = POS(106, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_until\000", NULL,
    {.position = POS(106, 10)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "truncate_from\000", NULL,
    {.position = POS(106, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "do_run\000", NULL
  },
  {
    FOT_DERIVED, 0, 0,
    "base_directory\000funky", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "undefined\000", NULL,
    {.position = POS(108, 24)}
  },
  {
    FOT_DERIVED, 0, 0,
    "current_module_name\000funky", NULL,
    {"undefined\000"}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "input_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "be_verbose\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "do_rebuild\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "do_print_c\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "module_prefix\000funky", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "do_build_static\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "command_line_arguments\000", NULL,
    {.position = POS(115, 8)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "Error\000", NULL,
    {.position = POS(115, 41)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "on\000", NULL,
    {.position = POS(115, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "COPYRIGHT\000", NULL,
    {.position = POS(120, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "MANDATORY_PARAMETER\000", NULL,
    {.position = POS(141, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "VALUED_OPTION\000", NULL,
    {.position = POS(153, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "program_parameters\000", NULL,
    {.position = POS(118, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "library_path\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "not\000std", NULL,
    {.position = POS(164, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "append\000", NULL,
    {.position = POS(165, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "update_if\000", NULL,
    {.position = POS(164, 1)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "has_suffix\000", NULL,
    {.position = POS(167, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "base_directory\000", NULL,
    {.position = POS(176, 4)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "until\000", NULL,
    {.position = POS(176, 19)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "compile_module\000", NULL,
    {.position = POS(178, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "print\000", NULL,
    {.position = POS(180, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "185_10_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "185_19_libraries\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "187_1_newest_timestamp\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "without_suffix\000", NULL,
    {.position = POS(190, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "188_1_exe_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "192_7_exe_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "stat\000", NULL,
    {.position = POS(192, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_undefined\000", NULL,
    {.position = POS(196, 24)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_an_error\000", NULL,
    {.position = POS(197, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "modification_time_of\000", NULL,
    {.position = POS(198, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "less\000std", NULL,
    {.position = POS(198, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprint\000", NULL,
    {.position = POS(200, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "first\000", NULL,
    {.position = POS(206, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map\000", NULL,
    {.position = POS(203, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "208_1_arguments\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "push\000", NULL,
    {.position = POS(209, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "range\000", NULL,
    {.position = POS(231, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exec\000", NULL,
    {.position = POS(231, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "253_1_newest_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "254_1_version_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "256_4_version\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "load\000", NULL,
    {.position = POS(260, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "trim\000", NULL,
    {.position = POS(261, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "put\000", NULL,
    {.position = POS(262, 10)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "263_1_basename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "264_1_object_files\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "272_1_a_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "273_7_a_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "285_1_so_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "286_7_so_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_list\000", NULL,
    {.position = POS(296, 22)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "309_1_newest_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "312_19_timestamp\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "break\000", NULL,
    {.position = POS(316, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_defined\000", NULL,
    {.position = POS(321, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "and\000std", NULL,
    {.position = POS(321, 25)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "next\000", NULL,
    {.position = POS(324, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "for_each\000", NULL,
    {.position = POS(310, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "328_19_path\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "329_12_entries\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "directory\000", NULL,
    {.position = POS(329, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_error_message_string\000", NULL,
    {.position = POS(331, 23)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "eprintln\000", NULL,
    {.position = POS(331, 5)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "EXIT_FAILURE\000", NULL,
    {.position = POS(332, 11)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "exit\000", NULL,
    {.position = POS(332, 5)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "333_1_filenames\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "336_1_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "name_of\000std", NULL,
    {.position = POS(336, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "337_1_fullname\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "type_of\000", NULL,
    {.position = POS(338, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "DIRECTORY\000", NULL,
    {.position = POS(339, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "REGULAR_FILE\000", NULL,
    {.position = POS(347, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "case\000", NULL,
    {.position = POS(338, 7)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "357_1_fky_filenames\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "358_1_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "359_1_libraries\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "360_1_object_files_handled\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_hash_set\000", NULL,
    {.position = POS(360, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "361_1_libraries_handled\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "363_1_files_to_compile\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "365_3_fky_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "true\000", NULL,
    {.position = POS(370, 49)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "merge\000", NULL,
    {.position = POS(381, 45)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "empty_insert_order_set\000", NULL,
    {.position = POS(381, 51)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "map_reduce\000", NULL,
    {.position = POS(380, 13)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "385_3_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "391_1_library_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "loop\000", NULL,
    {.position = POS(362, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "407_1_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "409_3_fky_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "411_1_c_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "412_7_fky_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "415_7_c_info\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple\000", NULL,
    {.position = POS(425, 25)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "436_35_c_source\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "437_1_basename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_utf8\000", NULL,
    {.position = POS(440, 46)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "save\000", NULL,
    {.position = POS(440, 15)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "446_8_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "446_41_fky_lines\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tuple_or_error\000", NULL,
    {.position = POS(449, 6)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "452_1_compiled_modules\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "455_8_fky_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "455_22_c_timestamp\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "456_1_basename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "457_1_obj_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "458_7_obj_info\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "500_18_c_filename\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "CC\000", NULL,
    {.position = POS(513, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "513_34_err\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "call\000", NULL,
    {.position = POS(513, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "from_utf8\000", NULL,
    {.position = POS(515, 17)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "519_36_err\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "525_32_c_source\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "526_1_path\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "527_1_required\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "531_1_module_name\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "is_not_empty\000", NULL,
    {.position = POS(532, 22)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "while\000", NULL,
    {.position = POS(528, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "539_14_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "540_7_source\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "cond\000", NULL,
    {.position = POS(541, 3)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "split_source_into_lines\000", NULL,
    {.position = POS(549, 3)}
  },
  {
    FOT_INITIALIZED, 0, 0,
    "syntax_error\000funky", NULL,
    {.const_idx = -func_funky__syntax_error}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "556_0_node\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "558_4_column\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_group_of\000", NULL,
    {.position = POS(560, 26)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "560_1_line\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_text_of\000", NULL,
    {.position = POS(560, 13)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "length_of\000", NULL,
    {.position = POS(561, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "plus\000std", NULL,
    {.position = POS(561, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "source_position_of\000", NULL,
    {.position = POS(561, 43)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "minus\000std", NULL,
    {.position = POS(561, 15)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "sequence\000std", NULL,
    {.position = POS(568, 14)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "current_filename\000", NULL,
    {.position = POS(573, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SYNTAX_ERROR\000funky", NULL,
    {.position = POS(579, 9)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error\000", NULL,
    {.position = POS(579, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "581_16_obj\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_category_of\000", NULL,
    {.position = POS(584, 7)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "SYNTAX_ERROR\000", NULL,
    {.position = POS(584, 33)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "dump_object\000debug", NULL,
    {.position = POS(587, 9)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "591_1_message\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_message_text_of\000", NULL,
    {.position = POS(591, 12)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "error_details_of\000", NULL,
    {.position = POS(592, 3)}
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "592_25_filename\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "592_35_line\000", NULL
  },
  {
    FOT_UNINITIALIZED, 0, 0,
    "592_41_position\000", NULL
  },
  {
    FOT_UNKNOWN, 0, 0,
    "line_no_of\000", NULL,
    {.position = POS(596, 16)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "to_sentence_case\000", NULL,
    {.position = POS(598, 26)}
  },
  {
    FOT_UNKNOWN, 0, 0,
    "tabs_and_spaces\000", NULL,
    {.position = POS(600, 11)}
  }
};

extern FUNKY_MODULE module__basic__stdlib;
extern FUNKY_MODULE module__configuration;
extern FUNKY_MODULE module__character_names;
extern FUNKY_MODULE module__nodes;
extern FUNKY_MODULE module__parser;
extern FUNKY_MODULE module__nodes_metadata;
extern FUNKY_MODULE module__dump;
extern FUNKY_MODULE module__compile;
extern FUNKY_MODULE module__simplify;
extern FUNKY_MODULE module__simplify_autogen;
extern FUNKY_MODULE module__collect_literals;
extern FUNKY_MODULE module__collect_literals_autogen;
extern FUNKY_MODULE module__collect_variables;
extern FUNKY_MODULE module__collect_variables_autogen;
extern FUNKY_MODULE module__generate_tabular_code;

static FUNKY_MODULE *required_modules[] = {
  &module__basic__stdlib,
  &module__configuration,
  &module__character_names,
  &module__nodes,
  &module__parser,
  &module__nodes_metadata,
  &module__dump,
  &module__compile,
  &module__simplify,
  &module__simplify_autogen,
  &module__collect_literals,
  &module__collect_literals_autogen,
  &module__collect_variables,
  &module__collect_variables_autogen,
  &module__generate_tabular_code
};

static FUNKY_NAMESPACE defined_namespaces[] = {
  {"funky", 1, 0},
  {"funky_types", 1, 0}
};

static FUNKY_NAMESPACE used_namespaces[] = {
  {"std", 1, 0},
  {"funky", 1, 0}
};

FUNKY_MODULE module__funky = {
  "_funky", // module name
  "funky.fky", // module filename
  .major_version = 0,
  .minor_version = 0,
  .feature_flags = FEAT_POSITIONS,
  .marker = 0,
  15, // number of required modules
  2, // number of defined namespaces
  2, // number of used namespaces
  246, // number of constants
  185, // number of variables
  required_modules,
  defined_namespaces,
  used_namespaces,
  constants_table,
  variables_table,
};

int main(int argc, char **argv) {
  main_argc = argc;
  main_argv = argv;
  run(&module__funky);
}
