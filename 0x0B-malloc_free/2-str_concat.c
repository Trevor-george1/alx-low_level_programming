#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j = 0;
	int len1, len2 = 0;
	char *a;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	a = malloc((len1 * sizeof(char)) + (len2 * sizeof(char)));

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		a[i] = s2[j];
		i++;
	}
	a[i] = '\0';
	return (a);
}
