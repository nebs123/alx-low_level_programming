#include "main.h"

/**
 * swap_int - swaps the values at the two addresses inputted
 * @a: first address to be used in the swap
 * @b: second address to be used in the swap
 * Return: void(no return)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
