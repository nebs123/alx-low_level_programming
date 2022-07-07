#include "main.h"

/**
 * print_triangle - prints a triangle using # sign
 * @size: width of the triangle to be printed
 * Return: nothing returned(void)
 */
void print_triangle(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = size - x - 1; y > 0; y--)
			_putchar(' ');

		for (y = 0; y < x + 1; y++)
			_putchar('#');
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');

}
