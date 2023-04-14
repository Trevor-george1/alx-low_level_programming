#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: memory address
 * Return: pointer to result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int length1, length2, i;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	length1 = strlen(s1);
	length2 = strlen(s2);
	if (n >= length2)
	{
	n = length2;
	}
	result  = malloc(length1 + n + 1);
	if (result == NULL)
	{
	return (NULL);
	}
	strcpy(result, s1);
	for (i = 0; i < n; i++)
	{
	result[length1 + i] = s2[i];
	}
	result[length1 + n] = '\0';
	return (result);
}
