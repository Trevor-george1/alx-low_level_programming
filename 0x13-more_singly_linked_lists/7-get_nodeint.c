#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: head
 * @index: index
 *
 * Return: data
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	for (count = 0; count < index && head != NULL; count++)
	{
		head = head->next;
	}
	return (head);
}
