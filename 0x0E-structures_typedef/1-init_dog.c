#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes a variable
 *
 * struct dog - structure of dog type
 * @d: object variable of dog
 * @name: name of dog d
 * @age: age of dog d
 * @owner: owner of dog d
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
