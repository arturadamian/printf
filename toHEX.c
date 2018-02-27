#include "holberton.h"


/**
 * toHEX - converts an unsigned int < 16 to hex character, capitalized
 * @n: input
 *
 * Return: hex character representation
 */
char toHEX(int n)
{
	if (n < 10)
		return ('0' + n);
	else
		return ('A' - 10 + n);
}
