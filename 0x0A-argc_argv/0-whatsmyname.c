#include <stdio.h>
/**
 * main- prints the first argument
 * @argc: number of arguments
 * @argv: pointer to string of argments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
