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

	int len;/* , i; */
	/* char *c = "c"; */
	int kx = 9;
	int *k = &kx;
	int *j = 0;
	char *s = "string";

	/* for (i = 0; i <= 32; i++) */
	/* { */

	/* 	printf("--------------\n"); */

	/* 	len = _printf("%p\n", c); */
	/* 	printf("%d\n", len); */
	/* 	len = printf("%p\n", c); */
	/* 	printf("%d\n", len); */

	/* } */


	printf("--------------\n");

	len = _printf("%p\n", k);
	printf("%d\n", len);
	len = printf("%p\n", k);
	printf("%d\n", len);

	printf("--------------\n");

	len = _printf("%p\n", j);
	printf("%d\n", len);
	len = printf("%p\n", j);
	printf("%d\n", len);

	printf("--------------\n");


	len = _printf("%p\n", s);
	printf("%d\n", len);
	len = printf("%p\n", s);
	printf("%d\n", len);

	printf("--------------\n");


	return (0);
}
