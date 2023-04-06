#include "main.h"
#include <string.h>
/**
 * is_pal_helper - checks for characters in the string
 * @str: string to be checked
 * @s: start character
 * @e: end character
 * Return: 1 if s = e
 */

int is_pal_helper(char *str, int s, int e)
{
	if (s == e)
	return (1);
	if (str[s] != str[e])
	return (0);
	if (s < e + 1)
	{
	return (is_pal_helper(str, s + 1, e - 1));
	}
	return (1);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to be checked
 * Return: 1 if string is aplindrome otherwise 0
 */

int is_palindrome(char *s)
{
	int l = strlen(s);

	if (l == 0)
	{
	return (1);
	}
	return (is_pal_helper(s, 0, l - 1));
}
