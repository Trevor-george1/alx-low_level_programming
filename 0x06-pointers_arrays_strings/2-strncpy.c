#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: bytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
