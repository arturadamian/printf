#include "holberton.h"
#define BUFFERSIZE 1024


/**
 * op_print_HEX - prints a hex unsigned number using only _putchar, lowercase
 * @valist: va_list with the number to be printed
 *
 * Return: number of chars printed
 */
int op_print_HEX(va_list valist, char *flag_str, char *len_mods_str)
{
	long unsigned int n = va_arg(valist, long unsigned int);
	int temp;
	int chars_printed = 0, i;
	char HEX[BUFFERSIZE];
	int has_hashtag = 0;
	int mod_l = 0;
	int mod_h = 0;

        while (*flag_str)
        {
                if (*flag_str == '#')
                        has_hashtag = 1;
                flag_str++;
        }
	while (*len_mods_str)
        {
                if (*len_mods_str == 'l')
			mod_l = 1;
		if (*len_mods_str == 'h')
                        mod_h = 1;
                len_mods_str++;
        }

	if (mod_l)
                ;
        else if (mod_h)
		n = cast_to_sui(n);
        else
                n = cast_to_ui(n);

        if (n == 0)
        {
                _putchar('0');
                chars_printed++;
                return (chars_printed);
        }
	i = 0;
	while (n != 0)
	{

		temp = n % 16;
		HEX[i] = toHEX(temp);
		n /= 16;
		i++;
	}

        if (has_hashtag)
        {
		HEX[i++] = 'X';
                HEX[i++] = '0';
        }

	while (--i >= 0)
	{
		_putchar(HEX[i]);
		chars_printed++;
	}

	return (chars_printed);
}
