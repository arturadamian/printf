#include "holberton.h"

/**
 * op_print_rev - prints a rev string
 * @valist: a va_list whose next value
 *
 * Return: number of chars printed
 */
int op_print_rev(va_list valist, char *flag_str, char *len_mods_str)
{
	char *s = va_arg(valist, char *);

	while (*flag_str)
		flag_str++;
	while (*len_mods_str)
                len_mods_str++;

	return (_put_rev(s));
}
