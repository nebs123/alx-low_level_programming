#include "main.h"

/**
 * array_range - creates an array of integers with elements from min to max
 * @min: minimum element that array should start at
 * @max: max element that array should end at
 *
 * Return: pointer to the new array of integers
 */
int *array_range(int min, int max)
{
	int n;
	int *ptr, *new;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	new = ptr;
	for (n = min; n <= max; n++)
	{
		*ptr = n;
		ptr++;
	}
	return (new);
}
