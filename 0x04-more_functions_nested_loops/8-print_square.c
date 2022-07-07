#include "main.h"

/**
 * print_square - prints square of specified width using #
 * @size: width of square in no of hashes
 *
 * Return: return nothing (void)
 */
void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
			_putchar('#');
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
