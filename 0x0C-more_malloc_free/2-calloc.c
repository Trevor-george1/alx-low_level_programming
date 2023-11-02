#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - fills memory with constant byte
 * @s: memory to fill
 * @b: bytes to fill
 * @n: number
 * Return: pointer to filled area
 */

char *_memset(char *s, char b, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: size of array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	_memset(p, 0, nmemb * size);
	return (p);
}
