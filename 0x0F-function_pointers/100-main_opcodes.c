#include <stdio.h>
#include <stdlib.h>

/**
 * print_codes - prints opcodes of its own main
 * @no_of_bytes: number of bytes
 * Return: Nothing
 */

void print_codes(int no_of_bytes)
{
	int i;
	unsigned char *p = (unsigned char *) print_codes;

	for (i = 0; i < no_of_bytes; i++)
	{
	printf("%02x", p[i]);
	}
	printf("\n");
}

/**
 * main - entry point of program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num_of_bytes = 0;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	num_of_bytes = atoi(argv[1]);
	if (num_of_bytes < 0)
	{
	printf("Error");
	return (2);
	}
	print_codes(num_of_bytes);
	return (0);
}
