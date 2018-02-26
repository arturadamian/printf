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
	len = printf("%d\n", NULL);
	printf("%d\n", len);
	len = _printf("%d\n", NULL);
	printf("%d\n", len);
	len = printf("%%d\n", 5);
	printf("%d\n", len);
	len = _printf("%%d\n", 5);
	printf("%d\n", len);
	len = printf("%   %d\n", 5);
	printf("%d\n", len);
	len = _printf("%   %d\n", 5);
	printf("%d\n", len);
	len = _printf("Temperature is %dc\n", 4);
	printf("%d\n", len);
	len = printf("Temperature is %dc\n", 4);
	printf("%d\n", len);
	len = 2;
	len = _printf("Length:[%d, %i]\n", len, len);
	printf("%d\n", len);
	len = 2;
	len = printf("Length:[%d, %i]\n", len, len);
	printf("%d\n", len);
	len = _printf("Negative:[%d]\n", -762534);
	printf("%d\n", len);
	len = printf("Negative:[%d]\n", -762534);
	printf("%d\n", len);
	len = _printf("hex, dec, oct:[%d, %d, %d]\n", 0xf, 15, 017);
	printf("%d\n", len);
	len = printf("hex, dec, oct:[%d, %d, %d]\n", 0xf, 15, 017);
	printf("%d\n", len);
	len = printf("%       d\n", 3);
	printf("%d\n", len);
	len = _printf("%       d\n", 3);
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%d\n");
	printf("%d\n", len);
	len = printf("%d\n");
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%d\n", INT_MAX);
	printf("%d\n", len);
	len = printf("%d\n", INT_MAX);
	printf("%d\n", len);
	len = _printf("%d\n", INT_MIN);
	printf("%d\n", len);
	len = printf("%d\n", INT_MIN);
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%d\n", 0);
	printf("%d\n", len);
	len = printf("%d\n", 0);
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%d, %d\n", 5);
	printf("%d\n", len);
	len = printf("%d, %d\n", 5);
	printf("%d\n", len);


	return (0);
}
