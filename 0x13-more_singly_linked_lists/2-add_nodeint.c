#include "lists.h"
/**
 * add_nodeint - adds new node at the begining
 * @head: head node
 * @n: data
 * Return: newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
