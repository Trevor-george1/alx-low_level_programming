#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: size of array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	p = malloc(sizeof(unsigned int) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = nmemb;
	}
	return (p);
}
