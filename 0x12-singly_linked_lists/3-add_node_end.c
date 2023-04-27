#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * add_node_end - adds a new node at the end  of a llist
 * @head: the head of the linked list
 * @str: strinto be dupicated
 * Return: address of new element or NULL if it filed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
	return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	if (newnode->str == NULL)
	{
	free(newnode);
	return (NULL);
	}
	newnode->next = 0;
	if (*head == NULL)
	{
	*head = newnode;
	}
	else
	{
	temp = *head;
	while (temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = newnode;
	}
	return (newnode);
}
