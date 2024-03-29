#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end
 * @head: head
 * @n: data
 * Return: newnode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		newnode->next = NULL;
		temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	}
	return (newnode);
}
