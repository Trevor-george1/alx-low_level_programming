#include "main.h"
/**
 * _prime_helper - helper function for checking prime number
 * @n: number to be checked
 * @i: divisor
 * Return: 1 if divisor is less than 1 and 0 if modulus of n is 0
 */

int _prime_helper(int n, int i)
{
	if (i <= 1)
	{
	return (1);
	}
	if (n % i == 0)
	{
	return (0);
	}
	return (_prime_helper(n, i - 1));
}
/**
 * is_prime_number - checks if number is a prime number
 * @n: number to be checked
 * Return: 0 if n is less than 1 and 1 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	return (_prime_helper(n, n - 1));
}
