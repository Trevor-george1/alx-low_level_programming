#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function returns pointer to copy of string.
 * @str: string passed as parameter
 * Return: s
 */

char *_strdup(char *str)
{
	int size = strlen(str);
	char *s;

	if (str == NULL)
	{
	return (NULL);
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
	return (NULL);
	}
	strcpy(s, str);
	return (s);
	free(s);
}
