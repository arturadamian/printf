#include "holberton.h"


/**
 * op_print_rot - prints the string in rot13
 * @valist: va_list with the number to be printed
 *
 * Return: number of chars printed
 */
int op_print_rot(va_list valist)
{
	char *s = va_arg(valist, char *);

	return (_putRnnl(s));
}
