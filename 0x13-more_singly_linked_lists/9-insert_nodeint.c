#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: index
 * @n: data
 *
 * Return: newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i;

	temp = *head;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	for (i = 0; i < idx - 1 && head != NULL; i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
	}
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else if (temp->next)
	{
		newnode->next = temp->next;
		temp->next = newnode;
	}
	else
	{
		newnode->next = NULL;
		temp->next = newnode;
	}
	return (newnode);
}
