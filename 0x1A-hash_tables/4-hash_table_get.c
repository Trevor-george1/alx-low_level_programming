#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: key
 *
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *currentnode;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);

	currentnode = ht->array[index];
	while (currentnode != NULL)
	{
		if (strcmp(currentnode->key, key) == 0)
		{
			return (currentnode->value);
		}
	currentnode = currentnode->next;
	}
	return (NULL);
}
