#include "holberton.h"


/**
 * _putRnnl - prints a string in rot13
 * @s: pointer to a string
 *
 * Return: result
 */
int _putRnnl(const char *s)
{
	int i, z;
	int chars_printed = 0;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

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
	for (i = 0;s[i]; i++)
	{
		for (z = 0; x[z]; z++)
		{
			if (s[i] == x[z])
			{
				_putchar(y[z]);
				chars_printed++;
				break;
			}
		}
		if (s[i] != x[z])
			_putchar(s[i]);
		chars_printed++;
	}
	return (chars_printed);
}
