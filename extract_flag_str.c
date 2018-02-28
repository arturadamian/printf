#include "holberton.h"

/**
 * extract_flag_str - extracts the flag_str from the fullfunc_str
 * @fullfunc_str: the string with both flags and op
 *
 * Return: string with the op_str
 */
char *extract_flag_str(char *fullfunc_str)
{
	int contains_plus = 0;
	int i;
	char *flag_str = malloc(NUM_FLAGS + 1);

	if (flag_str == NULL)
		return (NULL);

	for (i = 0; i < NUM_FLAGS; i++)
		flag_str[i] = 'f'; /* placeholder */
	flag_str[i] = '\0';	   /* hardcode null terminator */

	while (isflag(*fullfunc_str))
	{
		switch (*fullfunc_str)
		{
		case ' ':
			flag_str[0] = ' ';
			break;
		case '+':
			contains_plus = 1;
			flag_str[1] = '+';
			break;
		case '#':
			flag_str[2] = '#';
			break;
		default:
			break;
		}
		fullfunc_str++;
	}

	/* + always overrides sp according to man 3 printf */
	if (contains_plus)
		flag_str[0] = 'f';

	return (flag_str);
}
