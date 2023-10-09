#include <stdio.h>
/**
 * main - prints all combination of single digit
 * Return: 0
 */
int main(void)
{
	int i;

	i = 48;
	while (i != 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
