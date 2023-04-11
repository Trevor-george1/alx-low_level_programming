#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates 2 strings.
 * @s1: string one
 * @s2: string two
 * Return: pointer containing s1 and s2.
 */

char *str_concat(char *s1, char *s2)
{
	char *new;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	new = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (new == NULL)
	{
	return (NULL);
	}
	strcpy(new, s1);
	strcpy(new, s2);
	return (new);
	free(new);
}
