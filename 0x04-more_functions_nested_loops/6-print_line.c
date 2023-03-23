#include "main.h"
/**
 * print_line - draws a straightline where n is number
 * of times the character (_) should be printed
 * @n: number to be checked
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	putchar(95);
	}
	putchar('\n');
	}
}
