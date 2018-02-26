#include "holberton.h"

/**
 * _abs - absolute value function
 * @n: character to be abs'd
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

/**
 * _pow - takes a to the power of b
 * @a: operand
 * @b: operand
 *
 * Return: result
 */
int _pow(int a, int b)
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
 * op_print_number - prints a number using only _putchar
 * @valist: va_list with the number to be printed
 *
 * Return: number of chars printed
 */
int op_print_number(va_list valist)
{
	int places = 1;
	int divisor, dig;
	int n = va_arg(valist, unsigned int);
	int chars_printed = 0;

	if (n > -10 && n < 10)
	{
		_putchar(_abs(n) + '0');
		chars_printed++;
	}

	else
	{
		while (_abs(n / _pow(10, places)) >= 10)
			places++;

		divisor = _pow(10, places);

		while (divisor)
		{
			dig = (n / divisor) % 10;
			if (n < 0)
				dig = _abs(dig);
			_putchar(dig + '0');
			chars_printed++;
			divisor /= 10;
		}
	}
	return (chars_printed);
}
