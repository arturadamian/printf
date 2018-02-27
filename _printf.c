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
	char *op_str;
	char *os_no_lead_sp;

	if (format == NULL)	/* error */
		return (-1);

	chars_printed = 0;

	va_start(valist, format); /* initialize variable sized arg list */

	while (*format)	/* step through format string */
	{
		if (*format == CONVERSION_SPECIFIER) /* hit '%' */
		{
			format++;
			op_str = get_op_str(format);
			if (op_str == NULL)
				return (-1);
			format += _strlen(op_str);

/* if percentage not followed by any non-space character */
			if (is_err_os(op_str))
			{
				free(op_str);
				return (-1);
			}

			f = get_op_func(op_str);

			if (f == NULL) /* not a valid specifier */
			{
				_putchar('%');
				chars_printed++;
				os_no_lead_sp = skip_lead_sp(op_str);
				if (_strcmp(os_no_lead_sp, "%") != 0)
					chars_printed += _putsnnl(os_no_lead_sp);
				free(op_str);
			}
			else
			{
				chars_printed += f(valist);
				free(op_str);
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
