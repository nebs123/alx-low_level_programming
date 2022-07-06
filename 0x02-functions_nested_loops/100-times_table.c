#include "main.h"

/**
 * print_times_table - prints out the times table upto n
 * @n: the index for the max col and row of the times table
 *
 * Return: void (no return value)
 */
void print_times_table(int n)
{
	int row, col;

	if (n < 0 || n > 15)
	{
	}
	else
	{

		for (row = 0; row < (n + 1); row++)
		{
			for (col = 0; col < (n + 1); col++)
			{
				printCell(row, col);
			}
			_putchar('\n');
		}
	}
}

/**
 * printCell - given row and column position it prints the cell
 * @row: row for the cell to be printed
 * @col: column for the cell to be printed
 *
 * Return: void(no return value)
 */
void printCell(int row, int col)
{
	int mult;

	mult = row * col;
	if (col != 0)
	{
		_putchar(',');
		_putchar(' ');
	}
	if (mult < 10)
	{
		if (col != 0)
		{
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('0' + mult);
	}
	else if (mult < 100)
	{
		if (col != 0)
			_putchar(' ');
		_putchar('0' + mult / 10);
		_putchar('0' + mult % 10);
	} else
	{
		_putchar('0' + mult / 100);
		_putchar('0' + (mult % 100) / 10);
		_putchar('0' + mult % 10);
	}
}
