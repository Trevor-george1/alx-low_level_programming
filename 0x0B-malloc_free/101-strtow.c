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
	int num, i, k;
	char *p, **words, *s, *word;

	if (str == NULL || *str == '\0')
	{
	return (NULL);
	}
	num = 0;
	for (p = str; p != NULL; p++)
	{
	if (!isspace(*p) && (p == str || isspace(*(p - 1))))
	{
	num++;
	}
	}
	words = malloc((num + 1) * sizeof(char *));
	if (words == NULL)
	{
	return (NULL);
	}
	i = 0;
	for (p = str; p != NULL; )
	{
	if (!isspace(*p))
	{
	s = p;
	while (p != NULL && !isspace(*p))
	{
	p++;
	}
	word = malloc((p - s + 1) * sizeof(char));
	if (word == NULL)
	{
	for (k = 0; k < i; k++)
	{
	free(words[k]);
	}
	free(words);
	return (NULL);
	}
	strncpy(word, s, p - s);
	word[p - s] = '\0';
	words[i] = word;
	i++;
	}
	else
	{
	p++;
	}
	}
	words[num] = NULL;
	return (words);
}
