#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all parameters
 * @n: size of parameters
 * @...: list of variables
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
