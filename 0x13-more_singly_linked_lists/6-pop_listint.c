#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list
 * @head: head of the linked list
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
