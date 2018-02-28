#include "holberton.h"
#define BUFFERSIZE 1024

/**
 * op_print_octal - prints an octal unsigned number using only _putchar
 * @valist: va_list with the number to be printed
 *
 * Return: number of chars printed
 */
int op_print_octal(va_list valist, char *flag_str)
{
	unsigned int n = va_arg(valist, unsigned int);
	int chars_printed = 0, i;
	unsigned int oct[BUFFERSIZE];
	int has_hashtag = 0;

	while (*flag_str)
	{
		if (*flag_str == '#')
			has_hashtag = 1;
                flag_str++;
	}


	if (n == 0)
	{
		_putchar('0');
		chars_printed++;
		return (chars_printed);
	}

	if (has_hashtag)
	{
		_putchar('0');
		chars_printed++;
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
