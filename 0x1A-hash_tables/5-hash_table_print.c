#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: poniter to hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *currentnode;
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		currentnode = ht->array[i];
		while (currentnode != NULL)
		{
			if (flag)
			{
				printf(", ");
			}
			printf("'%s': '%s'", currentnode->key, currentnode->value);
			flag = 1;
			currentnode = currentnode->next;
		}
	}
	printf("}\n");
}
