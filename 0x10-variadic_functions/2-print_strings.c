#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints a string
 * @separator: sep
 * @n: number of strings
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	const char *new;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		new = va_arg(args, char *);
		if (new == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", new);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
