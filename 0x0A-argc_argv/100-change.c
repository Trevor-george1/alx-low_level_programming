#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints coins for an amount of money
 * @argc: no of arguments
 * @argv: pointer to string of arguments
 * Return: coins
 */
int main(int argc, char *argv[])
{
	int n;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == 45)
	{
		printf("0\n");
		return (0);
	}
	n = atoi(argv[1]);
	coins += n / 25;

	n = n % 25;
	coins += n / 10;

	n = n % 10;
	coins += n / 5;

	n = n % 5;
	coins += n / 2;

	n = n % 2;
	coins += n / 1;

	printf("%d\n", coins);
	return (0);
}
