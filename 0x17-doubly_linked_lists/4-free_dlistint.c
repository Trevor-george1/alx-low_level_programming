#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - frees a dlistint
 * @head: head
 * Return: NOthing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
