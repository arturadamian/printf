#include "holberton.h"


/**
 * rot13 - encodes a string in rot13
 * @s: pointer to a string
 *
 * Return: result
 */
char *rot13(char *s)
{
	int i;
	int z;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (z = 0; x[z] != '\0'; z++)
		{
			if (s[i] == x[z])
			{
				s[i] = y[z];
				break;
			}
		}
	}
	return (s);
}
