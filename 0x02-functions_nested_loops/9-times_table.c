#include "main.h"

/**
 * times_table - prints out the times table upto 9
 *
 * Return: void (no return value)
 */
void times_table(void)
{
	int row, col, mult;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			mult = row * col;
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (mult < 10)
			{
				if (col != 0)
					_putchar(' ');
				_putchar('0' + mult);
			}
			else
			{
				_putchar('0' + mult / 10);
				_putchar('0' + mult % 10);
			}
		}
		_putchar('\n');
	}
}
