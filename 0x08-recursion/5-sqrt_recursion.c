#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be checked
 * Return: -1 if n has no square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	return (n);
	return (_helper(n, 1, n / 2));

}
/**
 * _helper - function that seraches for square root
 * @n: number to be checked
 * @start: start of number
 * @end: end of number
 * Return: -1 if start is moe than end else square root
 */
int _helper(int n, int start, int end)
{
	int m = (start + end) / 2;

	if (m * m == n)
	{
	return (m);
	}
	if (start >= end)
	{
	return (-1);
	}
	if (m * m > n)
	{
	return (_helper(n, start, m - 1));
	}
	else
	return (_helper(n, m + 1, end));
}
