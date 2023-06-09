#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a newnode at end of a list
 * @head: head of linked list
 * @n: data for newnode
 * Return: newnode;
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
	*head = newnode;
	}
	else
	{
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	}
	return (newnode);
}
