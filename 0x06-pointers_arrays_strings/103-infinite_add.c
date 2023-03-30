#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * infinite_add - adds two numbers
 * @n : first number
 * @m: second number
 * @r: store the result
 * @size_r: size of variable r
 * Return: r
 */

char *infinite_add(char *n, char *m, char *r, int size_r)
{
	int len_n = strlen(n);
	int len_m = strlen(m);
	int i, j, digit_n, digit_m, digit_sum, k;
	int len_sum = (len_n > len_m ? len_n : len_m) + 1;
	int carry = 0;

	if (len_sum > size_r)
	{
	printf("Error\n");
	return NULL;
	}
	for (i = len_n - 1, j = len_m - 1, k = len_sum - 1; i >= 0 || j >= 0 || carry > 0; i--, j--, k--)
	{
	digit_n = (i >= 0 ? n[i] - '0' : 0);
	digit_m = (j >= 0 ? m[j] - '0' : 0);
	digit_sum = digit_n + digit_m + carry;
	carry = digit_sum / 10;
	digit_sum %= 10;
	r[k] = digit_sum + '0';
	}
	r[len_sum] = '\0';
	while (r[0] == '0' && len_sum > 1)
	{
	r++;
	len_sum--;
	}
	return (r);
}
