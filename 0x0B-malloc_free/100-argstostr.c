#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments of your program.
 * @ac: size of the arguments
 * @av: the string of arguments
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *array;
	int i;
	int new, length;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	length = 0;
	for (i = 0; i < ac; i++)
	{
	length += strlen(av[i]) + 1;
	}
	array = malloc((length) + 1 * sizeof(char));
	if (array == NULL)
	{
	return (NULL);
	}
	new = 0;
	for (i = 0; i < ac; i++)
	{
	strcpy(array + new, av[i]);
	new += strlen(av[i]);
	array[new] = '\n';
	new++;
	}
	return (array);
	free(array);
}
