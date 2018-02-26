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

	int len, i;

	for (i = 0; i <= 32; i++)
	{
		printf("--------------\n");

		len = _printf("%X\n", i);
		printf("%d\n", len);
		len = printf("%X\n", i);
		printf("%d\n", len);

	}

	printf("--------------\n");

	len = _printf("%X\n", INT_MAX);
	printf("%d\n", len);
	len = printf("%X\n", INT_MAX);
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%X\n", UINT_MAX);
	printf("%d\n", len);
	len = printf("%X\n", UINT_MAX);
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%X\n", -1);
	printf("%d\n", len);
	len = printf("%X\n", -1);
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%X\n", INT_MIN);
	printf("%d\n", len);
	len = printf("%X\n", INT_MIN);
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%X\n", 0);
	printf("%d\n", len);
	len = printf("%X\n", 0);
	printf("%d\n", len);

	printf("--------------\n");

	return (0);
}
