#include "holberton.h"


/**
 * _put_rev - reverses a string
 * @s: pointer to a string
 *
 * Return: the num of printed chars
 */
int _put_rev(char *s)
{
	int a;
	int chars_printed = 0;

	if (s == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
	for (a = 0; s[a]; a++)
		;
	a -= 1;
	chars_printed += a;
	while (a >= 0)
		_putchar(s[a--]);
	return (chars_printed);
}
