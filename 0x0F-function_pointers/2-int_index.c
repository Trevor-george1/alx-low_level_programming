#include "function_pointers.h"
#include <stdio.h>

/**
 * cmp - checks if number is a positive;
 * @a: variable to check
 * Return: Always success
 */

int cmp(int a)
{
	return (a > 0);
}

/**
 * int_index - searches for an integer
 * @array: array to be checked
 * @size: size of array
 * @cmp: pointer to int_index
 * Return: index of element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
	if (size <= 0)
	return (-1);
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	{
	return (i);
	}
	}
	}
	return (-1);
}
