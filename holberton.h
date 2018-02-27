#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#define NUM_FLAGS 3
int _putchar(const char c);
int _strlen(const char *s);
int _printf(const char *format, ...);
int _putsnnl(const char *str);
int _putSnnl(const char *str);
int _putRnnl(const char *s);
int _put_rev(const char *s);
int _strcmp(const char *s1, const char *s2);
char toHEX(int n);
char *_strncpy(char *dest, const char *src, int n);
char *skip_lead_sp(char *s);
char tohex(int n);

/**
 * op_func - Typedef for operator function
 * @op_func: betty thinks this is a function
 * Return: for some reason betty wants this
 */
typedef	int (*op_func)(va_list, char *);

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

int op_print_char(va_list valist, char *flag_str);
int op_print_string(va_list valist, char *flag_str);
int op_print_number(va_list valist, char *flag_str);
int op_print_binary(va_list valist, char *flag_str);
int op_print_unsigned(va_list valist, char *flag_str);
int op_print_octal(va_list valist, char *flag_str);
int op_print_hex(va_list valist, char *flag_str);
int op_print_HEX(va_list valist, char *flag_str);
int op_print_ptr(va_list valist, char *flag_str);
int op_print_S(va_list valist, char *flag_str);
int op_print_rot(va_list valist, char *flag_str);
int op_print_rev(va_list valist, char *flag_str);
int handle_flags_invalid_specifier(char *flag_str);

op_func get_op_func(const char *s);
char *get_fullfunc_str(const char *s);
char *extract_op_str(char *fullfunc_str);
char *extract_flag_str(char *fullfunc_str);
int is_err_os(char *os);
int isflag(char c);
#endif
