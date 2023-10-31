#include "main.h"
/**
 * argstostr - concatenates all the args into a string
 * @ac: number of arguments
 * @av: pointer to string of arguments
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int i, j, length, k;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}
	a = malloc(sizeof(char) * length + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			a[k] = av[i][j];
			k++;
		}
		a[k] = '\n';
		k++;
	}
	a[k] = '\0';
	return (a);
}
