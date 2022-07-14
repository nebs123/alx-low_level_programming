#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: pointer to the beginning of the int array
 * @n: number of elements in array
 *
 * Return: void (no return)
 */
void reverse_array(int *a, int n)
{
	int *end = a + (n - 1);

	for (; a < end; a++, end--)
	{
		int temp = *end;
		*end = *a;
		*a = temp;
	}
}
