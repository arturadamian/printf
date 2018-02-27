#include "holberton.h"

/**
 * handle_flags_invalid_specifier - handles flags for when op_str is invalid
 * @flag_str: string of flags
 *
 * Return: number of chars printed
 */
int handle_flags_invalid_specifier(char *flag_str)
{
	int has_sp = 0;
	int has_plus = 0;
	int has_hashtag = 0;
	int chars_printed = 0;

	while (*flag_str)
	{
		if (*flag_str == ' ')
			has_sp = 1;
		if (*flag_str == '+')
			has_plus = 1;
		if (*flag_str == '#')
			has_hashtag = 1;
		flag_str++;
	}

	if (has_hashtag)
	{
		_putchar('#');
		chars_printed++;
	}
	if (has_sp)
	{
		_putchar(' ');
		chars_printed++;
	}
	if (has_plus)
	{
		_putchar('+');
		chars_printed++;
	}

	return (chars_printed);
}
