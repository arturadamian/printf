#include "holberton.h"
#define BUFFERSIZE 1024

/**
 * op_print_ptr - prints a hex unsigned number using only _putchar, lowercase
 * with preceding 0x
 * @valist: va_list with the number to be printed
 *
 * Return: number of chars printed
 */
int op_print_ptr(va_list valist, char *flag_str)
{
	unsigned long int n = va_arg(valist, void *);
	int temp;
	int chars_printed = 0, i;
	char hex[BUFFERSIZE];

	while (*flag_str)
		flag_str++;

	if (n == 0)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		return (5);
	}

	_putchar('0');
	_putchar('x');
	chars_printed = 2;

	i = 0;
	while (n != 0)
	{

		temp = n % 16;
		hex[i] = tohex(temp);
		n /= 16;
		i++;
	}

	while (--i >= 0)
	{
		_putchar(hex[i]);
		chars_printed++;
	}

	return (chars_printed);
}
