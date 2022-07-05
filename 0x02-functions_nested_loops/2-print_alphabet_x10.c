#include "main.h"

/**
 * print_alphabet_x10 - prints out the alphabet(a-z) 10 times
 *
 * Return: void (nothing returned)
 */
void print_alphabet_x10(void)
{
	int x, c;

	for (x = 0; x < 10; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}
}
