#include "holberton.h"

/**
 * op_print_char - prints a character argument
 * @valist: a va_list whose next value is what we want to print
 */
void op_print_char(va_list valist)
{
	char c = va_arg(valist, int);
	_putchar(c);
}

/**
 * op_print_string - prints a string argument
 * @valist: a va_list whose next value is what we want to print
 */
void op_print_string(va_list valist)
{
	char *s = va_arg(valist, char *);
	_putsnnl(s);
}
