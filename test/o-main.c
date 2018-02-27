#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%r\n", " substitution ?");
	_printf("%r\n", "! substitution ?");

	printf("------------------------------------\n");
	printf("%r\n", "holberton");
        _printf("%r\n", "holberton");

	printf("------------------------------------\n");
	printf("%R\n", "");
        _printf("%R\n", "");

	printf("------------------------------------\n");
	printf("%R\n", "\0");
        _printf("%R\n", "\0");


	return (0);
}
