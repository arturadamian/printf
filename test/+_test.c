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

	/* len = _printf("%u\n", INT_MAX); */
	/* printf("%d\n", len); */
	len = printf("%+   +i\n", INT_MAX);
	printf("%d\n", len);

	printf("--------------\n");

	/* len = _printf("%u\n", UINT_MAX); */
	/* printf("%d\n", len); */
	/* len = printf("%u\n", UINT_MAX); */
	/* printf("%d\n", len); */

	/* printf("--------------\n"); */

	/* len = _printf("%u\n", -1); */
	/* printf("%d\n", len); */
	/* len = printf("%u\n", -1); */
	/* printf("%d\n", len); */

	/* printf("--------------\n"); */

	/* len = _printf("%u\n", INT_MIN); */
	/* printf("%d\n", len); */
	/* len = printf("%u\n", INT_MIN); */
	/* printf("%d\n", len); */

	/* printf("--------------\n"); */

	/* len = _printf("%u\n", 0); */
	/* printf("%d\n", len); */
	/* len = printf("%u\n", 0); */
	/* printf("%d\n", len); */

	/* printf("--------------\n"); */

	return (0);
}
