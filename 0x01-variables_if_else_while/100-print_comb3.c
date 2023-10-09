#include <stdio.h>
/**
 * main - entry point of program
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
