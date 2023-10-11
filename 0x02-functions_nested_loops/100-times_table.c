#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print times table
 * @n: varibale to be used
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				prod = i * j;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod % 10) % 10 + 48);
				} else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
