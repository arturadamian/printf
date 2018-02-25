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

	while (*str)
	{
		_putchar(*str++);
		chars_printed++;
	}
	return (chars_printed);
}
