#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: int n
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
