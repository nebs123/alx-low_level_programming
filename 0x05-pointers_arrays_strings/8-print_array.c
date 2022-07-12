#include "main.h"
#include <stdio.h>

/**
 * print_array - prints out the array integer of size n
 * @a: pointer to the 1st element of the integer array
 * @n: number of elements in the integer array
 *
 * Return: void(no return)
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != 0)
			printf(", ");

		printf("%d", a[x]);
	}
	printf("\n");
}
