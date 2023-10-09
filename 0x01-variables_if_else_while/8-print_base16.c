#include <stdio.h>
/**
 * main - print base 16 numbers lowercase
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (j = 97; j <= 102; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
