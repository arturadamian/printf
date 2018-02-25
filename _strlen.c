#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
