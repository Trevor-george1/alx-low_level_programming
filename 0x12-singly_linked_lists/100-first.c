#include "stdio.h"
void start(void)__attribute__ ((constructor));

/**
 * start - prints before main
 * Return: Nothing
 */

void start(void)
{
	printf("You're beat! and yet, you must allow,
	\nI bore my house upon my back!\n");
}
