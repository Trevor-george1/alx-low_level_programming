#include "main.h"
/**
 * _islower - checks for lowercase letters
 * Return: 1 for lowercase character or o for anything else
 * @c: The character to be checked
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
