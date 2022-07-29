#include "main.h"

/**
 * _realloc - reallocates memory to new size
 * @ptr: ptr to old memory location
 * @old_size: the size of the old memory location
 * @new_size: the size of the newly allocated memory
 * Return: pointer to the reallocated memory location
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int n, copy_len;
	char *new_mem, *old_mem;

	if (ptr == NULL)
		return (malloc(new_size));

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	copy_len = old_size > new_size ? new_size : old_size;
	old_mem = ptr;
	new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);

	for (n = 0; n < copy_len; n++)
	{
		*(new_mem + n) = *(old_mem + n);
	}

	free(ptr);
	return (new_mem);
}
