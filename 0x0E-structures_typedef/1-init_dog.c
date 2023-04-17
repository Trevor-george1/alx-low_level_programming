#include "dog.h"
#include <stdio.h>

/**
 * init_dog : initilaizes a varibale of type struct dog
 * @d: object variable of dog
 * @name: name of dog d
 * @age: age of dog d
 * @owner: owner of dog d
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
