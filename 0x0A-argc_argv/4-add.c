#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - start of the program
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: Success as always
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, k, n;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	for (i = 1; i < argc; i++)
	{
	for (k = 0; argv[i][k] != '\0'; k++)
	{
	if (!isdigit(argv[i][k]))
	{
	printf("Error\n");
	return (1);
	}
	}
	n = atoi(argv[i]);
	if (n <= 0)
	{
	printf("Error\n");
	return (1);
	}
	sum = sum + n;
	}
	printf("%d\n", sum);
	return (0);
}
