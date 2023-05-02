#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a list
 * @h: head pointer to the linked list
 * Return: size that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *s;
	listint_t *f;
	size_t count = 0;

	s = *h;
	f = *h;
	while (s != NULL && f != NULL && f->next != NULL)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
		{
		s = *h;
		while (s != f)
		{
		*h = s->next;
		free(s);
		s = *h;
		}
		*h = NULL;
		free(f);
		count++;
		return (count);
		}
	}
	while (*h != NULL)
	{
		listint_t *temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}
	return (count);
}
