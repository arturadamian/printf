#include "holberton.h"

int is_op_specifier(const char c)
{
	switch (c)
	{
	case 'c':
	case 's':
	case 'i':
	case 'd':
		return (1);
	default:
		return (0);
	}

	return (0);
}

/**
 * get_op_str - extracts the string representing the format
 * @s a pointer to the format
 *
 * this function takes a pointer to the char *, because we want to increment
 * the char * itself for use in _printf
 *
 * Return: a null terminated string with the proper op code in the string.
 */
char *get_op_str(const char *s)
{
	char *op_str;

	op_str = malloc(2);
	if (op_str == NULL)
		return (NULL);
	op_str[1] = '\0';
	_strncpy(op_str, s, 1);

	return (op_str);

}
