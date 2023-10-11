#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: number to be checked
 * Return: last digit
 */
int print_last_digit(int i)
{
	int last;

	if (i < 0)
		last = -1 * (i % 10);
	else
		last = i % 10;

	_putchar(last + '0');
	return (last);
}
