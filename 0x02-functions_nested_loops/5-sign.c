#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the nummber been checked
 * Return: 1 if n is greate then zero and 0 if n is zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n == 0)
	{
	_putchar(45);
	return (0);
	}
	else
	{
	_putchar(48);
	return (0);
	}



}
