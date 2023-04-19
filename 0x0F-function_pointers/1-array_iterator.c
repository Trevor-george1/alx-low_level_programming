#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - executes a function on each element of array
 * @size: size of array
 * @array: pointer to array
 * @action: pointer to array_iterator
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!action || !array)
	return;
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
