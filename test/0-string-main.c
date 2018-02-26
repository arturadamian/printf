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
	/* int len = _printf("Let's try to printf a simple sentence.\n"); */
	/* int len2 = printf("Let's try to printf a simple sentence.\n"); */
	/* int len3 = _printf("%c", '\n'); */
	/* int len4 = printf("%c", '\n'); */
	/* _printf("Length:[%d, %d, %d, %d]\n", len, len2, len3, len4); */

	int len = _printf("%");
	int len2 = printf("%");
	int len3 = _printf("%%");
	int len4 = printf("%%");
	_printf("Length:[%d, %d, %d, %d]\n", len, len2, len3, len4);

	return (0);
}
