#include <stdio.h>
/**
 * _strlen - returns the lenght of a string
 * @s: pointer to str
 * Return: Lenght
 */
int _strlen(char *s)
{
	int i = 0, count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
