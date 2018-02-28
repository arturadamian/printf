#include "holberton.h"

/**
 * extract_len_mods_str - extracts the op_str from the fullfunc_str
 * @fullfunc_str: the string with both flags and op
 *
 * Return: string with the op_str
 */
char *extract_len_mods_str(char *fullfunc_str)
{
	char *len_mods_str = malloc(2);
	if (len_mods_str == NULL)
		return (NULL);

	len_mods_str[0] = ' ';
	len_mods_str[1] = '\0';

	while (isflag(*fullfunc_str))
		fullfunc_str++;

	if (islen_mod(*fullfunc_str))
	    len_mods_str[0] = *fullfunc_str;

	return (len_mods_str);
}
