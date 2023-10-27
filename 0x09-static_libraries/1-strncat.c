#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates a string
 * @dest: destination
 * @src: source
 * @n: bytes to copy
 * Return: Dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
