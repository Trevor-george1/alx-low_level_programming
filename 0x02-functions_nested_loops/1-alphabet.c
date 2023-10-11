#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet a..z
 * Return: Nothing
 */
void print_alphabet(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
