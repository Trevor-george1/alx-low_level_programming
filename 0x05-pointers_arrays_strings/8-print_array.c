#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @n: The number to be chedcked
 * @a: The array
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i != (n -1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
