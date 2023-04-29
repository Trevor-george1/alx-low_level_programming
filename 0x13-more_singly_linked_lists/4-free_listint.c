#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: head of the linked list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
	temp = head;
	head->next = head;
	free(temp);
	}
}
