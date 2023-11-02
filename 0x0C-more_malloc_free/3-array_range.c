#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min
 * @max: max
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		p[i] = i;
	}
	return (p);
}
