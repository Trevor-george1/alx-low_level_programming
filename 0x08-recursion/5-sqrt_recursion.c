#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be checked
 * Return: -1 if n has no square root
 */

int _sqrt_recursion(int n)
{
	return (_helper(1, n));

}
/**
 * _helper - function that seraches for square root
 * @n: number to be checked
 * @b: base number to check
 * Return: -1 if start is moe than end else square root
 */
int _helper(int n, int b)
{
	if (n * n == b)
	return (n);
	if (n * n > b)
	return (-1);
	return (_helper(n + 1, b));
}
