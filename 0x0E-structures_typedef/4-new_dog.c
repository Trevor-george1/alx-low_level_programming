#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strlen - find lenght of string
 * @c: char
 * Return: len
 */

int _strlen(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: poinetr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new->name == NULL)
	{
		free(new->name);
		return (NULL);
	}
	new->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new->owner == NULL)
	{
		free(new->owner);
		return(NULL);
	}
	new->name = strcpy(new->name, name);
	new->age = age;
	new->owner = strcpy(new->owner, owner);
	return (new);
}
