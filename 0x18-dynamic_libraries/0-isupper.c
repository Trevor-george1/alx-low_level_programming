#include "main.h"
#include <stdio.h>
/**
 * _isupper - function that checks for uppercase letters
 * @c: Varibale to be checked
 * Return: 1 on success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
