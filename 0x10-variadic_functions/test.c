#include "variadic_functions.h"
/**
 * print_char - print char
 */
void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - print int
 */
void print_int(va_list arg)
{
	int d = va_arg(arg, int);

	printf("%d", d);
}

/**
 * print_float - print float
 */
void print_float(va_list arg)
{
	float b = va_arg(arg, double);

	printf("%f", b);
}
/**
 * print_string - print string
 */
void print_string(va_list arg)
{
	char *c = va_arg(arg, char *);

	printf("%s", c);
}


void _printf(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	func_printer funcs[] = {
		{"c", print_char},
		{"d", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);
	
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			funcs[j].print_func(ap);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
