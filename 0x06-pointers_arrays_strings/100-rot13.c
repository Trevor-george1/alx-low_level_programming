#include <stdio.h>
#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: encoded string
 */
char *rot13(char *s)
{
	char b;

	while (*s != '\0')
	{
		if ((*s >= 'a' && *s <= 'z') || 
		(*s >= 'A' && *s <= 'Z'))
		{
			b = (*s >= 'a') ? 'a' : 'A';
			*s = ((*s - b +  13) % 26) + b;
		}
		s++;
	}
	return (s);
}
