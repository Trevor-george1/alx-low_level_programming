#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * rev_string - reverse string
 *
 * @n : variable to be reversed
 * Return: nothing
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
	i++;
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
	temp = *(n + j);
	*(n + j) = *(n + i);
	*(n + i) = temp;
	}
}
/**
 * infinite_add - adds two numbers
 *
 * @n: first number
 * @m: Second
 * @r: store the result
 * @size_r: size of variable r
 * Return: r
 */

char *infinite_add(char *n, char *m, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n + i) != '\0')
	i++;
	while (*(m + j) != '\0')
	j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
	return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
	if (i < 0)
	val1 = 0;
	else
	val1 = *(n + i) - '0';
	if (j < 0)
	val2 = 0;
	else
	val2 = *(m + j) - '0';
	temp_tot = val1 + val2 + overflow;
	if (temp_tot >= 10)
	overflow = 1;
	else
	overflow = 0;
	if (digits >= (size_r - 1))
	return (0);
	*(r + digits) = (temp_tot % 10) + '0';
	digits++;
	j--;
	i--;
	}
	if (digits == size_r)
	return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}

