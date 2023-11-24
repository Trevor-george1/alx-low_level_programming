#include "main.h"
/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: number
 * @index: index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
