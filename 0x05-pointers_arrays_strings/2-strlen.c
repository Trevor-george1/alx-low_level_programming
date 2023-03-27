#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: number been checked
 * Return: Always Success
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
	i++;
	s++;
	}
	return (i);
}
