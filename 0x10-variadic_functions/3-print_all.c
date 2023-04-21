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
	printf("%c", va_arg(list, char));
	break;
	case 'i':
	printf("%d", va_arg(list, int));
	break;
	case 'f':
	printf("%f", va_arg(list, double));
	break;
	case 's':
	s = va_arg(list, char *);
	if (!s)
	{
	printf("(nil)");
	break;
	}
	printf("%s", s);
	break;
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
