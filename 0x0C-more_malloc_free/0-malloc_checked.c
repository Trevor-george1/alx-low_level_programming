#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: variable stored in the memory
 * Return: pointer to memory address
 */

void *malloc_checked(unsigned int b)
{

	void *p;
	p = malloc(b);
	if (p == NULL)
	{
	exit(98);
	}
	return (p);
}
