#include "main.h"
/**
 * print_diagonal - draws diagonal line
 * @n: number to be checked
 * where n is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	for (x = 0; x < i; x++)
	{
	putchar(32);
	}	
	putchar(92);
	putchar('\n');
	}
	}
}
