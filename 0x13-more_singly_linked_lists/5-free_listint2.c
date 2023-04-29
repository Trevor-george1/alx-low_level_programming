#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: head of linked list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}
	listint_t *temp, *n_node;

	temp = *head;
	while (temp != NULL)
	{
		n_node = temp->next;
		free(temp);
		temp = n_node;
	}
	*head = NULL;
}
