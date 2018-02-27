#include "holberton.h"
#define BUFFERSIZE 1024


/**
 * print_2_dig_hex - prints the ascii num in Hex
 * @n: argument
 */
void print_2_dig_hex(int n)
{
	int buf[] = {'0', '0'};
	int temp;
	int i = 0;

	while (n != 0)
	{
		temp = n % 16;
		buf[i] = toHEX(temp);
		n /= 16;
		i++;
	}
	i = 1;
	while (i >= 0)
	{
		_putchar(buf[i]);
		i--;
	}
}

/**
 * _putSnnl - prints a string with nnl (no new line)
 * @str: string
 *
 * Return: number of chars printed
 */
int _putSnnl(const char *str)
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
		if (*str >= 32 && *str < 127)
		{
			_putchar(*str);
			chars_printed++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			print_2_dig_hex(*str);
			chars_printed += 4;
		}
		str++;
	}
	return (chars_printed);
}
