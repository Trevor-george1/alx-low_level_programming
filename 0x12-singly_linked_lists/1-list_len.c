#include "lists.h"
/**
 * list_len - returns number of elements in linked list
 * @h: pointer to first node
 * Return: no of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
