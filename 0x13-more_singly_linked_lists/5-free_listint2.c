#include "lists.h"
/**
 * free_listint2 - frees alinked list and set head NULL
 * @head: head
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *cnode;
	cnode = *head;

	while (cnode)
	{
		temp = cnode->next;
		free(cnode);
		cnode = temp;
	}
	*head = NULL;
}
