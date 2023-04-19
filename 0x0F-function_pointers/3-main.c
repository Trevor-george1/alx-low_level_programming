#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of program
 * @argc: number of arguments
 * @argv: array of elements
 * Return: Always success
 */

int main(int argc, char **argv)
{
	int a, b, result;
	int (*op)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
	printf("Error\n");
	return (99);
	}
	result = op(a, b);
	printf("%d\n", result);
	return (0);
}
