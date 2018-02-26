#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
int _putchar(const char c);
int _strlen(const char *s);
int _printf(const char *format, ...);
int _putsnnl(const char *str);
int _strcmp(const char *s1, const char *s2);
char *_strncpy(char *dest, const char *src, int n);

/**
 * op_func - Typedef for operator function
 * @op_func: betty thinks this is a function
 * Return: for some reason betty wants this
 */
typedef	int (*op_func)(va_list);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	op_func f;
} op_t;

int op_print_char(va_list valist);
int op_print_string(va_list valist);
int op_print_number(va_list valist);
int op_print_binary(va_list valist);
op_func get_op_func(const char *s);
char *get_op_str(const char *s);
#endif
