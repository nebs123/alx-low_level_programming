#include "function_pointers.h"

/**
 * int_index - returns index for which cmp returns non-zero val
 * @array: the input array to search
 * @size: the size of the array
 * @cmp: the function that does the comparison
 * Return: -1 on failure, otherwise returns index of element for
 * which element returned non-zero val when called on cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (cmp && array && size > 0)
	{
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]))
				return (n);
		}
	}

	return (-1);
}
