#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous mem block
 * @old_size: size in bytes of ptr
 * @new_size: bytes of new mem block
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_pointer;
	char *new_location;
	unsigned int i = 0;
	if (new_size == old_size)
	{
	return (ptr);
	}
	if (ptr == NULL)
	{
	ptr = malloc(new_size);
	if (ptr == NULL)
	return (NULL);
	return (ptr);
	}
	if (new_size == 0 && ptr)
	{
	free(ptr);
	return (NULL);
	}
	new_location = malloc(new_size);
	new_pointer = ptr;
	if (old_size > new_size)
	old_size = new_size;
	for (i = 0; i < old_size; i++)
	{
	new_location[i] = new_pointer[i];
	}
	free(ptr);
	return (new_location);
}
