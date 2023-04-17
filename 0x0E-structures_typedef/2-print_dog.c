#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: object of struct dog
 * Return: Nothing
 */

void print_dog(struct dog *d)
{	
	char *name;
	char *owner;

	if (d == NULL)
	{
	return;
	}
	name = d->name != NULL ? d->name : "(nil)";
	owner = d->owner != NULL ? d->owner : "(nill)";
	printf("Name: %s\n", name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", owner);
}
