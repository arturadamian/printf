#include "holberton.h"

/**
 * get_op_func - selects the correct function to perform the operation.
 * @s: the operator passed as argument to the program
 *
 * Return: pointer to the correct function or null if invalid operator.
 */
op_func get_op_func(const char *s)
{
	int i;
	op_t ops[] = {
		{"c", op_print_char},
		{"s", op_print_string},
		{"i", op_print_number},
		{"d", op_print_number},
		{"b", op_print_binary},
		{"u", op_print_unsigned},
		{"o", op_print_octal},
		{"x", op_print_hex},
		{"X", op_print_HEX},
		{"p", op_print_ptr},
		{"S", op_print_S},
		{"R", op_print_rot},
		{"r", op_print_rev},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op && _strcmp(ops[i].op, s) != 0)
		i++;
	return (ops[i].f);
}
