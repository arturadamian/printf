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
	/* len = _printf("%"); */
	/* printf("\n%d\n", len); */
	/* len = printf("%"); */
	/* printf("\n%d\n", len); */
	/* len = _printf(" %"); */
	/* printf("\n%d\n", len); */
	/* len = printf(" %"); */
	/* printf("\n%d\n", len); */
	/* len = _printf("% "); */
	/* printf("\n%d\n", len); */
	/* len = printf("% "); */
	/* printf("\n%d\n", len); */

	len = _printf("%%");
	printf("\n%d\n", len);
	len = printf("%%");
	printf("\n%d\n", len);
	len = _printf("%%, %d\n", 6, 10);
	printf("\n%d\n", len);
	len = printf("%%, %d\n", 6, 10);
	printf("\n%d\n", len);


	return (0);
}
