#include "main.h"
/**
 * compare - compares two strings
 * @x: string 1
 * @y: string 2
 * Return: string
 */
int compare(char *x, char *y)
{
	while (*x && *y)
	{
		if (*x != *y)
		{
			return (0);
		}
		x++;
		y++;
	}
	return (*y == '\0');
}

/**
 * _strstr - locates a substring
 * @haystack: string 1
 * @needle: string 2
 * Return: strng
 */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
