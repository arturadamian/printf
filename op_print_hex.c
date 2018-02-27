#include "holberton.h"
#define BUFFERSIZE 1024

/**
 * op_print_hex - prints a hex unsigned number using only _putchar, lowercase
 * @valist: va_list with the number to be printed
 *
 * Return: number of chars printed
 */
int op_print_hex(va_list valist, char *flag_str)
{
	unsigned int n = va_arg(valist, unsigned int);
	int temp;
	int chars_printed = 0, i;
	char hex[BUFFERSIZE];
	int has_hashtag = 0;

        while (*flag_str)
        {
                if (*flag_str == '#')
                        has_hashtag = 1;
                flag_str++;
        }

	if (n == 0)
	{
		if (has_hashtag)
		{
			_putchar('0');
			_putchar('x');
			chars_printed += 2;
		}
		_putchar('0');
		chars_printed++;
		return (chars_printed);
	}

	i = 0;
	while (n != 0)
	{

		temp = n % 16;
		hex[i] = tohex(temp);
		n /= 16;
		i++;
	}

	if (has_hashtag)
	{
		hex[i++] = 'x';
		hex[i++] = '0';
	}

	while (--i >= 0)
	{
		_putchar(hex[i]);
		chars_printed++;
	}

	return (chars_printed);
}
