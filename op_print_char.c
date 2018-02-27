#include "holberton.h"

/**
 * op_print_char - prints a character argument
 * @valist: a va_list whose next value is what we want to print
 * @flag_str: a string of all the flags
 *
 * Return: number of chars printed
 */
int op_print_char(va_list valist, char *flag_str)
{
	char c = va_arg(valist, int);

	while (*flag_str)
		flag_str++;

	_putchar(c);
	return (1);
}
