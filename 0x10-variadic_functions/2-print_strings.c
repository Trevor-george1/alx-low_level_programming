#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separator
 * @n: nu,ber of strings
 * ...: variable arguments
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
	char *s = va_arg(list, char *);
	if (s == NULL)
	{
	printf("nil\n");
	}
	printf("%s", s);
	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	va_end(list);
	printf("\n");
}
