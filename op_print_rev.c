#include "holberton.h"

/**
 * op_print_rev - prints a rev string
 * @valist: a va_list whose next value
 *
 * Return: number of chars printed
 */
int op_print_rev(va_list valist, char *flag_str)
{
	char *s = va_arg(valist, char *);

	while (*flag_str)
		flag_str++;

	return (_put_rev(s));
}
