#include "main.h"
/**
 * print_square - prints a square followed by a new line
 * @size: number been checked
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	putchar('#');
	}
	putchar('\n');
	}
	}
}
