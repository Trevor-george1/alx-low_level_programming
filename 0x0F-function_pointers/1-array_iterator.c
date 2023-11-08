#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * given as operator
 * @array: pointer to array
 * @size: size of array
 * @action: poniter to function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);v
	}
	}
}
