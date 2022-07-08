#include "main.h"

/**
 * print_number - prints out the number n
 * @n: the number to printed out
 *
 * Return: nothing (void)
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	} else
	{
		x = n;
	}

	if (n / 10)
	{
		print_number(n / 10);

	}

	_putchar((x % 10) + '0');

}
