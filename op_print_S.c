#include "holberton.h"


/**
 * op_print_HEX - prints a hex unsigned number using only _putchar, lowercase
 * @valist: va_list with the number to be printed
 *
 * Return: number of chars printed
 */
int op_print_S(va_list valist)
{
	unsigned int n = va_arg(valist, unsigned int);
	int temp;
	int chars_printed = 0, i;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	i = 0;
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
