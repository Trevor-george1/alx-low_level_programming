#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - prints all elements of a list
 * @h: pointer to headnode
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
