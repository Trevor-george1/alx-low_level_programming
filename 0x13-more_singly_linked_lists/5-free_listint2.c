#include "lists.h"
/**
 * free_listint2 - frees alinked list and set head NULL
 * @head: head
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *cnode;

	if (head != NULL)
	{

		cnode = *head;

		while ((temp = cnode) != NULL)
		{
			cnode = cnode->next;
			free(temp);
		}
		*head = NULL;
	}
}
