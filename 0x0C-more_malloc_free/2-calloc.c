#include "main.h"

/**
 * _calloc - allocate memory of nmemb memory elements of size bytes each
 * @nmemb: size of number of memory elements to be allocated
 * @size: amount in bytes of single memory element to be allocated
 *
 * Return: pointer to newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int n;

	if (!nmemb || !size)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < nmemb * size; n++)
		*(ptr + n) = '\0';

	return (ptr);
}
