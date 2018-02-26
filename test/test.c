#include <stdio.h>
#include "../holberton.h"
int main()
{
	int len;
	/* len = printf("%       d\n", 3); */
	/* printf("%d\n", len); */
	/* len = _printf("%       d\n", 3); */
	/* printf("%d\n", len); */
	/* len = printf("%   ", 3); */
	/* printf("%d\n", len); */
	/* len = _printf("%   ", 3); */
	/* printf("%d\n", len); */
	len = printf("abc%T abc\n", 3);
	printf("%d\n", len);
	len = _printf("abc%T abc\n", 3);
	printf("%d\n", len);
	len = printf("abc%   T abc\n", 3);
	printf("%d\n", len);
	len = _printf("abc%   T abc\n", 3);
	printf("%d\n", len);
	len = printf("%", 3);
	printf("%d\n", len);
	len = _printf("%", 3);
	printf("%d\n", len);
	/* len = printf("abc%", 3); */
	/* printf("%d\n", len); */
	/* len = _printf("abc%", 3); */
	/* printf("%d\n", len); */
	return (0);
}
