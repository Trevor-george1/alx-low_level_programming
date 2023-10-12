#include "main.h"
#include <stdio.h>
/**
 * main - print fibonacci from 1 to 50
 * Return: 0
 */
int main(void)
{
	int first, second, next;
	int target = 50;

	first = 1;
	second = 2;
	next = first + second;
	printf("%d, %d, ", first, second);
	while (next <= target)
	{	
		printf("%d, ", next);
		first = second;
		second = next;
		next = first + second;
		}
	printf("\n");
	return (0);
}
