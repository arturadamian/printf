#include "holberton.h"

/**
 * op_print_char - prints a character argument
 * @valist: a va_list whose next value is what we want to print
 */
void op_print_char(va_list valist)
{
	char c = va_arg(valist, int);
	_putchar(c);
}

/**
 * op_print_string - prints a string argument
 * @valist: a va_list whose next value is what we want to print
 */
void op_print_string(va_list valist)
{
	char *s = va_arg(valist, char *);
	_putsnnl(s);
}

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
 * @n: the number to be printed
 */
void op_print_number(va_list valist)
{
	int places = 1;
	int divisor, dig;
	int n = va_arg(valist, int);

	if (n < 0)
		_putchar('-');

	if (n > -10 && n < 10)
		_putchar(_abs(n) + '0');
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
			divisor /= 10;
		}
	}
}
