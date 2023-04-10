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
	int n1, n2;
	int sum = 0;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	sum = n1 * n2;
	printf("%d\n", sum);
	return (0);
}
