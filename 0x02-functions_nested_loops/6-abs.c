#include "main.h"
#include <stdio.h>
/**
 * _abs - compute absolute value
 * @int: number
 * Return: 0 on success
 */
int _abs(int i)
{
	if (i > 0)
	{
	return (i);
	}
	else
	{
		i = i * -1;
		return(i);
	}
}
