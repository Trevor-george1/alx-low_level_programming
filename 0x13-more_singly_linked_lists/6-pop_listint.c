#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: head
 *
 * Return: head data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = *head;

	*head = (*head)->next;
	free(temp);

	return (temp->n);
}
