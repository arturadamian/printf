#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);

/**
 * op_func - Typedef for operator function
 * @op_func: betty thinks this is a function
 * Return: for some reason betty wants this
 */
typedef	void (*op_func)(void *p);

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
#endif
