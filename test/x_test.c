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

		len = _printf("%x\n", i);
		printf("%d\n", len);
		len = printf("%x\n", i);
		printf("%d\n", len);

	}

	printf("--------------\n");

	len = _printf("%x\n", INT_MAX);
	printf("%d\n", len);
	len = printf("%x\n", INT_MAX);
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%x\n", UINT_MAX);
	printf("%d\n", len);
	len = printf("%x\n", UINT_MAX);
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%x\n", -1);
	printf("%d\n", len);
	len = printf("%x\n", -1);
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%x\n", INT_MIN);
	printf("%d\n", len);
	len = printf("%x\n", INT_MIN);
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%x\n", 0);
	printf("%d\n", len);
	len = printf("%x\n", 0);
	printf("%d\n", len);

	printf("--------------\n");

	return (0);
}
