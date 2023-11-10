#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - struct defining our print function
 * @symbol: character symbol
 * @print_func: function pointer that prints a data type
 */

typedef struct print
{
	char *symbol;
	void (*print_func)(va_list arg);
} func_printer;

#endif
