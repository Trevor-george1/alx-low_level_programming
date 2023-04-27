#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: header of the linked list
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str != NULL)
			count++;
	temp = temp->next;
	}
	return (count);
}
