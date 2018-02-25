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
	/* Testing some edge cases */
	/* int len1, len2, len3, len4, len5, len6; */
	/* /\* _printf(""); *\/ */
	/* /\* _printf(NULL); *\/ */
	/* len1 = _printf("Character:[%c]\n", NULL); */
	/* len2 = printf("Character:[%c]\n", NULL); */
	/* len3 = _printf("Character:[%c]\n", 'H', 'A'); */
	/* len4 = printf("Character:[%c]\n", 'H', 'A'); */
	/* len5 = _printf("Character:[%c%c%c%c]\n", 'H', 'A'); */
	/* len6 = printf("Character:[%c%c%c%c]\n", 'H', 'A'); */
	/* printf("%d == %d\n%d == %d\n%d == %d\n", len1, len2, len3, len4, len5, len6); */



	int len = _printf("Let's try to printf a simple sentence.\n");
	int len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("hex, dec, oct:[%d, %d, %d]\n", 0xf, 15, 017);
	_printf("hex, dec, oct:[%i, %i, %i]\n", 0xf, 15, 017);
	printf("hex, dec, oct:[%d, %d, %d]\n", 0xf, 15, 017);
	printf("hex, dec, oct:[%i, %i, %i]\n", 0xf, 15, 017);


	/* unsigned int ui; */
	/* void *addr; */
	/* ui = (unsigned int)INT_MAX + 1024; */
	/* addr = (void *)0x7ffe637541f0; */
	/* _printf("Unsigned:[%u]\n", ui); */
	/* printf("Unsigned:[%u]\n", ui); */
	/* _printf("Unsigned octal:[%o]\n", ui); */
	/* printf("Unsigned octal:[%o]\n", ui); */
	/* _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui); */
	/* printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui); */
	/* _printf("Address:[%p]\n", addr); */
	/* printf("Address:[%p]\n", addr); */
	/* len = _printf("Percent:[%%]\n"); */
	/* len2 = printf("Percent:[%%]\n"); */
	/* _printf("Len:[%d]\n", len); */
	/* printf("Len:[%d]\n", len2); */
	/* _printf("Unknown:[%r]\n"); */
	/* printf("Unknown:[%r]\n"); */
	return (0);
}
