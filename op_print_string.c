#include "holberton.h"

/**
 * op_print_string - prints a string argument
 * @valist: a va_list whose next value is what we want\
 to print
 *
 * Return: number of chars printed
 */
int op_print_string(va_list valist)
{
	char *s = va_arg(valist, char *);

	return (_putsnnl(s));
}
