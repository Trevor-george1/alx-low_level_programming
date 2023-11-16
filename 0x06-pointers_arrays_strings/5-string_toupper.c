#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes lowercase letters to upper
 * @s: pointer to string
 * Return: char
 */
char *string_toupper(char *s)
{
	int i = 0;
	int i = 0;

	while (s[i] != '\0')

	{
		if (s[i] <= 122 && s[i] >= 97)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}

