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
	printf("%c", c);
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
	if (s != NULL)
	{
	printf("%s", s);
	}
	else
	{
	printf("(nil)");
	break;
	}
	}
	if ((format[j] == 'c' || format[j] == 'i' ||
		format[j] == 'f' || format[j] == 's')
		&& format[(j + 1)] != '\0')
	printf(", ");
	j++;
	}
	va_end(list);
	printf("\n");
}
