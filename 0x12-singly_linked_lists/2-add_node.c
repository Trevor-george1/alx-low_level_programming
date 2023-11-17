#include "lists.h"
/**
 * add_node - ads new node at beginning of list
 * @head: pointer to head node of list
 * @str: data of the newnode
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t len_s = 0;


	while (str[len_s] != '\0')
	{
		len_s++;
	}

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->str = strdup(str);
		newnode->len = len_s;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
