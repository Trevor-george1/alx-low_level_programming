#include "main.h"
#include <stdio.h>
/**
 * _islower - checks for lowercase character
 * @c: character to be cheked
 * Return: 1 on success
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
