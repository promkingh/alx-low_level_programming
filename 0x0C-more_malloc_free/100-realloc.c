#include "main.h"

/**
 * _realloc - reallocate a memory block
 * @ptr: pointer to memory location
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
