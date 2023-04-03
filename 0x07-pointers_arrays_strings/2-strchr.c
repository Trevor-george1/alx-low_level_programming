#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @c: the charactr to be cheked
 * @s: string
 * Return: first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	return (NULL);
}
