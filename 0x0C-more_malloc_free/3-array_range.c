#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: half of array
 * @max: half of array
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *new_array;
	int i, size;

	if (min > max)
	{
	return (NULL);
	}
	size = max - min + 1;

	new_array = malloc(size * sizeof(int));
	if (new_array == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	new_array[i] = min + i;
	}
	return (new_array);
}
