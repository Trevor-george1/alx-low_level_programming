#include "lists.h"
/**
 * print_list - prints elements of a list
 * @h: pointer to head node of list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (%s)\n", 0, "nill");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (i);
}
