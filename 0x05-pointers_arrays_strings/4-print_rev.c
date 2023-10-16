#include <stdio.h>
/**
 * print_rev - string in reverse
 * @s: pointer tot str
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
