#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes of its own main
 * @argc: number of arguments
 * @argv: pointer to string of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, b;
	char *p = (char *) main;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < b; i++)
	{
		printf("%02x", p[i] & 0xFF);
		if (i != b - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
