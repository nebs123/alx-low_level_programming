#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints out the sum of the diagonals of a matrix
 * @a: the matrix input
 * @size: dimensions of the matrix
 *
 * Return: void (no return)
 */
void print_diagsums(int *a, int size)
{
	int dig1 = 0, dig2 = 0;
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (x == y)
				dig1 += *((a + (x * size)) + y);
			if (x + y == size - 1)
				dig2 += *((a + (x * size)) + y);
		}
	}

	printf("%d, %d\n", dig1, dig2);
}
