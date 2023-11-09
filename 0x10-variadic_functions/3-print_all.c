#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prnts anything
 * @format: format
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char current;
	int c;
	double f;
	char *strin;
	const char *p;

	p = format;
	va_start(args, format);
	while (*p != '\0')
	{
		current = *p;
		if (current == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (current == 'i')
		{
			c = va_arg(args, int);
			printf("%d", c);
		}
		else if (current == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (current == 's')
		{
			strin = va_arg(args, char *);
			if (strin == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", strin);
			}
		}
	p++;
	if (*p)
	{
		printf(", ");
	}
	}
	va_end(args);
	printf("\n");
}
