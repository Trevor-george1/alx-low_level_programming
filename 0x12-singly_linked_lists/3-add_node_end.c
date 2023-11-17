#include "lists.h"
/**
 * add_node_end - adds anewnode at the end of linked list
 * @head: pointer to head node
 * @str: data for the newnode
 * Return: pointer to newnode
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	size_t count = 0;
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	while (str[count] != '\0')
	{
		count++;
	}
	newnode->str = strdup(str);
	newnode->len = count;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		newnode->next = NULL;
		temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	}
	return (newnode);
}
