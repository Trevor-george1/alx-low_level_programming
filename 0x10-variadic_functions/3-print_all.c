#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i;
	char c;
	float f;
	char *s;
	int j = 0;
	int sep = 0;

	va_start(list, format);
	while (format == NULL)
	{
	printf("\n");
	return;
	}
	while (format[j])
	{
	switch (format[j])
	{
	case 'c':
	c = va_arg(list, int);
	printf("%d", c);
	break;
	case 'i':
	i = va_arg(list, int);
	printf("%d", i);
	break;
	case 'f':
	f = va_arg(list, double);
	printf("%f", f);
	break;
	case 's':
	s = va_arg(list, char *);
	if (s == NULL)
	{
	printf("(nil)");
	}
	printf("%s", s);
	break;
	}
	if (format[j + 1] != '\0' && sep)
	{
	printf(", ");
	}
	if (format[j] == 'c' || format[j] == 'i' || format[j] == 'f' || format[j] == 's')
	{
	sep = 1;
	}
	j++;
	}
	va_end(list);
	printf("\n");
}
