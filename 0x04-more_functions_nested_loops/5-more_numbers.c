#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 1-14 10 times
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			k = j;
			if (j > 9)
			{
			_putchar(1 + 48);
			k = j % 10;
			}
			_putchar(k + 48);
		}
		_putchar('\n');
	}
}
