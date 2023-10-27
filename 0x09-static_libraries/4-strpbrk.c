#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: accept
 * Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	int pos = 0, check = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				check = 1;
				pos = i;
				break;
			}
		}
		if (check == 1)
		{
			break;
		}
		i++;
	}
	if (pos == 0)
	{
	return (NULL);
	}
	else
	{
		return (s + pos);
	}
}
