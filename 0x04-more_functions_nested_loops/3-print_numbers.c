#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * Return: ...
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	}
	putchar('\n');
}
