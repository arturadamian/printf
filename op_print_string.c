#include "holberton.h"

/**
 * op_print_string - prints a string argument
 * @valist: a va_list whose next value is what we want\
 to print
 * @flag_str: a string of all the flags
 *
 * Return: number of chars printed
 */
int op_print_string(va_list valist, char *flag_str)
{
	char *s = va_arg(valist, char *);

	while (*flag_str)
		flag_str++;

	return (_putsnnl(s));
}
