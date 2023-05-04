#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 ata given index
 * @n: number
 * @index: index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	num = 1UL << index;
	*n = *n | num;
	return (1);
}
