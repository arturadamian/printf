#include "holberton.h"

/**
 * isflag - checks if a character is a valid flag character
 * @c: the character to be checked
 *
 * Return - 1 if true, 0 if false
 */
int isflag(char c)
{
	switch (c)
	{
	case ' ':
	case '+':
	case '#':
		return (1);
	default:
		return (0);
	}
}

/**
 * get_op_str - extracts the string representing the format
 * @s: a pointer to the format
 *
 * this function takes a pointer to the char *, because we want to increment
 * the char * itself for use in _printf
 *
 * Return: a null terminated string with the proper op code in the string.
 */
char *get_op_str(const char *s)
{
	char *op_str;
	int i;

	i = 0;
	while (isflag(s[i]))
	{
		i++;
	}

	/* +1 for next character, +1 for \0 */
	op_str = malloc(i+2);
	if (op_str == NULL)
		return (NULL);

	_strncpy(op_str, s, i + 1); /* copy all flags and the char after */
	op_str[i + 1] = '\0';	    /* hardcode the null terminator */

	return (op_str);

}
