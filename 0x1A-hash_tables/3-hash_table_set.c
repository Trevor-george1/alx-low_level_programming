#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode, *currentnode;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	currentnode = ht->array[index];

	while (currentnode != NULL)
	{
		if (strcmp(currentnode->key, key) == 0)
		{
			free(currentnode->value);
			currentnode->value = strdup(value);
			if (currentnode->value == NULL)
				return (0);
			return (1);
		}
		currentnode = currentnode->next;
	}
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	if (newnode->key == NULL || newnode->value == NULL)
	{
		free(newnode->key);
		free(newnode->value);
		free(newnode);
		return (0);
	}
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
