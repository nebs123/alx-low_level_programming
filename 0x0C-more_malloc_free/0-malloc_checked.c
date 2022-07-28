#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size in bytes of memory to be allocated
 *
 * Return: void pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
