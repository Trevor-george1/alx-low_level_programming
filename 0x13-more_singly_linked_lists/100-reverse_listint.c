#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a linkedlist
 * @head: head of the linked list
 * Return: reversedlist
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *rest;

	if (*head == NULL)
		return (NULL);
	temp = *head;
	rest = temp->next;
	if (rest == NULL)
	{
		return (NULL);
	}
	reverse_listint(&rest);
	temp->next->next = temp;
	temp->next = NULL;
	*head = rest;
	return (rest);
}
