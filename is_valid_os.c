#include "holberton.h"

int is_valid_os(char *os)
{
	while (*os == ' ')
		os++;
	switch (*os)
	{
	case '\0':
		return(-1);
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
