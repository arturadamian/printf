#include "holberton.h"

/**
 * op_print_char - prints a character argument
 * @valist: a va_list whose next value is what we want to print
 *
 * Return: number of chars printed
 */
int op_print_char(va_list valist)
{
	char c = va_arg(valist, int);

	_putchar(c);
	return (1);
}
