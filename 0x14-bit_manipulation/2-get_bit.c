#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: index
 * Return: value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	m = 1UL << index;
	return ((n & m) ? 1 : 0);
}
