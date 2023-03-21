#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: the character been checked
 * Return: 1 if c is a letter, lowercase or upper
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90 ) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
