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
int op_print_unsigned(va_list valist, char *flag_str, char *len_mods)
{
	int places = 1;
	int divisor, dig;
	long unsigned int n = va_arg(valist, long unsigned int);
	int chars_printed = 0;
	int mod_l = 0;
	int mod_h = 0;

	while (*flag_str)
                flag_str++;

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
		n = cast_to_sui(n);
	else
		n = cast_to_ui(n);

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
