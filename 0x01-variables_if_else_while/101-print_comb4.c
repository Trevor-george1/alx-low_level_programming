#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
*/
int main(void)
{
	int i, p, d;

	for (i = '0'; i <= '9'; i++)
	{
	for (p = i + 1; p <= '9'; p++)
	{
	for (d = p + 1; d <= '9'; d++)
	{
	if ((p != i) != d)
	{
	putchar(i);
	putchar(p);
	putchar(d);
	if (i == '7' && d == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);



}
