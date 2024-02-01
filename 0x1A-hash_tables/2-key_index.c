#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: key
 * @size: size of the hash table
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_index;

	hash_index = hash_djb2(key);
	return (hash_index % size);
}
