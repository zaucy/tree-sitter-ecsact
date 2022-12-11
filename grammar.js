module.exports = grammar({
	name : 'ecsact',
	rules: {
		source_file: $ => seq(
			// TODO(zaucy): Package statements are not optional in an Ecsact file
			optional($.package_statement),
			repeat($.import_statement),
			repeat($._declaration_statement),
		),

		package_statement: $ => seq(
			'package',
			field('name', $.package_identifier),
			choice(';', seq('{', '}')),
		),

		import_statement: $ => seq(
			'import',
			$.package_identifier,
			choice(';', seq('{', '}')),
		),

		_declaration_statement: $ => choice(
			$.component_statement,
			$.transient_statement,
			$.enum_statement,
			$.system_statement,
			$.action_statement,
		),

		component_statement: $ => seq(
			'component',
			field('name', $.declaration_identifier),
			choice(
				';',
				seq(
					'{',
					repeat($.field_statement),
					'}',
				),
			),
		),

		transient_statement: $ => seq(
			'transient',
			field('name', $.declaration_identifier),
			choice(
				';',
				seq(
					'{',
					repeat($.field_statement),
					'}',
				),
			),
		),

		enum_statement: $ => seq(
			'enum',
			field('name', $.declaration_identifier),
			choice(
				';',
				seq(
					'{',
					repeat(
						$.enum_value_statement
					),
					'}',
				),
			),
		),

		system_statement: $ => seq(
			'system',
			field('name', $.declaration_identifier),
			choice(
				';',
				seq(
					'{',
					repeat($.system_capability_statement),
					'}',
				),
			),
		),

		action_statement: $ => seq(
			'action',
			field('name', $.declaration_identifier),
			choice(
				';',
				seq(
					'{',
					repeat(choice(
						$.system_capability_statement,
						$.field_statement,
					)),
					'}',
				),
			),
		),

		with_statement: $ => seq(
			'with',
			field('field_name', $.declaration_identifier),
			choice(
				';',
				seq(
					'{',
					repeat($.system_capability_statement),
					'}',
				),
			),
		),

		system_capability: $ => choice(
			'readwrite',
			'readonly',
			'writeonly',
			'adds',
			'removes',
			'exclude',
			'incldue',
		),

		_system_capability_statement_with_shorthand: $ => seq(
			$.system_capability,
			field('component_name', $.declaration_identifier),
			$.with_statement,
		),

		_system_capability_statement: $ => seq(
			$.system_capability,
			field('component_name', $.declaration_identifier),
			choice(
				';',
				seq(
					'{',
					repeat($.with_statement),
					'}',
				),
			),
		),

		system_capability_statement: $ => seq(
			choice(
				$._system_capability_statement_with_shorthand,
				$._system_capability_statement,
			),
		),

		number: () => /\d+/,

		enum_value_statement: $ => seq(
			field('name', $.declaration_identifier),
			'=',
			field('value', $.number),
			';',
		),

		builtin_field_type: () => choice(
			'i32',
			'u32',
			'f32',
			'i16',
			'u16',
			'i8',
			'u8',
			'entity',
		),

		user_field_type: $ => $.declaration_identifier,

		_field_type: $ => seq(
			field(
				'field_type',
				choice(
					$.builtin_field_type,
					$.user_field_type,
				),
			),
			optional(
				seq(
					'[',
					field('length', $.number),
					']',
				),
			),
		),

		field_statement: $ => seq(
			$._field_type,
			field('field_name', $.declaration_identifier),
			choice(';', seq('{', '}')),
		),

		package_identifier: () => /[a-z][a-z.]+[a-z]/,
		declaration_identifier: () => /[a-zA-Z][a-zA-Z0-9_]*/,
	},
});

