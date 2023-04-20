#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num_of_bytes;
	char *p;
	int i;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}
	num_of_bytes = atoi(argv[1]);
	if (num_of_bytes < 0)
	{
	printf("Error");
	return (1);
	exit(2);
	}
	p = (char *)main;
	for (i = 0; i < num_of_bytes; i++)
	{
	if (i == num_of_bytes - 1)
	{
	printf("%02hhx\n", p[i]);
	break;
	}
	printf("%02hhx ", p[i]);
	}
	return (0);
}
