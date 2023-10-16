#include <stdio.h>
/**
 * swap_int - function that swaps the value of two ints
 * @a: number 1
 * @b: number 2
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
