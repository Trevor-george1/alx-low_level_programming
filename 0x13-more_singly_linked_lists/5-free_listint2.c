#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: head of linked list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
