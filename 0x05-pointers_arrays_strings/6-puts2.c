#include <stdio.h>
/**
 * puts2 - print character of a string
 * @str: pointer to string
 * Return: Nohting
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
	printf("\n");
}


