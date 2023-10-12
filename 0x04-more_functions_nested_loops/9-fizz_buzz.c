#include <stdio.h>
#include "main.h"
/**
 * main - enrty point
 * Return: Nothing
 */
int main(void)
{
	int i, j;

	i = 100;
	j = 1;
	while (j <= i)
	{
		if (j % 5 == 0 && j % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else if (j % 5 == 0)
		{
			printf("Buzz");
		}
		else if (j % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
		printf("%d", j);
		}
		j++;
		if (j != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
