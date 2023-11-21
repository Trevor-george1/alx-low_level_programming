#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: head
 *
 * Return: head data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *new;
	int data;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
	data = (*head)->n;

	temp = *head;

	new = temp->next;
	free(temp);
	*head = new;
	}

	return (data);
}
