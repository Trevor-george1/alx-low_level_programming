#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the nodde at given index
 * @head: head
 * @index: index
 *
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current == NULL || current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	temp = current->next;
	current->next = current->next->next;
	free(temp);
	return (1);
}
