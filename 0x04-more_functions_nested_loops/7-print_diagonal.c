#include "main.h"

/**
 * print_diagonal - prints an n length diagonal
 * @n: the number of diagonals to print
 *
 * Return: no return value
 */
void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
