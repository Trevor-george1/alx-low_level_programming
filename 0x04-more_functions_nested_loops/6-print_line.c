#include "main.h"
#include <stdio.h>
/**
 * print_line - function that draws a straight line
 * @n: variable to be used
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
}
