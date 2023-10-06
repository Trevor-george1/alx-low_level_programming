#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q')
			continue;
		if (i == 'e')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
