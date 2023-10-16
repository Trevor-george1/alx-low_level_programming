#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert string to int
 * @s: pointer to string
 * Return: Int
 *
 */
int _atoi(char *s)
{
	int r = 0;
	int sign = 1;

	do
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			r = (r * 10) + (*s - '0');
		else if (r > 0)
			break;
	} while (*s++);
	return (r * sign);
}
