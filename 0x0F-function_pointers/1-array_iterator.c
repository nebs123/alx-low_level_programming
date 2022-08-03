#include "function_pointers.h"


/**
 * array_iterator - performs action on each element of array
 * @array: array of ints on whom action is to be performed
 * @size: size of the array
 * @action: action to be performed
 * Return: void (no return)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	for (n = 0; n < size; n++)
		action(array[n]);
}
