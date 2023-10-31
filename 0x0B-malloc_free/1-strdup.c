#include "main.h"
#include <string.h>
/**
 * _strdup - returns pointer to copy of string
 * @str: string
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	s = malloc(sizeof(char) * len);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
