#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array using mallloc
 * @nmemb: array
 * @size: size of array
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int t_size;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	t_size = nmemb * size;
	p = malloc(t_size);
	if (p == NULL)
	{
	return (NULL);
	}
	memset(p, 0, t_size);
	return (p);
}
