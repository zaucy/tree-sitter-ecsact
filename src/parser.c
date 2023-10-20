#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 191
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

enum {
  anon_sym_main = 1,
  anon_sym_package = 2,
  anon_sym_SEMI = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_import = 6,
  aux_sym_notify_option_token1 = 7,
  anon_sym_notify = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  sym_integer = 11,
  anon_sym_COLON = 12,
  anon_sym_LPAREN = 13,
  anon_sym_COMMA = 14,
  anon_sym_RPAREN = 15,
  anon_sym_component = 16,
  anon_sym_transient = 17,
  anon_sym_enum = 18,
  anon_sym_system = 19,
  anon_sym_action = 20,
  anon_sym_with = 21,
  anon_sym_readwrite = 22,
  anon_sym_readonly = 23,
  anon_sym_writeonly = 24,
  anon_sym_adds = 25,
  anon_sym_removes = 26,
  anon_sym_exclude = 27,
  anon_sym_include = 28,
  sym_number = 29,
  anon_sym_EQ = 30,
  anon_sym_i32 = 31,
  anon_sym_u32 = 32,
  anon_sym_f32 = 33,
  anon_sym_i16 = 34,
  anon_sym_u16 = 35,
  anon_sym_i8 = 36,
  anon_sym_u8 = 37,
  anon_sym_entity = 38,
  anon_sym_LBRACK = 39,
  anon_sym_RBRACK = 40,
  sym_package_identifier = 41,
  sym_declaration_identifier = 42,
  sym_declaration_lookup = 43,
  sym_source_file = 44,
  sym_package_statement = 45,
  sym_import_statement = 46,
  sym__declaration_statement = 47,
  sym_notify_option = 48,
  sym__notify_shorthand = 49,
  sym__notify_block = 50,
  sym_notify_statement = 51,
  sym_boolean = 52,
  sym_parameter_name = 53,
  sym_parameter_value = 54,
  sym_parameter = 55,
  sym_parameters = 56,
  sym_component_statement = 57,
  sym_transient_statement = 58,
  sym_enum_statement = 59,
  sym_system_statement = 60,
  sym_action_statement = 61,
  sym_with_statement = 62,
  sym_system_capability = 63,
  sym__system_capability_statement_with_shorthand = 64,
  sym__system_capability_statement = 65,
  sym_system_capability_statement = 66,
  sym_enum_value_statement = 67,
  sym_builtin_field_type = 68,
  sym_user_field_type = 69,
  sym__field_type = 70,
  sym_field_statement = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_source_file_repeat2 = 73,
  aux_sym__notify_block_repeat1 = 74,
  aux_sym_parameters_repeat1 = 75,
  aux_sym_component_statement_repeat1 = 76,
  aux_sym_enum_statement_repeat1 = 77,
  aux_sym_system_statement_repeat1 = 78,
  aux_sym_action_statement_repeat1 = 79,
  aux_sym_with_statement_repeat1 = 80,
  aux_sym__system_capability_statement_repeat1 = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_main] = "main",
  [anon_sym_package] = "package",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_import] = "import",
  [aux_sym_notify_option_token1] = "notify_option_token1",
  [anon_sym_notify] = "notify",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_component] = "component",
  [anon_sym_transient] = "transient",
  [anon_sym_enum] = "enum",
  [anon_sym_system] = "system",
  [anon_sym_action] = "action",
  [anon_sym_with] = "with",
  [anon_sym_readwrite] = "readwrite",
  [anon_sym_readonly] = "readonly",
  [anon_sym_writeonly] = "writeonly",
  [anon_sym_adds] = "adds",
  [anon_sym_removes] = "removes",
  [anon_sym_exclude] = "exclude",
  [anon_sym_include] = "include",
  [sym_number] = "number",
  [anon_sym_EQ] = "=",
  [anon_sym_i32] = "i32",
  [anon_sym_u32] = "u32",
  [anon_sym_f32] = "f32",
  [anon_sym_i16] = "i16",
  [anon_sym_u16] = "u16",
  [anon_sym_i8] = "i8",
  [anon_sym_u8] = "u8",
  [anon_sym_entity] = "entity",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_package_identifier] = "package_identifier",
  [sym_declaration_identifier] = "declaration_identifier",
  [sym_declaration_lookup] = "declaration_lookup",
  [sym_source_file] = "source_file",
  [sym_package_statement] = "package_statement",
  [sym_import_statement] = "import_statement",
  [sym__declaration_statement] = "_declaration_statement",
  [sym_notify_option] = "notify_option",
  [sym__notify_shorthand] = "_notify_shorthand",
  [sym__notify_block] = "_notify_block",
  [sym_notify_statement] = "notify_statement",
  [sym_boolean] = "boolean",
  [sym_parameter_name] = "parameter_name",
  [sym_parameter_value] = "parameter_value",
  [sym_parameter] = "parameter",
  [sym_parameters] = "parameters",
  [sym_component_statement] = "component_statement",
  [sym_transient_statement] = "transient_statement",
  [sym_enum_statement] = "enum_statement",
  [sym_system_statement] = "system_statement",
  [sym_action_statement] = "action_statement",
  [sym_with_statement] = "with_statement",
  [sym_system_capability] = "system_capability",
  [sym__system_capability_statement_with_shorthand] = "_system_capability_statement_with_shorthand",
  [sym__system_capability_statement] = "_system_capability_statement",
  [sym_system_capability_statement] = "system_capability_statement",
  [sym_enum_value_statement] = "enum_value_statement",
  [sym_builtin_field_type] = "builtin_field_type",
  [sym_user_field_type] = "user_field_type",
  [sym__field_type] = "_field_type",
  [sym_field_statement] = "field_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym__notify_block_repeat1] = "_notify_block_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_component_statement_repeat1] = "component_statement_repeat1",
  [aux_sym_enum_statement_repeat1] = "enum_statement_repeat1",
  [aux_sym_system_statement_repeat1] = "system_statement_repeat1",
  [aux_sym_action_statement_repeat1] = "action_statement_repeat1",
  [aux_sym_with_statement_repeat1] = "with_statement_repeat1",
  [aux_sym__system_capability_statement_repeat1] = "_system_capability_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_main] = anon_sym_main,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_import] = anon_sym_import,
  [aux_sym_notify_option_token1] = aux_sym_notify_option_token1,
  [anon_sym_notify] = anon_sym_notify,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_component] = anon_sym_component,
  [anon_sym_transient] = anon_sym_transient,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_system] = anon_sym_system,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_readwrite] = anon_sym_readwrite,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_writeonly] = anon_sym_writeonly,
  [anon_sym_adds] = anon_sym_adds,
  [anon_sym_removes] = anon_sym_removes,
  [anon_sym_exclude] = anon_sym_exclude,
  [anon_sym_include] = anon_sym_include,
  [sym_number] = sym_number,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_package_identifier] = sym_package_identifier,
  [sym_declaration_identifier] = sym_declaration_identifier,
  [sym_declaration_lookup] = sym_declaration_lookup,
  [sym_source_file] = sym_source_file,
  [sym_package_statement] = sym_package_statement,
  [sym_import_statement] = sym_import_statement,
  [sym__declaration_statement] = sym__declaration_statement,
  [sym_notify_option] = sym_notify_option,
  [sym__notify_shorthand] = sym__notify_shorthand,
  [sym__notify_block] = sym__notify_block,
  [sym_notify_statement] = sym_notify_statement,
  [sym_boolean] = sym_boolean,
  [sym_parameter_name] = sym_parameter_name,
  [sym_parameter_value] = sym_parameter_value,
  [sym_parameter] = sym_parameter,
  [sym_parameters] = sym_parameters,
  [sym_component_statement] = sym_component_statement,
  [sym_transient_statement] = sym_transient_statement,
  [sym_enum_statement] = sym_enum_statement,
  [sym_system_statement] = sym_system_statement,
  [sym_action_statement] = sym_action_statement,
  [sym_with_statement] = sym_with_statement,
  [sym_system_capability] = sym_system_capability,
  [sym__system_capability_statement_with_shorthand] = sym__system_capability_statement_with_shorthand,
  [sym__system_capability_statement] = sym__system_capability_statement,
  [sym_system_capability_statement] = sym_system_capability_statement,
  [sym_enum_value_statement] = sym_enum_value_statement,
  [sym_builtin_field_type] = sym_builtin_field_type,
  [sym_user_field_type] = sym_user_field_type,
  [sym__field_type] = sym__field_type,
  [sym_field_statement] = sym_field_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym__notify_block_repeat1] = aux_sym__notify_block_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_component_statement_repeat1] = aux_sym_component_statement_repeat1,
  [aux_sym_enum_statement_repeat1] = aux_sym_enum_statement_repeat1,
  [aux_sym_system_statement_repeat1] = aux_sym_system_statement_repeat1,
  [aux_sym_action_statement_repeat1] = aux_sym_action_statement_repeat1,
  [aux_sym_with_statement_repeat1] = aux_sym_with_statement_repeat1,
  [aux_sym__system_capability_statement_repeat1] = aux_sym__system_capability_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_main] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_notify_option_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_notify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_component] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_system] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readwrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_writeonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_adds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_removes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_package_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_lookup] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_package_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_notify_option] = {
    .visible = true,
    .named = true,
  },
  [sym__notify_shorthand] = {
    .visible = false,
    .named = true,
  },
  [sym__notify_block] = {
    .visible = false,
    .named = true,
  },
  [sym_notify_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_value] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_component_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_transient_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_system_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_action_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_with_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_system_capability] = {
    .visible = true,
    .named = true,
  },
  [sym__system_capability_statement_with_shorthand] = {
    .visible = false,
    .named = true,
  },
  [sym__system_capability_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_system_capability_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_value_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_field_type] = {
    .visible = true,
    .named = true,
  },
  [sym_user_field_type] = {
    .visible = true,
    .named = true,
  },
  [sym__field_type] = {
    .visible = false,
    .named = true,
  },
  [sym_field_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__notify_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_with_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__system_capability_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_component = 1,
  field_component_lookup = 2,
  field_field_name = 3,
  field_field_type = 4,
  field_length = 5,
  field_name = 6,
  field_option = 7,
  field_parameters = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_component] = "component",
  [field_component_lookup] = "component_lookup",
  [field_field_name] = "field_name",
  [field_field_type] = "field_type",
  [field_length] = "length",
  [field_name] = "name",
  [field_option] = "option",
  [field_parameters] = "parameters",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 4},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_field_type, 0},
  [3] =
    {field_name, 0},
  [4] =
    {field_name, 1},
    {field_parameters, 2},
  [6] =
    {field_component, 0, .inherited = true},
    {field_option, 0, .inherited = true},
  [8] =
    {field_component_lookup, 0, .inherited = true},
  [9] =
    {field_field_name, 1},
    {field_field_type, 0, .inherited = true},
    {field_length, 0, .inherited = true},
  [12] =
    {field_name, 0},
    {field_value, 1},
    {field_value, 2},
  [15] =
    {field_component_lookup, 1},
  [16] =
    {field_field_type, 0},
    {field_length, 2},
  [18] =
    {field_name, 0},
    {field_value, 2},
  [20] =
    {field_component, 2, .inherited = true},
    {field_option, 2, .inherited = true},
  [22] =
    {field_component, 0, .inherited = true},
    {field_component, 1, .inherited = true},
    {field_option, 0, .inherited = true},
    {field_option, 1, .inherited = true},
  [26] =
    {field_component, 1},
    {field_option, 0},
  [28] =
    {field_field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 40,
  [44] = 42,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 7,
  [50] = 11,
  [51] = 13,
  [52] = 17,
  [53] = 14,
  [54] = 18,
  [55] = 9,
  [56] = 19,
  [57] = 20,
  [58] = 58,
  [59] = 10,
  [60] = 12,
  [61] = 16,
  [62] = 22,
  [63] = 8,
  [64] = 15,
  [65] = 21,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 110,
  [112] = 112,
  [113] = 107,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 104,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 116,
  [122] = 119,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 128,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 141,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 140,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 164,
  [179] = 179,
  [180] = 165,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 159,
  [188] = 188,
  [189] = 183,
  [190] = 181,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(113);
      if (lookahead == '(') ADVANCE(128);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == ',') ADVANCE(129);
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '[') ADVANCE(169);
      if (lookahead == ']') ADVANCE(170);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '8') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '8') ADVANCE(165);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(157);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(153);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(155);
      END_STATE();
    case 8:
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == '6') ADVANCE(159);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(161);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '[') ADVANCE(169);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == 'w') ADVANCE(212);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(106);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(136);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(14);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 103:
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 104:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 105:
      if (lookahead == 'y') ADVANCE(167);
      END_STATE();
    case 106:
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 107:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 108:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 109:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(109)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 110:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(110)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 111:
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_main);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_notify_option_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_notify);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_notify);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '\'' ||
          lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_transient);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_system);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_readwrite);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_readwrite);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_writeonly);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_writeonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_adds);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_adds);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_removes);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_removes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_exclude);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_exclude);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_package_identifier);
      if (lookahead == '.') ADVANCE(2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '1') ADVANCE(179);
      if (lookahead == '3') ADVANCE(176);
      if (lookahead == '8') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '1') ADVANCE(179);
      if (lookahead == '3') ADVANCE(176);
      if (lookahead == '8') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '1') ADVANCE(180);
      if (lookahead == '3') ADVANCE(177);
      if (lookahead == '8') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '2') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '2') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '2') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '3') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '6') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == '6') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'm') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'c') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'c') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'd') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'd') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'd') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'd') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'd') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'f') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'i') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'i') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'l') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'l') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'l') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'n') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'n') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'n') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'n') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 'w') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'o') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'o') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'r') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 's') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 't') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 't') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 't') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'u') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'u') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'v') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'y') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'y') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'y') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (lookahead == 'y') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_declaration_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_declaration_lookup);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 34},
  [32] = {.lex_state = 34},
  [33] = {.lex_state = 34},
  [34] = {.lex_state = 34},
  [35] = {.lex_state = 34},
  [36] = {.lex_state = 34},
  [37] = {.lex_state = 34},
  [38] = {.lex_state = 34},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 34},
  [50] = {.lex_state = 34},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 41},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 11},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 11},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 11},
  [160] = {.lex_state = 11},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 15},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 11},
  [169] = {.lex_state = 109},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 11},
  [182] = {.lex_state = 15},
  [183] = {.lex_state = 110},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 109},
  [186] = {.lex_state = 109},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 110},
  [189] = {.lex_state = 110},
  [190] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_main] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_notify] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_component] = ACTIONS(1),
    [anon_sym_transient] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_system] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_readwrite] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_writeonly] = ACTIONS(1),
    [anon_sym_adds] = ACTIONS(1),
    [anon_sym_removes] = ACTIONS(1),
    [anon_sym_exclude] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(170),
    [sym_package_statement] = STATE(30),
    [sym_import_statement] = STATE(29),
    [sym__declaration_statement] = STATE(46),
    [sym_component_statement] = STATE(46),
    [sym_transient_statement] = STATE(46),
    [sym_enum_statement] = STATE(46),
    [sym_system_statement] = STATE(46),
    [sym_action_statement] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(29),
    [aux_sym_source_file_repeat2] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_main] = ACTIONS(5),
    [anon_sym_package] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_component] = ACTIONS(11),
    [anon_sym_transient] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_system] = ACTIONS(17),
    [anon_sym_action] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_notify,
    ACTIONS(29), 1,
      sym_declaration_identifier,
    STATE(8), 1,
      sym__notify_shorthand,
    STATE(19), 1,
      sym__system_capability_statement,
    STATE(21), 1,
      sym__notify_block,
    STATE(22), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(187), 1,
      sym__field_type,
    STATE(189), 1,
      sym_system_capability,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    STATE(5), 4,
      sym_notify_statement,
      sym_system_capability_statement,
      sym_field_statement,
      aux_sym_action_statement_repeat1,
    ACTIONS(25), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
    ACTIONS(27), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [57] = 13,
    ACTIONS(23), 1,
      anon_sym_notify,
    ACTIONS(29), 1,
      sym_declaration_identifier,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym__notify_shorthand,
    STATE(19), 1,
      sym__system_capability_statement,
    STATE(21), 1,
      sym__notify_block,
    STATE(22), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(187), 1,
      sym__field_type,
    STATE(189), 1,
      sym_system_capability,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    STATE(4), 4,
      sym_notify_statement,
      sym_system_capability_statement,
      sym_field_statement,
      aux_sym_action_statement_repeat1,
    ACTIONS(25), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
    ACTIONS(27), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [114] = 13,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_notify,
    ACTIONS(44), 1,
      sym_declaration_identifier,
    STATE(8), 1,
      sym__notify_shorthand,
    STATE(19), 1,
      sym__system_capability_statement,
    STATE(21), 1,
      sym__notify_block,
    STATE(22), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(187), 1,
      sym__field_type,
    STATE(189), 1,
      sym_system_capability,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    STATE(4), 4,
      sym_notify_statement,
      sym_system_capability_statement,
      sym_field_statement,
      aux_sym_action_statement_repeat1,
    ACTIONS(38), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
    ACTIONS(41), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [171] = 13,
    ACTIONS(23), 1,
      anon_sym_notify,
    ACTIONS(29), 1,
      sym_declaration_identifier,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym__notify_shorthand,
    STATE(19), 1,
      sym__system_capability_statement,
    STATE(21), 1,
      sym__notify_block,
    STATE(22), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(187), 1,
      sym__field_type,
    STATE(189), 1,
      sym_system_capability,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    STATE(4), 4,
      sym_notify_statement,
      sym_system_capability_statement,
      sym_field_statement,
      aux_sym_action_statement_repeat1,
    ACTIONS(25), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
    ACTIONS(27), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [228] = 13,
    ACTIONS(23), 1,
      anon_sym_notify,
    ACTIONS(29), 1,
      sym_declaration_identifier,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym__notify_shorthand,
    STATE(19), 1,
      sym__system_capability_statement,
    STATE(21), 1,
      sym__notify_block,
    STATE(22), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(187), 1,
      sym__field_type,
    STATE(189), 1,
      sym_system_capability,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    STATE(3), 4,
      sym_notify_statement,
      sym_system_capability_statement,
      sym_field_statement,
      aux_sym_action_statement_repeat1,
    ACTIONS(25), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
    ACTIONS(27), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [285] = 2,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [308] = 2,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [331] = 2,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [354] = 2,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [377] = 2,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [400] = 2,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [423] = 2,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [446] = 2,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [469] = 2,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [492] = 2,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [515] = 2,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [538] = 2,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [561] = 2,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [584] = 2,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [607] = 2,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [630] = 2,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 17,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [653] = 9,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 1,
      anon_sym_notify,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(63), 1,
      sym__notify_shorthand,
    STATE(65), 1,
      sym__notify_block,
    STATE(183), 1,
      sym_system_capability,
    STATE(23), 3,
      sym_notify_statement,
      sym_system_capability_statement,
      aux_sym_system_statement_repeat1,
    ACTIONS(116), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [689] = 9,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      anon_sym_notify,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(63), 1,
      sym__notify_shorthand,
    STATE(65), 1,
      sym__notify_block,
    STATE(183), 1,
      sym_system_capability,
    STATE(23), 3,
      sym_notify_statement,
      sym_system_capability_statement,
      aux_sym_system_statement_repeat1,
    ACTIONS(123), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [725] = 9,
    ACTIONS(121), 1,
      anon_sym_notify,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(63), 1,
      sym__notify_shorthand,
    STATE(65), 1,
      sym__notify_block,
    STATE(183), 1,
      sym_system_capability,
    STATE(26), 3,
      sym_notify_statement,
      sym_system_capability_statement,
      aux_sym_system_statement_repeat1,
    ACTIONS(123), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [761] = 9,
    ACTIONS(121), 1,
      anon_sym_notify,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(63), 1,
      sym__notify_shorthand,
    STATE(65), 1,
      sym__notify_block,
    STATE(183), 1,
      sym_system_capability,
    STATE(23), 3,
      sym_notify_statement,
      sym_system_capability_statement,
      aux_sym_system_statement_repeat1,
    ACTIONS(123), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [797] = 9,
    ACTIONS(121), 1,
      anon_sym_notify,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(63), 1,
      sym__notify_shorthand,
    STATE(65), 1,
      sym__notify_block,
    STATE(183), 1,
      sym_system_capability,
    STATE(24), 3,
      sym_notify_statement,
      sym_system_capability_statement,
      aux_sym_system_statement_repeat1,
    ACTIONS(123), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [833] = 9,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_component,
    ACTIONS(13), 1,
      anon_sym_transient,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_system,
    ACTIONS(19), 1,
      anon_sym_action,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(58), 2,
      sym_import_statement,
      aux_sym_source_file_repeat1,
    STATE(47), 7,
      sym__declaration_statement,
      sym_component_statement,
      sym_transient_statement,
      sym_enum_statement,
      sym_system_statement,
      sym_action_statement,
      aux_sym_source_file_repeat2,
  [868] = 9,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_component,
    ACTIONS(13), 1,
      anon_sym_transient,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_system,
    ACTIONS(19), 1,
      anon_sym_action,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(58), 2,
      sym_import_statement,
      aux_sym_source_file_repeat1,
    STATE(41), 7,
      sym__declaration_statement,
      sym_component_statement,
      sym_transient_statement,
      sym_enum_statement,
      sym_system_statement,
      sym_action_statement,
      aux_sym_source_file_repeat2,
  [903] = 9,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_component,
    ACTIONS(13), 1,
      anon_sym_transient,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_system,
    ACTIONS(19), 1,
      anon_sym_action,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_import_statement,
      aux_sym_source_file_repeat1,
    STATE(41), 7,
      sym__declaration_statement,
      sym_component_statement,
      sym_transient_statement,
      sym_enum_statement,
      sym_system_statement,
      sym_action_statement,
      aux_sym_source_file_repeat2,
  [938] = 6,
    ACTIONS(29), 1,
      sym_declaration_identifier,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym__field_type,
    STATE(36), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(27), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [966] = 6,
    ACTIONS(29), 1,
      sym_declaration_identifier,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym__field_type,
    STATE(33), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(27), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [994] = 6,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      sym_declaration_identifier,
    STATE(159), 1,
      sym__field_type,
    STATE(33), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(141), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [1022] = 6,
    ACTIONS(29), 1,
      sym_declaration_identifier,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym__field_type,
    STATE(39), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(27), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [1050] = 6,
    ACTIONS(29), 1,
      sym_declaration_identifier,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym__field_type,
    STATE(32), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(27), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [1078] = 6,
    ACTIONS(29), 1,
      sym_declaration_identifier,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym__field_type,
    STATE(33), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(27), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [1106] = 6,
    ACTIONS(29), 1,
      sym_declaration_identifier,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym__field_type,
    STATE(38), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(27), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [1134] = 6,
    ACTIONS(29), 1,
      sym_declaration_identifier,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym__field_type,
    STATE(33), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(27), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [1162] = 6,
    ACTIONS(29), 1,
      sym_declaration_identifier,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym__field_type,
    STATE(33), 2,
      sym_field_statement,
      aux_sym_component_statement_repeat1,
    STATE(157), 2,
      sym_builtin_field_type,
      sym_user_field_type,
    ACTIONS(27), 8,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
  [1190] = 6,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(183), 1,
      sym_system_capability,
    STATE(42), 2,
      sym_system_capability_statement,
      aux_sym_with_statement_repeat1,
    ACTIONS(123), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1216] = 7,
    ACTIONS(11), 1,
      anon_sym_component,
    ACTIONS(13), 1,
      anon_sym_transient,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_system,
    ACTIONS(19), 1,
      anon_sym_action,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(48), 7,
      sym__declaration_statement,
      sym_component_statement,
      sym_transient_statement,
      sym_enum_statement,
      sym_system_statement,
      sym_action_statement,
      aux_sym_source_file_repeat2,
  [1244] = 6,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(183), 1,
      sym_system_capability,
    STATE(45), 2,
      sym_system_capability_statement,
      aux_sym_with_statement_repeat1,
    ACTIONS(123), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1270] = 6,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(183), 1,
      sym_system_capability,
    STATE(44), 2,
      sym_system_capability_statement,
      aux_sym_with_statement_repeat1,
    ACTIONS(123), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1296] = 6,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(183), 1,
      sym_system_capability,
    STATE(45), 2,
      sym_system_capability_statement,
      aux_sym_with_statement_repeat1,
    ACTIONS(123), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1322] = 6,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__system_capability_statement,
    STATE(62), 1,
      sym__system_capability_statement_with_shorthand,
    STATE(183), 1,
      sym_system_capability,
    STATE(45), 2,
      sym_system_capability_statement,
      aux_sym_with_statement_repeat1,
    ACTIONS(169), 7,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1348] = 7,
    ACTIONS(11), 1,
      anon_sym_component,
    ACTIONS(13), 1,
      anon_sym_transient,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_system,
    ACTIONS(19), 1,
      anon_sym_action,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(48), 7,
      sym__declaration_statement,
      sym_component_statement,
      sym_transient_statement,
      sym_enum_statement,
      sym_system_statement,
      sym_action_statement,
      aux_sym_source_file_repeat2,
  [1376] = 7,
    ACTIONS(11), 1,
      anon_sym_component,
    ACTIONS(13), 1,
      anon_sym_transient,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_system,
    ACTIONS(19), 1,
      anon_sym_action,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    STATE(48), 7,
      sym__declaration_statement,
      sym_component_statement,
      sym_transient_statement,
      sym_enum_statement,
      sym_system_statement,
      sym_action_statement,
      aux_sym_source_file_repeat2,
  [1404] = 7,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      anon_sym_component,
    ACTIONS(179), 1,
      anon_sym_transient,
    ACTIONS(182), 1,
      anon_sym_enum,
    ACTIONS(185), 1,
      anon_sym_system,
    ACTIONS(188), 1,
      anon_sym_action,
    STATE(48), 7,
      sym__declaration_statement,
      sym_component_statement,
      sym_transient_statement,
      sym_enum_statement,
      sym_system_statement,
      sym_action_statement,
      aux_sym_source_file_repeat2,
  [1432] = 2,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 9,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [1447] = 2,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 9,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_entity,
      sym_declaration_identifier,
  [1462] = 1,
    ACTIONS(75), 10,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_with,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1475] = 1,
    ACTIONS(91), 10,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_with,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1488] = 1,
    ACTIONS(79), 10,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_with,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1501] = 1,
    ACTIONS(95), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1513] = 1,
    ACTIONS(59), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1525] = 1,
    ACTIONS(99), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1537] = 1,
    ACTIONS(103), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1549] = 3,
    ACTIONS(193), 1,
      anon_sym_import,
    STATE(58), 2,
      sym_import_statement,
      aux_sym_source_file_repeat1,
    ACTIONS(191), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1565] = 1,
    ACTIONS(63), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1577] = 1,
    ACTIONS(71), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1589] = 1,
    ACTIONS(87), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1601] = 1,
    ACTIONS(99), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1613] = 1,
    ACTIONS(55), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1625] = 1,
    ACTIONS(83), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1637] = 1,
    ACTIONS(107), 9,
      anon_sym_RBRACE,
      anon_sym_notify,
      anon_sym_readwrite,
      anon_sym_readonly,
      anon_sym_writeonly,
      anon_sym_adds,
      anon_sym_removes,
      anon_sym_exclude,
      anon_sym_include,
  [1649] = 1,
    ACTIONS(196), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1659] = 1,
    ACTIONS(198), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1669] = 1,
    ACTIONS(200), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1679] = 1,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1689] = 1,
    ACTIONS(204), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1699] = 1,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1709] = 1,
    ACTIONS(208), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1718] = 1,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1727] = 1,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1736] = 1,
    ACTIONS(214), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1745] = 1,
    ACTIONS(216), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1754] = 1,
    ACTIONS(218), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1763] = 1,
    ACTIONS(220), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1772] = 1,
    ACTIONS(222), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1781] = 1,
    ACTIONS(224), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1790] = 1,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1799] = 1,
    ACTIONS(228), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1808] = 1,
    ACTIONS(230), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1817] = 1,
    ACTIONS(232), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1826] = 1,
    ACTIONS(234), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1835] = 1,
    ACTIONS(236), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1844] = 1,
    ACTIONS(238), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1853] = 1,
    ACTIONS(240), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1862] = 1,
    ACTIONS(242), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1871] = 1,
    ACTIONS(244), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1880] = 1,
    ACTIONS(246), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1889] = 1,
    ACTIONS(248), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1898] = 1,
    ACTIONS(250), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1907] = 1,
    ACTIONS(252), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1916] = 1,
    ACTIONS(254), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1925] = 1,
    ACTIONS(256), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1934] = 1,
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1943] = 1,
    ACTIONS(260), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1952] = 1,
    ACTIONS(262), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1961] = 1,
    ACTIONS(264), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1970] = 1,
    ACTIONS(266), 6,
      ts_builtin_sym_end,
      anon_sym_component,
      anon_sym_transient,
      anon_sym_enum,
      anon_sym_system,
      anon_sym_action,
  [1979] = 4,
    ACTIONS(270), 1,
      sym_integer,
    STATE(147), 1,
      sym_parameter_value,
    STATE(148), 1,
      sym_boolean,
    ACTIONS(268), 2,
      anon_sym_true,
      anon_sym_false,
  [1993] = 4,
    ACTIONS(272), 1,
      aux_sym_notify_option_token1,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_parameter_name,
    STATE(132), 1,
      sym_parameter,
  [2006] = 3,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    ACTIONS(278), 1,
      anon_sym_with,
    STATE(119), 2,
      sym_with_statement,
      aux_sym__system_capability_statement_repeat1,
  [2017] = 4,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym_parameters,
  [2030] = 3,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    ACTIONS(288), 1,
      sym_declaration_identifier,
    STATE(125), 2,
      sym_enum_value_statement,
      aux_sym_enum_statement_repeat1,
  [2041] = 4,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 1,
      aux_sym_notify_option_token1,
    STATE(116), 1,
      aux_sym__notify_block_repeat1,
    STATE(179), 1,
      sym_notify_option,
  [2054] = 4,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_SEMI,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_parameters,
  [2067] = 4,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_parameters,
  [2080] = 4,
    ACTIONS(278), 1,
      anon_sym_with,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_with_statement,
  [2093] = 4,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    ACTIONS(308), 1,
      anon_sym_LBRACE,
    ACTIONS(310), 1,
      anon_sym_with,
    STATE(15), 1,
      sym_with_statement,
  [2106] = 3,
    ACTIONS(288), 1,
      sym_declaration_identifier,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(125), 2,
      sym_enum_value_statement,
      aux_sym_enum_statement_repeat1,
  [2117] = 4,
    ACTIONS(292), 1,
      aux_sym_notify_option_token1,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      aux_sym__notify_block_repeat1,
    STATE(179), 1,
      sym_notify_option,
  [2130] = 4,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_parameters,
  [2143] = 3,
    ACTIONS(288), 1,
      sym_declaration_identifier,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(106), 2,
      sym_enum_value_statement,
      aux_sym_enum_statement_repeat1,
  [2154] = 4,
    ACTIONS(292), 1,
      aux_sym_notify_option_token1,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      aux_sym__notify_block_repeat1,
    STATE(179), 1,
      sym_notify_option,
  [2167] = 3,
    ACTIONS(278), 1,
      anon_sym_with,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    STATE(122), 2,
      sym_with_statement,
      aux_sym__system_capability_statement_repeat1,
  [2178] = 4,
    ACTIONS(284), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_SEMI,
    ACTIONS(328), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_parameters,
  [2191] = 3,
    ACTIONS(278), 1,
      anon_sym_with,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    STATE(120), 2,
      sym_with_statement,
      aux_sym__system_capability_statement_repeat1,
  [2202] = 3,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    ACTIONS(334), 1,
      anon_sym_with,
    STATE(120), 2,
      sym_with_statement,
      aux_sym__system_capability_statement_repeat1,
  [2213] = 4,
    ACTIONS(292), 1,
      aux_sym_notify_option_token1,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      aux_sym__notify_block_repeat1,
    STATE(179), 1,
      sym_notify_option,
  [2226] = 3,
    ACTIONS(278), 1,
      anon_sym_with,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    STATE(120), 2,
      sym_with_statement,
      aux_sym__system_capability_statement_repeat1,
  [2237] = 3,
    ACTIONS(288), 1,
      sym_declaration_identifier,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(112), 2,
      sym_enum_value_statement,
      aux_sym_enum_statement_repeat1,
  [2248] = 4,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      aux_sym_notify_option_token1,
    STATE(124), 1,
      aux_sym__notify_block_repeat1,
    STATE(179), 1,
      sym_notify_option,
  [2261] = 3,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    ACTIONS(350), 1,
      sym_declaration_identifier,
    STATE(125), 2,
      sym_enum_value_statement,
      aux_sym_enum_statement_repeat1,
  [2272] = 2,
    ACTIONS(353), 1,
      anon_sym_COLON,
    ACTIONS(355), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2280] = 3,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_parameters_repeat1,
  [2290] = 3,
    ACTIONS(292), 1,
      aux_sym_notify_option_token1,
    ACTIONS(362), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_notify_option,
  [2300] = 3,
    ACTIONS(272), 1,
      aux_sym_notify_option_token1,
    STATE(126), 1,
      sym_parameter_name,
    STATE(146), 1,
      sym_parameter,
  [2310] = 1,
    ACTIONS(364), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2316] = 3,
    ACTIONS(292), 1,
      aux_sym_notify_option_token1,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_notify_option,
  [2326] = 3,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_parameters_repeat1,
  [2336] = 3,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_parameters_repeat1,
  [2346] = 1,
    ACTIONS(374), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2351] = 2,
    ACTIONS(376), 1,
      anon_sym_SEMI,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
  [2358] = 2,
    ACTIONS(380), 1,
      anon_sym_SEMI,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
  [2365] = 1,
    ACTIONS(384), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2370] = 1,
    ACTIONS(386), 2,
      anon_sym_RBRACE,
      sym_declaration_identifier,
  [2375] = 2,
    ACTIONS(388), 1,
      anon_sym_SEMI,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
  [2382] = 2,
    ACTIONS(392), 1,
      anon_sym_SEMI,
    ACTIONS(394), 1,
      anon_sym_LBRACE,
  [2389] = 2,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
  [2396] = 1,
    ACTIONS(400), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [2401] = 2,
    ACTIONS(402), 1,
      anon_sym_SEMI,
    ACTIONS(404), 1,
      anon_sym_LBRACE,
  [2408] = 2,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
  [2415] = 2,
    ACTIONS(410), 1,
      anon_sym_SEMI,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
  [2422] = 1,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2427] = 1,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2432] = 1,
    ACTIONS(416), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2437] = 2,
    ACTIONS(418), 1,
      anon_sym_SEMI,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
  [2444] = 1,
    ACTIONS(422), 2,
      anon_sym_RBRACE,
      aux_sym_notify_option_token1,
  [2449] = 1,
    ACTIONS(424), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2454] = 1,
    ACTIONS(426), 2,
      anon_sym_SEMI,
      sym_declaration_identifier,
  [2459] = 2,
    ACTIONS(428), 1,
      anon_sym_SEMI,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
  [2466] = 2,
    ACTIONS(432), 1,
      anon_sym_SEMI,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
  [2473] = 1,
    ACTIONS(436), 2,
      anon_sym_LBRACK,
      sym_declaration_identifier,
  [2478] = 2,
    ACTIONS(438), 1,
      anon_sym_SEMI,
    ACTIONS(440), 1,
      anon_sym_LBRACE,
  [2485] = 2,
    ACTIONS(442), 1,
      anon_sym_LBRACK,
    ACTIONS(444), 1,
      sym_declaration_identifier,
  [2492] = 1,
    ACTIONS(446), 2,
      anon_sym_LBRACK,
      sym_declaration_identifier,
  [2497] = 1,
    ACTIONS(448), 1,
      sym_declaration_identifier,
  [2501] = 1,
    ACTIONS(450), 1,
      sym_declaration_identifier,
  [2505] = 1,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
  [2509] = 1,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
  [2513] = 1,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
  [2517] = 1,
    ACTIONS(458), 1,
      anon_sym_SEMI,
  [2521] = 1,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
  [2525] = 1,
    ACTIONS(462), 1,
      sym_number,
  [2529] = 1,
    ACTIONS(464), 1,
      anon_sym_SEMI,
  [2533] = 1,
    ACTIONS(466), 1,
      sym_declaration_identifier,
  [2537] = 1,
    ACTIONS(468), 1,
      sym_package_identifier,
  [2541] = 1,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
  [2545] = 1,
    ACTIONS(472), 1,
      sym_declaration_identifier,
  [2549] = 1,
    ACTIONS(474), 1,
      sym_declaration_identifier,
  [2553] = 1,
    ACTIONS(476), 1,
      sym_declaration_identifier,
  [2557] = 1,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
  [2561] = 1,
    ACTIONS(480), 1,
      sym_declaration_identifier,
  [2565] = 1,
    ACTIONS(482), 1,
      anon_sym_SEMI,
  [2569] = 1,
    ACTIONS(484), 1,
      anon_sym_package,
  [2573] = 1,
    ACTIONS(486), 1,
      anon_sym_SEMI,
  [2577] = 1,
    ACTIONS(488), 1,
      sym_declaration_identifier,
  [2581] = 1,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
  [2585] = 1,
    ACTIONS(492), 1,
      sym_declaration_identifier,
  [2589] = 1,
    ACTIONS(494), 1,
      sym_number,
  [2593] = 1,
    ACTIONS(496), 1,
      sym_declaration_lookup,
  [2597] = 1,
    ACTIONS(498), 1,
      anon_sym_EQ,
  [2601] = 1,
    ACTIONS(500), 1,
      sym_package_identifier,
  [2605] = 1,
    ACTIONS(502), 1,
      sym_package_identifier,
  [2609] = 1,
    ACTIONS(504), 1,
      sym_declaration_identifier,
  [2613] = 1,
    ACTIONS(506), 1,
      sym_declaration_lookup,
  [2617] = 1,
    ACTIONS(508), 1,
      sym_declaration_lookup,
  [2621] = 1,
    ACTIONS(510), 1,
      sym_declaration_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 228,
  [SMALL_STATE(7)] = 285,
  [SMALL_STATE(8)] = 308,
  [SMALL_STATE(9)] = 331,
  [SMALL_STATE(10)] = 354,
  [SMALL_STATE(11)] = 377,
  [SMALL_STATE(12)] = 400,
  [SMALL_STATE(13)] = 423,
  [SMALL_STATE(14)] = 446,
  [SMALL_STATE(15)] = 469,
  [SMALL_STATE(16)] = 492,
  [SMALL_STATE(17)] = 515,
  [SMALL_STATE(18)] = 538,
  [SMALL_STATE(19)] = 561,
  [SMALL_STATE(20)] = 584,
  [SMALL_STATE(21)] = 607,
  [SMALL_STATE(22)] = 630,
  [SMALL_STATE(23)] = 653,
  [SMALL_STATE(24)] = 689,
  [SMALL_STATE(25)] = 725,
  [SMALL_STATE(26)] = 761,
  [SMALL_STATE(27)] = 797,
  [SMALL_STATE(28)] = 833,
  [SMALL_STATE(29)] = 868,
  [SMALL_STATE(30)] = 903,
  [SMALL_STATE(31)] = 938,
  [SMALL_STATE(32)] = 966,
  [SMALL_STATE(33)] = 994,
  [SMALL_STATE(34)] = 1022,
  [SMALL_STATE(35)] = 1050,
  [SMALL_STATE(36)] = 1078,
  [SMALL_STATE(37)] = 1106,
  [SMALL_STATE(38)] = 1134,
  [SMALL_STATE(39)] = 1162,
  [SMALL_STATE(40)] = 1190,
  [SMALL_STATE(41)] = 1216,
  [SMALL_STATE(42)] = 1244,
  [SMALL_STATE(43)] = 1270,
  [SMALL_STATE(44)] = 1296,
  [SMALL_STATE(45)] = 1322,
  [SMALL_STATE(46)] = 1348,
  [SMALL_STATE(47)] = 1376,
  [SMALL_STATE(48)] = 1404,
  [SMALL_STATE(49)] = 1432,
  [SMALL_STATE(50)] = 1447,
  [SMALL_STATE(51)] = 1462,
  [SMALL_STATE(52)] = 1475,
  [SMALL_STATE(53)] = 1488,
  [SMALL_STATE(54)] = 1501,
  [SMALL_STATE(55)] = 1513,
  [SMALL_STATE(56)] = 1525,
  [SMALL_STATE(57)] = 1537,
  [SMALL_STATE(58)] = 1549,
  [SMALL_STATE(59)] = 1565,
  [SMALL_STATE(60)] = 1577,
  [SMALL_STATE(61)] = 1589,
  [SMALL_STATE(62)] = 1601,
  [SMALL_STATE(63)] = 1613,
  [SMALL_STATE(64)] = 1625,
  [SMALL_STATE(65)] = 1637,
  [SMALL_STATE(66)] = 1649,
  [SMALL_STATE(67)] = 1659,
  [SMALL_STATE(68)] = 1669,
  [SMALL_STATE(69)] = 1679,
  [SMALL_STATE(70)] = 1689,
  [SMALL_STATE(71)] = 1699,
  [SMALL_STATE(72)] = 1709,
  [SMALL_STATE(73)] = 1718,
  [SMALL_STATE(74)] = 1727,
  [SMALL_STATE(75)] = 1736,
  [SMALL_STATE(76)] = 1745,
  [SMALL_STATE(77)] = 1754,
  [SMALL_STATE(78)] = 1763,
  [SMALL_STATE(79)] = 1772,
  [SMALL_STATE(80)] = 1781,
  [SMALL_STATE(81)] = 1790,
  [SMALL_STATE(82)] = 1799,
  [SMALL_STATE(83)] = 1808,
  [SMALL_STATE(84)] = 1817,
  [SMALL_STATE(85)] = 1826,
  [SMALL_STATE(86)] = 1835,
  [SMALL_STATE(87)] = 1844,
  [SMALL_STATE(88)] = 1853,
  [SMALL_STATE(89)] = 1862,
  [SMALL_STATE(90)] = 1871,
  [SMALL_STATE(91)] = 1880,
  [SMALL_STATE(92)] = 1889,
  [SMALL_STATE(93)] = 1898,
  [SMALL_STATE(94)] = 1907,
  [SMALL_STATE(95)] = 1916,
  [SMALL_STATE(96)] = 1925,
  [SMALL_STATE(97)] = 1934,
  [SMALL_STATE(98)] = 1943,
  [SMALL_STATE(99)] = 1952,
  [SMALL_STATE(100)] = 1961,
  [SMALL_STATE(101)] = 1970,
  [SMALL_STATE(102)] = 1979,
  [SMALL_STATE(103)] = 1993,
  [SMALL_STATE(104)] = 2006,
  [SMALL_STATE(105)] = 2017,
  [SMALL_STATE(106)] = 2030,
  [SMALL_STATE(107)] = 2041,
  [SMALL_STATE(108)] = 2054,
  [SMALL_STATE(109)] = 2067,
  [SMALL_STATE(110)] = 2080,
  [SMALL_STATE(111)] = 2093,
  [SMALL_STATE(112)] = 2106,
  [SMALL_STATE(113)] = 2117,
  [SMALL_STATE(114)] = 2130,
  [SMALL_STATE(115)] = 2143,
  [SMALL_STATE(116)] = 2154,
  [SMALL_STATE(117)] = 2167,
  [SMALL_STATE(118)] = 2178,
  [SMALL_STATE(119)] = 2191,
  [SMALL_STATE(120)] = 2202,
  [SMALL_STATE(121)] = 2213,
  [SMALL_STATE(122)] = 2226,
  [SMALL_STATE(123)] = 2237,
  [SMALL_STATE(124)] = 2248,
  [SMALL_STATE(125)] = 2261,
  [SMALL_STATE(126)] = 2272,
  [SMALL_STATE(127)] = 2280,
  [SMALL_STATE(128)] = 2290,
  [SMALL_STATE(129)] = 2300,
  [SMALL_STATE(130)] = 2310,
  [SMALL_STATE(131)] = 2316,
  [SMALL_STATE(132)] = 2326,
  [SMALL_STATE(133)] = 2336,
  [SMALL_STATE(134)] = 2346,
  [SMALL_STATE(135)] = 2351,
  [SMALL_STATE(136)] = 2358,
  [SMALL_STATE(137)] = 2365,
  [SMALL_STATE(138)] = 2370,
  [SMALL_STATE(139)] = 2375,
  [SMALL_STATE(140)] = 2382,
  [SMALL_STATE(141)] = 2389,
  [SMALL_STATE(142)] = 2396,
  [SMALL_STATE(143)] = 2401,
  [SMALL_STATE(144)] = 2408,
  [SMALL_STATE(145)] = 2415,
  [SMALL_STATE(146)] = 2422,
  [SMALL_STATE(147)] = 2427,
  [SMALL_STATE(148)] = 2432,
  [SMALL_STATE(149)] = 2437,
  [SMALL_STATE(150)] = 2444,
  [SMALL_STATE(151)] = 2449,
  [SMALL_STATE(152)] = 2454,
  [SMALL_STATE(153)] = 2459,
  [SMALL_STATE(154)] = 2466,
  [SMALL_STATE(155)] = 2473,
  [SMALL_STATE(156)] = 2478,
  [SMALL_STATE(157)] = 2485,
  [SMALL_STATE(158)] = 2492,
  [SMALL_STATE(159)] = 2497,
  [SMALL_STATE(160)] = 2501,
  [SMALL_STATE(161)] = 2505,
  [SMALL_STATE(162)] = 2509,
  [SMALL_STATE(163)] = 2513,
  [SMALL_STATE(164)] = 2517,
  [SMALL_STATE(165)] = 2521,
  [SMALL_STATE(166)] = 2525,
  [SMALL_STATE(167)] = 2529,
  [SMALL_STATE(168)] = 2533,
  [SMALL_STATE(169)] = 2537,
  [SMALL_STATE(170)] = 2541,
  [SMALL_STATE(171)] = 2545,
  [SMALL_STATE(172)] = 2549,
  [SMALL_STATE(173)] = 2553,
  [SMALL_STATE(174)] = 2557,
  [SMALL_STATE(175)] = 2561,
  [SMALL_STATE(176)] = 2565,
  [SMALL_STATE(177)] = 2569,
  [SMALL_STATE(178)] = 2573,
  [SMALL_STATE(179)] = 2577,
  [SMALL_STATE(180)] = 2581,
  [SMALL_STATE(181)] = 2585,
  [SMALL_STATE(182)] = 2589,
  [SMALL_STATE(183)] = 2593,
  [SMALL_STATE(184)] = 2597,
  [SMALL_STATE(185)] = 2601,
  [SMALL_STATE(186)] = 2605,
  [SMALL_STATE(187)] = 2609,
  [SMALL_STATE(188)] = 2613,
  [SMALL_STATE(189)] = 2617,
  [SMALL_STATE(190)] = 2621,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_statement_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_statement_repeat1, 2), SHIFT_REPEAT(131),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_statement_repeat1, 2), SHIFT_REPEAT(188),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_statement_repeat1, 2), SHIFT_REPEAT(155),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_statement_repeat1, 2), SHIFT_REPEAT(158),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_statement, 3, .production_id = 8),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_statement, 3, .production_id = 8),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_notify_statement, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_notify_statement, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__system_capability_statement, 4, .production_id = 10),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__system_capability_statement, 4, .production_id = 10),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__notify_block, 4, .production_id = 13),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__notify_block, 4, .production_id = 13),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_statement, 4, .production_id = 8),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_statement, 4, .production_id = 8),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__system_capability_statement, 5, .production_id = 10),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__system_capability_statement, 5, .production_id = 10),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 5, .production_id = 16),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_statement, 5, .production_id = 16),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 4, .production_id = 16),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_statement, 4, .production_id = 16),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__system_capability_statement_with_shorthand, 3, .production_id = 10),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__system_capability_statement_with_shorthand, 3, .production_id = 10),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__system_capability_statement, 3, .production_id = 10),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__system_capability_statement, 3, .production_id = 10),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 3, .production_id = 16),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_statement, 3, .production_id = 16),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__notify_block, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__notify_block, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_capability_statement, 1, .production_id = 7),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_capability_statement, 1, .production_id = 7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__notify_shorthand, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__notify_shorthand, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_notify_statement, 1, .production_id = 6),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_notify_statement, 1, .production_id = 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_system_statement_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_statement_repeat1, 2), SHIFT_REPEAT(128),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_system_statement_repeat1, 2), SHIFT_REPEAT(188),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_statement_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_statement_repeat1, 2), SHIFT_REPEAT(155),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_statement_repeat1, 2), SHIFT_REPEAT(158),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_statement_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_statement_repeat1, 2), SHIFT_REPEAT(188),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(175),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(160),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(173),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(172),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(171),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_statement, 4, .production_id = 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_statement, 5, .production_id = 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_statement, 4, .production_id = 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_statement, 3, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_statement, 6, .production_id = 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transient_statement, 3, .production_id = 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_statement, 4, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_statement, 4, .production_id = 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transient_statement, 4, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transient_statement, 4, .production_id = 5),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_statement, 4, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_statement, 6, .production_id = 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_statement, 3, .production_id = 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_statement, 4, .production_id = 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transient_statement, 6, .production_id = 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_statement, 4, .production_id = 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_statement, 6, .production_id = 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_statement, 6, .production_id = 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_statement, 3, .production_id = 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_statement, 4, .production_id = 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_statement, 4, .production_id = 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_statement, 4, .production_id = 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_statement, 3, .production_id = 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_statement, 5, .production_id = 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_statement, 5, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_statement, 3, .production_id = 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_statement, 5, .production_id = 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_statement, 5, .production_id = 5),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_statement, 5, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_statement, 5, .production_id = 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_statement, 5, .production_id = 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transient_statement, 5, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transient_statement, 5, .production_id = 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_statement, 5, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__system_capability_statement_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__system_capability_statement_repeat1, 2), SHIFT_REPEAT(181),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__notify_block_repeat1, 2, .production_id = 14),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__notify_block_repeat1, 2, .production_id = 14), SHIFT_REPEAT(152),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_statement_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_statement_repeat1, 2), SHIFT_REPEAT(184),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 4),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(129),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_name, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value_statement, 4, .production_id = 12),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 9),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_value, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__notify_block_repeat1, 3, .production_id = 15),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_notify_option, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_field_type, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_type, 1, .production_id = 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_field_type, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_type, 4, .production_id = 11),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [470] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_capability, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ecsact(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
