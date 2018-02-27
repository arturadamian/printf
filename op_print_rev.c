#include "holberton.h"

/**
 * op_print_rev - prints a rev string
 * @valist: a va_list whose next value
 *
 * Return: number of chars printed
 */
int op_print_rev(va_list valist)
{
	char *s = va_arg(valist, char *);

	return (_put_rev(s));
}
