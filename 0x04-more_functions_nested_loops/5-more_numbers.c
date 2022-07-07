#include "main.h"

/**
 * more_numbers - prints digits ranging from 0-14
 *
 * Return: nothing (void)
 */
void more_numbers(void)
{
	int start, x;

	for (x = 0; x < 10; x++)
	{
		for (start = 0; start < 15; start++)
			printDigits(start);
		_putchar('\n');
	}
}

/**
 * printDigits - prints out the number n
 * @n: the number to printed out
 * Return: nothing (void)
 */
void printDigits(int n)
{
	if (n == 0 || n / 10 == 0)
		_putchar(n + '0');
	else
	{
		printDigits(n / 10);
		_putchar(n % 10 + '0');
	}
}
