#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: pointer to array of words
 */

char **strtow(char *str)
{
	int num, i, k, index, end, length, s;
	char **words, *word;

	if (str == NULL || strlen(str) == 0)
	{
	return (NULL);
	}
	num = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] == ' ')
	{
	continue;
	}
	num++;
	while (str[i] != ' ' && str[i] != '\0')
	{
	i++;
	}
	}
	words = malloc((num + 1) * sizeof(char *));
	if (words == NULL)
	{
	return (NULL);
	}
	index = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] == ' ')
	{
	continue;
	}
	s = i;
	while (str[i] != ' ' && str[i] != '\0')
	{
	i++;
	}
	end = i;
	length = end - s;
	word = malloc((length + 1) * sizeof(char));
	if (word == NULL)
	{
	for (k = 0; k < index; k++)
	{
	free(words[k]);
	}
	free(words);
	return (NULL);
	}
	strncpy(word, &str[s], length);
	word[length] = '\0';
	words[index++] = word;
	}
	words[index] = NULL;
	return (words);
}
