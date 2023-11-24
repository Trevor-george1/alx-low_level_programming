#include "main.h"
/**
 * count_set_bits - count set bits
 * @x: number
 *
 * Return: count
 */

unsigned int count_set_bits(unsigned long int x)
{
	unsigned int count = 0;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
/**
 * flip_bits - return number of bits to flip to a number
 * @n: number
 * @m: number 2
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;

	return (count_set_bits(xor_result));
}
