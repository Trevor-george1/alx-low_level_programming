#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: separator
 * @n: number of int passed
 * ...: variable arguments
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int num;

	if (separator != NULL)
	{
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
	num = va_arg(list, int);
	printf("%d", num);
	if (i < n - 1)
	{
	printf("%s", separator);
	}
	}
	}
	va_end(list);
	printf("\n");
}
