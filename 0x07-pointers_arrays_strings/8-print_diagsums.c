#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int x;
	int s1 = 0, s2 = 0;

	for (x = 0; x < size; x++)
	{
	s1 += *(a + x * size + x);
	s2 += *(a + x * size + (size - 1 - x));
	}
	printf("%d, %d\n", s1, s2);
}
