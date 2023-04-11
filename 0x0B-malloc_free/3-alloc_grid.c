#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * of integers
 * @width: width of the array
 * @height: height of the array
 * Return: ointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (height <= 0 || width <= 0)
	{
	return (NULL);
	}
	array = malloc(height * sizeof(int*));
	if (array == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	array[i] = malloc(width * sizeof(int));
	if (array[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(array[j]);
	}
	free(array);
	return (NULL);
	}
	}
	return (array);
}
