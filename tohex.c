/**
 * tohex - converts an unsigned int < 16 to hex character
 * @n: input
 *
 * Return: hex character representation
 */
char tohex(int n)
{
	if (n < 10)
		return ('0' + n);
	else
		return ('a' - 10 + n);
}
