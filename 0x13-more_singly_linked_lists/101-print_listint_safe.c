#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a linked list
 * @head: head of the linked list
 * Return: count
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *slow = NULL;
	size_t count = 0;

	temp = head;
	while (temp != NULL)
	{
	printf("[%p] %d\n", (void *)temp, temp->n);
	count++;

	if (temp->next < temp)
	{
		printf("[%p] %d\n", (void *) temp->next, temp->next->n);
		exit(98);
	}
	slow = temp;
	temp = temp->next;
	}
	return (count);
}
