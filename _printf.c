#include "holberton.h"
#define CONVERSION_SPECIFIER '%'

/**
 * _printf - prints stuff
 * @format: stuff
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int chars_printed;
	op_func f;
	va_list valist;
	char *fullfunc_str;
	char *op_str;
	char *flag_str;
	char *len_mods_str;

	if (format == NULL)	/* error */
		return (-1);

	chars_printed = 0;

	va_start(valist, format); /* initialize variable sized arg list */

	while (*format)	/* step through format string */
	{
		if (*format == CONVERSION_SPECIFIER) /* hit '%' */
		{
			format++;
			fullfunc_str = get_fullfunc_str(format);
			if (fullfunc_str == NULL)
				return (-1);

			format += _strlen(fullfunc_str);
/* if percentage not followed by any non-space character */
			if (is_err_os(fullfunc_str))
			{
				free(fullfunc_str);
				return (-1);
			}

			flag_str = extract_flag_str(fullfunc_str);
			/* handle malloc error */
			if (flag_str == NULL)
			{
				free(fullfunc_str);
				return (-1);
			}

			len_mods_str = extract_len_mods_str(fullfunc_str);
			if (len_mods_str == NULL)
			{
				free(flag_str);
				free(fullfunc_str);
				return (-1);
			}

			op_str = extract_op_str(fullfunc_str);
			/* handle malloc error */
			if (op_str == NULL)
			{
				free(fullfunc_str);
				free(flag_str);
				free(len_mods_str);
				return (-1);
			}

			f = get_op_func(op_str);

			if (f == NULL) /* not a valid specifier */
			{
				_putchar('%');
				chars_printed++;
				if (_strcmp(op_str, "%") != 0)
				{
					chars_printed += handle_flags_invalid_specifier(flag_str);
					chars_printed += _putsnnl(op_str);
				}
				free(op_str);
				free(flag_str);
				free(len_mods_str);
				free(fullfunc_str);
			}
			else
			{
				chars_printed += f(valist, flag_str, len_mods_str);
				free(op_str);
				free(flag_str);
				free(len_mods_str);
				free(fullfunc_str);
			}
		}
		else /* print the character */
		{
			_putchar(*format++);
			chars_printed++;
		}
	}

	va_end(valist);	/* cleanup valist */

	return (chars_printed);
}
