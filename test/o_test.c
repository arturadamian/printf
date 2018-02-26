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

	int len;

	printf("--------------\n");

	len = _printf("%o\n", INT_MAX);
	printf("%d\n", len);
	len = printf("%o\n", INT_MAX);
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%o\n", UINT_MAX);
	printf("%d\n", len);
	len = printf("%o\n", UINT_MAX);
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%o\n", -1);
	printf("%d\n", len);
	len = printf("%o\n", -1);
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%o\n", INT_MIN);
	printf("%d\n", len);
	len = printf("%o\n", INT_MIN);
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%o\n", 0);
	printf("%d\n", len);
	len = printf("%o\n", 0);
	printf("%d\n", len);

	printf("--------------\n");

	return (0);
}
