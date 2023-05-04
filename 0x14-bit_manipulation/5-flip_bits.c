#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits
 * you need to lip to get to another number
 * @n: num1
 * @m: num2
 * Return: nothing
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int count = 0;

	while (num != 0)
	{
		if (num & 1)
		{
			count++;
		}
		num >>= 1;
	}
	return (count);
}
