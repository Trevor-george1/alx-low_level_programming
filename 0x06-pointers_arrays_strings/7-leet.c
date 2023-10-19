#include "main.h"
#include <stdio.h>
/**
 * *leet - function that encodes a string into 1337
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	int c, i;

	int u[] = {65, 69, 79, 84, 76};
	int l[] = {97, 101, 111, 116, 108};
	int n[] = {52, 51, 48, 55, 49};

	while (s[c] != '\0')
	{

	for (i = 0; i < 5; i++)
	{
		if (s[c] == u[i] || s[c] == l[i])
		{
			s[c] = n[i];
			break;
		}
	}
	c++;
	}
	return (s);
}
