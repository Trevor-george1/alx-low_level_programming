#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: char to be checked
 * Return: 1 on success
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
