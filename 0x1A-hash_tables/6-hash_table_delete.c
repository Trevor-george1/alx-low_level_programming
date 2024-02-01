#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *currentnode, *nextnode;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		currentnode = ht->array[i];
		while (currentnode != NULL)
		{
			nextnode = currentnode->next;
			free(currentnode->key);
			free(currentnode->value);
			free(currentnode);
			currentnode = nextnode;
		}
	}
	free(ht->array);
	free(ht);
}
