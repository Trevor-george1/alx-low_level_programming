#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: count
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int count;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			count = s1[i] - s2[i];
			break;
		}
		else
		{
			count = s1[i] - s2[i];
		}
		i++;
	}
	return (count);
}
