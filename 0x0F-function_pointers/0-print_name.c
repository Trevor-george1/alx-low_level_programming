#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_name - prints a name
 * @f: pointer to function print_name
 * @name: name to be printed
 * Return: Nothing
 */

void print_name(char *name, void(*f)(char *n))
{
	if (!f || !name)
	return;
	f(name);
}
