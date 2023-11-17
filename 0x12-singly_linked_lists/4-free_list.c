#include "lists.h"
/**
 * free_list - frees list
 * @head: pointer to head node
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
