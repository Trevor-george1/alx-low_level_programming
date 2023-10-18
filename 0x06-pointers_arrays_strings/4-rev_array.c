#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse an array of int
 * @a: pointer to array of int
 * @n: size
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp, s;

	i = 0;
	s = n - 1;
	while (i < s)
	{
		temp = a[i];
		a[i] = a[s];
		a[s] = temp;
		i++;
		s--;
	}
}
