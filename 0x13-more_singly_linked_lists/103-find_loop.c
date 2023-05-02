#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds a loop in a linked list
 * @head: head node of the linked list
 * Return: address  of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head, *current = head;

	while (temp != NULL && current != NULL && current->next != NULL)
	{
		temp = temp->next;
		current = current->next->next;
		if (temp == current)
		{
		temp = head;
		while (temp != current)
		{
			temp = temp->next;
			current = current->next;
		}
		return (temp);
		}
	}
	return (NULL);
}
