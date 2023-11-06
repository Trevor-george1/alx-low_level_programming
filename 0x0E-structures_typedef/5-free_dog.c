#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that frees all dogs
 * @d: pointer to dog
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
