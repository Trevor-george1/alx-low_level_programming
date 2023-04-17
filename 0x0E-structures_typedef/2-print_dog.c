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
	if (d == NULL)
	{
	return;
	}
	if (d->name == NULL)
	{
	printf("Name: (nil)");
	}
	else
	{
	printf("Name: %s\n", d->name);
	}
	if (d->age == 0.0)
	{
	printf("Age: %f\n", d->age);
	}
	else
	{
	printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
	printf("Owner: (nil)");
	}
	else
	{
	printf("Owner: %s\n", d->owner);
	}
}
