#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a node at the end of a linked list
 * @head: head node
 * @n: data
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *last;

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	last= *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	newnode->prev = last;
	last->next = newnode;
	return (newnode);
}
