#include <stdio.h>
#include <limits.h>
#include "../holberton.h"
int main()
{
	int len;
	len = _printf("--------------------\n");
	len = _printf("%%lx = ", INT_MAX);
	len = _printf("%lx\n", INT_MAX);
	len = _printf("--------------------\n");
	len = _printf("--------------------\n");
	len = _printf("%%hx = ", INT_MAX);
	len = _printf("%hx\n", INT_MAX);
	len = _printf("--------------------\n");
	len = _printf("--------------------\n");
	len = _printf("%%hlx = ", INT_MAX);
	len = _printf("%hlx\n", INT_MAX);
	len = _printf("--------------------\n");
	len = _printf("--------------------\n");
	len = _printf("%%lhx = ", INT_MAX);
	len = _printf("%lhx\n", INT_MAX);
	len = _printf("--------------------\n");
	len = _printf("--------------------\n");
	len = _printf("%%hlhx = ", INT_MAX);
	len = _printf("%hlhx\n", INT_MAX);
	len = _printf("--------------------\n");
	len = _printf("--------------------\n");
	len = _printf("%%lhlx = ", INT_MAX);
	len = _printf("%lhlx\n", INT_MAX);
	len = _printf("--------------------\n");
	len = _printf("--------------------\n");
	len = _printf("%%+lhlx = ", INT_MAX);
	len = _printf("%+lhlx\n", INT_MAX);
	len = _printf("--------------------\n");
	len = _printf("--------------------\n");
	len = _printf("%%lhl+x = ", INT_MAX);
	len = _printf("%lhl+x\n", INT_MAX);
	len = _printf("--------------------\n");
	len = _printf("--------------------\n");
	len = _printf("--------------------\n");
	len = _printf("%%+lx = ", INT_MAX);
	len = _printf("%+lx\n", INT_MAX);
	len = _printf("--------------------\n");
	len = _printf("--------------------\n");
	len = _printf("%%+hx = ", INT_MAX);
	len = _printf("%+hx\n", INT_MAX);
	len = _printf("--------------------\n");
	len = _printf("--------------------\n");
	len = _printf("%%l+x = ", INT_MAX);
	len = _printf("%l+x\n", INT_MAX);
	len = _printf("--------------------\n");
	len = _printf("--------------------\n");
	len = _printf("%%h+x = ", INT_MAX);
	len = _printf("%h+x\n", INT_MAX);
	len = _printf("--------------------\n");
	len = _printf("--------------------\n");
	len = _printf("%%hTT+x = ", INT_MAX);
	len = _printf("%hTT+x\n", INT_MAX);
	len = _printf("--------------------\n");
	len = _printf("--------------------\n");



	return (len);
}
