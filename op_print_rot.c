#include "holberton.h"


/**
 * op_print_rot - prints the string in rot13
 * @valist: va_list with the number to be printed
 *
 * Return: number of chars printed
 */
int op_print_rot(va_list valist, char *flag_str, char *len_mods_str)
{
	char *s = va_arg(valist, char *);

	while (*flag_str)
		flag_str++;
	while (*len_mods_str)
                len_mods_str++;

	return (_putRnnl(s));
}
