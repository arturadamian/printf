#include "holberton.h"
#define CONVERSION_SPECIFIER '%'

int _printf(const char *format, ...)
{
	int chars_printed = 0, is_valid;
	op_func f;
	va_list valist;
	char *op_str;
	char *os_temp;

	if (format == NULL)
		return (-1);

	va_start(valist, format);

	while (*format)
	{
		if (*format == CONVERSION_SPECIFIER) /* hit '%' */
		{
			format++;
			op_str = get_op_str(format);
			format += _strlen(op_str);

			is_valid = is_valid_os(op_str);

			if (is_valid == -1)
			{
				free(op_str);
				return (-1);
			}

			os_temp = skip_lead_sp(op_str);

			if (op_str[0] == ' ' && _strcmp(os_temp, "%") != 0)
			{
				_putchar(' ');
				chars_printed++;
			}

			f = get_op_func(op_str);

			if (f == NULL)
			{
				_putchar('%');
				chars_printed++;
				if (_strcmp(os_temp, "%") != 0)
					chars_printed += _putsnnl(skip_lead_sp(op_str));
				free(op_str);
				continue;
			}
				/* return (-1); */
			chars_printed += f(valist);
			free(op_str);
		}
		else
		{
			_putchar(*format++);
			chars_printed++;
		}
	}

	va_end(valist);

	return (chars_printed);
}
