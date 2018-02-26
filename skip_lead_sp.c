/**
 * skip_lead_sp - skips all the leading spaces of a string
 * @s: string
 *
 * Return: the string with spaces skipped
 */
char *skip_lead_sp(char *s)
{
	while (*s == ' ')
		s++;

	return (s);
}
