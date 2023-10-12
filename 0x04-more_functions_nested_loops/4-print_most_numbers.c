#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints numbers except 2 and 4
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50)
			continue;
		if (i == 52)
			continue;
		else

			_putchar(i);
	}
	_putchar('\n');

}
