#include "main.h"
#include <stdio.h>
/**
 * main - print fibonacci from 1 to 50
 * Return: 0
 */
int main(void)
{
	int first, second, next, i;
	int target = 50;

	first = 1;
	second = 2;
	next = first + second;
	printf("%d, %d, ", first, second);
	for (i = 3; i <= target; i++)
	{
		next = first + second;
		printf("%d", next);
		if (i < target)
		{
			printf(", ");
		}
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
