#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int a = 0x76543210;
	char *x = (char *)&a;

	if (*x == 0x10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
