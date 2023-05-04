#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary of a number
 * @n: the number to be converted.
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int count = 0;

	while (m != 0)
	{
		if ((n & m) != 0)
		{
		putchar('1');
		count = 1;
		}
		else if (count)
		{
			putchar('0');
		}
		m = m >> 1;
	}
	if (!count)
	{
	putchar('0');
	}
}
