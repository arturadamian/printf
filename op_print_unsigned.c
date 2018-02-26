#include "holberton.h"

/**
 * _pow_u - takes a to the power of b (both unsigned)
 * @a: operand
 * @b: operand
 *
 * Return: result
 */
int _pow_u(unsigned int a, unsigned int b)
{
	int result = a;

	if (b == 0)
		return (1);

	while (--b > 0)
	{
		result *= a;
	}
	return (result);
}
/**
 * op_print_unsigned - prints an unsigned number using only _putchar
 * @valist: va_list with the number to be printed
 *
 * Return: number of chars printed
 */
int op_print_unsigned(va_list valist)
{
	int places = 1;
	int divisor, dig;
	unsigned int n = va_arg(valist, unsigned int);
	int chars_printed = 0;

	if (n < 10)
	{
		_putchar(n + '0');
		chars_printed++;
	}

	else
	{
		while (n / _pow_u(10, places) >= 10)
			places++;

		divisor = _pow_u(10, places);

		while (divisor)
		{
			dig = (n / divisor) % 10;
			_putchar(dig + '0');
			chars_printed++;
			divisor /= 10;
		}
	}
	return (chars_printed);
}
