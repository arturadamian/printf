#include "holberton.h"
#define CONVERSION_SPECIFIER '%'

int _printf(const char *format, ...)
{
	op_func f;
	va_list valist;
	char *op_str;

	va_start(valist, format);

	while (*format)
	{
		if (*format == CONVERSION_SPECIFIER) /* hit '%' and inc +1 */
		{
			format++;
			op_str = get_op_str(&format);
			f = get_op_func(op_str);
			f(valist);
			free(op_str);
		}
		else
			_putchar(*format++);
	}

	va_end(valist);

	return (0);
}
