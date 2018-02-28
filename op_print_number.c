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
int op_print_number(va_list valist, char *flag_str, char *len_mods)
{
	int places = 1;
	int divisor, dig;
	long int n = va_arg(valist, long int);
	int chars_printed = 0;
	int has_plus = 0;
	int has_sp = 0;
	int mod_l = 0;
	int mod_h = 0;

	while (*flag_str)
	{
		if (*flag_str == ' ')
			has_sp = 1;
		if (*flag_str == '+')
			has_plus = 1;
		flag_str++;
	}

	while (*len_mods)
	{
                if (*len_mods == 'l')
			mod_l = 1;
		if (*len_mods == 'h')
			mod_h = 1;
		len_mods++;
	}

	if (mod_l)
		;
	else if (mod_h)
		n = cast_to_si(n);
	else
		n = cast_to_i(n);

	if (n < 0)
	{
		_putchar('-');
		chars_printed++;
	}

	if (n >= 0 && has_sp)
	{
		_putchar(' ');
		chars_printed++;
	}

	if (n >= 0 && has_plus)
	{
		_putchar('+');
		chars_printed++;
	}

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
