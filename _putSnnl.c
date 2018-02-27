#include "holberton.h"
#define BUFFERSIZE 1024


/**
 * _putsnnl - prints a string with nnl (no new line)
 * @str: string
 *
 * Return: number of chars printed
 */
int _putSnnl(const char *str)
{
	int chars_printed = 0, i;
	unsigned int n;
	int temp;
	char HEX[BUFFERSIZE];



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
		if ((*str < 32 && *str > 0) || *str >= 127)
		{
			_putchar('\\');
			_putchar('x');
			i = 0;
			n = *str;
			while (n != 0)
			{
				temp = n % 16;
				HEX[i] = toHEX(temp);
				n /= 16;
				i++;
			}
			while (--i >= 0)
			{
				_putchar(HEX[i]);
				chars_printed++;
			}
			return (chars_printed);
		}
		str++;
	}
	return (chars_printed);
}
