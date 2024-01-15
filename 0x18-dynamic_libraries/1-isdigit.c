#include "main.h"
#include <stdio.h>
/**
 * _isdigit - funcction that checks for a digit 0-9
 * @c: Variable to be checked
 * Return: 1 on success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
