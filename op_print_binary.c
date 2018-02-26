#include "holberton.h"

/**
 * op_print_binary - function to convert decimal to a binary
 * @valist: a valist
 *
 * Return: number of characters printed
 */
int op_print_binary(va_list valist)
{
	unsigned int bNum[1000];
	int j, i, chars_printed = 0;
	unsigned int n;

	n = va_arg(valist, unsigned int);

	i = 0;
	while (n > 0)
	{
		bNum[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = (i - 1); j >= 0; j--)
	{
		_putchar('0' + bNum[j]);
		chars_printed++;
	}
	return (chars_printed++);
}
