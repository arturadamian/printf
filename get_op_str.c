#include "holberton.h"
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
	int leading_sp = 0;
	int i;

	while (*s == ' ')
	{
		s++;
		leading_sp++;
	}
	/* +1 for next character, +1 for \0 */
	op_str = malloc(leading_sp + 1 + 1);
	if (op_str == NULL)
		return (NULL);

	for (i = 0; i < leading_sp; i++)
		op_str[i] = ' ';
	op_str[leading_sp + 1] = '\0';
	_strncpy(op_str + leading_sp, s, 1);

	return (op_str);

}
