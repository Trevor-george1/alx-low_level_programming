#include "lists.h"
/**
 * reverse_listint - reverse alinked list
 * @head: head
 *
 * Return: firstnode
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
