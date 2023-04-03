#include "main.h"
#include <string.h>
/**
 * _strstr - locates a sub string
 * @needle: to be looked at
 * @haystack: looks for
 * Return: haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int n = strlen(needle);
	int i, j;

	for (i = 0; haystack[i + n - 1] != '\0'; i++)
	{
	j = 0;
	while (j < n && haystack[i + j] == needle[j])
	{
	j++;
	}
	if (j == n)
	{
	return (&haystack[i]);
	}
	}
	return (NULL);
}
