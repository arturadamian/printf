#include "holberton.h"

/**
 * _putsnnl - prints a string with nnl (no new line)
 * @str: string
 *
 * Return: void
 */
void _putsnnl(const char *str)
{
	while (*str)
		_putchar(*str++);
}
