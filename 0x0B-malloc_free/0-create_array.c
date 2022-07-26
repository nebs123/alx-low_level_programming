#include "main.h"

/**
 * create_array - creates an array of inputted size and intializes to c
 * @size: size of the array to be allocated
 * @c: character to which array is initialized to
 *
 * Return: NULL if fails otherwise returns pointer to 1st element of array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int n;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
	{
		*(ptr + n) = c;
	}

	return (ptr);
}
