#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any of set of bytes
 * @s: string
 * @accept: the variable to be searched for
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
	if (strchr(accept, *s))
	{
	return (s);
	}
	s++;
	}
	return (NULL);
}
