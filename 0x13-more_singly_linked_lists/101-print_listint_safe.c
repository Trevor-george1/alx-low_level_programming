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
	const listint_t *temp, *f;
	size_t count = 0;

	if (head == NULL)
		exit(98);
	temp = f = head;

	while (temp && f && f->next)
	{
		temp = temp->next;
		f = f->next->next;
	if (temp == f)
	{
		printf("-> [%p] %d\n", (void *) temp->next, temp->n);
		count++;
		do {
		temp = temp->next;
		count++;
		} while (temp != f);
		return (count);
	}
	printf("[%p] %d\n", (void *) temp, temp->n);
	count++;
	}
	return (count);
}
