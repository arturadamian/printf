#include "holberton.h"

/**
 * get_fullfunc_str - extracts the string representing the format
 * @s: a pointer to the format
 *
 * this function takes a pointer to the char *, because we want to increment
 * the char * itself for use in _printf
 *
 * Return: a null terminated string with the proper op code in the string.
 */
char *get_fullfunc_str(const char *s)
{
	char *fullfunc_str;
	int i;

	i = 0;
	while (isflag(s[i]))
	{
		i++;
	}

	/* +1 for next character, +1 for \0 */
	fullfunc_str = malloc(i+2);
	if (fullfunc_str == NULL)
		return (NULL);

	_strncpy(fullfunc_str, s, i + 1); /* copy all flags and the char after */
	fullfunc_str[i + 1] = '\0';	    /* hardcode the null terminator */

	return (fullfunc_str);

}
