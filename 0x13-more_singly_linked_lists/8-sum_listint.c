#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - return sum of all data
 * @head: head of linked list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);

}
