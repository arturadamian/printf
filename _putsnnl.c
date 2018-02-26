#include "holberton.h"

/**
 * _putsnnl - prints a string with nnl (no new line)
 * @str: string
 *
 * Return: number of chars printed
 */
int _putsnnl(const char *str)
{
	int chars_printed = 0;

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}

	while (*str)
	{
		_putchar(*str++);
		chars_printed++;
	}
	return (chars_printed);
}
