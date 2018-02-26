#include "holberton.h"

/**
 * is_valid_os - checks if a string is a valid op string
 * @os: the op string
 *
 * Return: 1 for valid, 0 for invalid, -1 for error
 */
int is_valid_os(char *os)
{
	while (*os == ' ')
		os++;
	switch (*os)
	{
	case '\0':
		return (-1);
	case 'c':
	case 's':
	case '%':
	case 'd':
	case 'i':
	case 'b':
		return (1);
	default:
		return (0);
	}
}
