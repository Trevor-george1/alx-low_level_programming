#include <stdio.h>
/**
 * main - start of the program
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: Success as always
 */

int main(int argc, char *argv[])
{	int i;
	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
