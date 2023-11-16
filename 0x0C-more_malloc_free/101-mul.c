#include <stdio.h>
#include <stdlib.h>
/**
 * _is_digit - checks if variable is ddigit
 * @n: variable to be checked
 * Return: 0 or 1
 */

int _is_digit(char *c)
{
	if (*c >= 48 && *c <= 57)
	{
		return (1);
	}
	return (0);
}

/**
 * main - enrty of program
 * @argc: count
 * @argv: pointer to string of arguments
 * Return:result
 */
int main (int argc, char *argv[])
{
	int num1, num2,  sum;

	if (argc < 3)
	{
		printf("Error");
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 * num2;
	printf("%d\n", sum);
	return(0);
}
