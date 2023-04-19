#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * f - prints a name
 *
 *
 * @n: char
 * Return: Nothing
 */
void *f(char *n)
{
	int len, i;

	len = strlen(n);
	for (i = 0; i < len; i++)
	putchar(n[i]);
	return (0);
}

/**
 * print_name - prints a name
 * @f: pointer to function print_name
 * @name: name to be printed
 * Return: Nothing
 */

void print_name(char *name, void(*f)(char *n))
{
	f(name);
}
