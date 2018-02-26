#include "holberton.h"
#define BUFFERSIZE 1024

/**
 * op_print_octal - prints an octal unsigned number using only _putchar
 * @valist: va_list with the number to be printed
 *
 * Return: number of chars printed
 */
int op_print_octal(va_list valist)
{
	unsigned int n = va_arg(valist, unsigned int);
	int chars_printed = 0, i;
	unsigned int oct[BUFFERSIZE];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	i = 0;
	while (n != 0)
	{
		oct[i] = n % 8;
		n /= 8;
		i++;
	}

	while (--i >= 0)
	{
		_putchar('0' + oct[i]);
		chars_printed++;
	}

	return (chars_printed);
}
