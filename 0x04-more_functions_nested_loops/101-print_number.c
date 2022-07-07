#include "main.h"

/**
 * print_number - prints out the number n
 * @n: the number to printed out
 *
 * Return: nothing (void)
 */
void print_number(int64_t n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}
	else if (n / 10 == 0)
	{
		_putchar(n + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
