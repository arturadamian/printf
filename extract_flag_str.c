/**
 * extract_flag_str - extracts the flag_str from the fullfunc_str
 * @fullfunc_str: the string with both flags and op
 *
 * Return: string with the op_str
 */
char *extract_flag_str(char *fullfunc_str)
{
	char flag_str[] = {'f', 'f', 'f', '\0'};
	int contains_plus = 0;

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
	if (contains_plus):
		flag_str[0] = 'f';

	return (flag_str);
}
