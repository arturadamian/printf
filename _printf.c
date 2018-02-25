#include "holberton.h"
#define CONVERSION_SPECIFIER '%'

int _printf(const char *format, ...)
{
	int chars_printed = 0;
	op_func f;
	va_list valist;
	char *op_str;

	va_start(valist, format);

	while (format != NULL && *format)
	{
		if (*format == CONVERSION_SPECIFIER) /* hit '%' */
		{
			format++;
			op_str = get_op_str(format);
			if (op_str == NULL)
				return (-1);
			format++;
			f = get_op_func(op_str);
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
