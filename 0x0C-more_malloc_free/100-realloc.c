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
	void *new_pointer;

	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	if (ptr == NULL)
	{
	new_pointer = malloc(new_size);
	return (new_pointer);
	}
	if (new_size == old_size)
	{
	return (ptr);
	}
	new_pointer = malloc(new_size + 1);
	if (new_pointer == NULL)
	{
	return (NULL);
	}
	memcpy(new_pointer, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);
	return (new_pointer);
}
