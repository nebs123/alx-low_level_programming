#include "main.h"

/**
 * print_line - prints a line of length n
 * @n: the length of line to be printed
 *
 * Return: returns nothing
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
		_putchar('_');
	_putchar('\n');
}
