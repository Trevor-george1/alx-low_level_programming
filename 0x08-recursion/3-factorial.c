#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number to be checked
 * Return: -1 if n is lower than 0 and 0 if n== 0
 */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
