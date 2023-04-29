#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head of the linked list
 * @index: index of the nth node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;
	temp = head;

	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (i == index && temp != NULL)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
