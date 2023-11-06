#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to dog structure
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s\n", d->name);
		}
		printf("Age: ");
		printf("%f\n", d->age);
		printf("Owner: ");
		if (d->owner == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s\n", d->owner);
		}

	}
}
