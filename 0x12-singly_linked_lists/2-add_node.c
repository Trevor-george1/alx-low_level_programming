#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to head of the linked list
 * @str: string to be added
 * Return: the address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
	return (NULL);
	}
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
	return (NULL);
	}
	newnode->next = *head;
	*head = newnode;
	return (0);
}
