#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at the index of alist
 * @head: head of the linked list
 * @index: index of node to be deleted
 * Return: 1 if it succeeds
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
	}
	previous = *head;
	temp = (*head)->next;
	for (i = 1; i < index && temp != NULL; i++)
	{
	previous = temp;
	temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	previous->next = temp->next;
	free(temp);
	return (1);
}
