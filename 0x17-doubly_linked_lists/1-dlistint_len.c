#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - returns number of elements
 * @h: head node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
