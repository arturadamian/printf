#include "holberton.h"

/**
 * op_print_binary - function to convert decimal to a binary
 * @valist: a valist
 *
 * Return: number of characters printed
 */
int op_print_binary(va_list valist, char *flag_str, char *len_mods_str)
{
	unsigned int bNum[1000];
	int j, i, chars_printed = 0;
	unsigned int n;

        while (*flag_str)
		flag_str++;
        while (*len_mods_str)
		len_mods_str++;

	n = va_arg(valist, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
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
