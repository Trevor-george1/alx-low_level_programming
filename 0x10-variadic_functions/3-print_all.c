#include "variadic_functions.h"
/**
 * print_char - function that prints int
 * @arg: list of arguments
 * Retutn: Nothing
 */
void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - function that prints char
 * @arg: list of arguments
 * Return: Nothing
 */
void print_int(va_list arg)
{
	int n = va_arg(arg, int);

	printf("%d", n);
}

/**
 * print_float - function that prints float
 * @arg: list of arguments
 * Return: Nothing
 */
void print_float(va_list arg)
{
	float f = va_arg(arg, double);

	printf("%f", f);
}

/**
 * print_string - prints a string
 * @arg: list of arguments
 * Return: Nothing
 */
void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: pointer to string
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *separator = "";
	int i = 0, j = 0;
	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
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
			printf("%s", separator);
			funcs[j].print_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
