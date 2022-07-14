#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: the integer to be printed
 *
 * Return: void (no return)
 */
void print_number(int n)
{
	unsigned int temp;

	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	} else
	{
		temp = n;
	}

	if (temp / 10)
		print_number(temp / 10);

	_putchar(temp % 10 + '0');
}
