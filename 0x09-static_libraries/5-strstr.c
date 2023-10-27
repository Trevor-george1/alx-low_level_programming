#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string 1
 * @needle: string 2
 * Return: strng
 */
char *_strstr(char *haystack, char *needle)
{
	char *b, *p;

	while (*haystack)
	{
		b = haystack;
		p = needle;

		while (*p != '\0' && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (!*p)
			return (b);
		haystack++;
	}
	return (NULL);
}
