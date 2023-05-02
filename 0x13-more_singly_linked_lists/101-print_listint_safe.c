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
	const listint_t *temp = head, *f = head;
	size_t count = 0;

	while (f != NULL && f->next != NULL)
	{
	printf("[%p] %d\n", (void *)temp, temp->n);
	count++;

	temp = temp->next;
	f = f->next->next;

	if (temp == f)
	{
		printf("[%p] %d\n", (void *) temp->next, temp->n);
		exit(98);
	}
	}
	if (f != NULL)
	{
	printf("[%p] %d\n", (void *)temp, temp->n);
	count++;
	}
	return (count);
}
