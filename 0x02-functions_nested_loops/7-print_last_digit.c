#include "main.h"

/**
 * print_last_digit - prints out the last digit of input n
 * @n: the input from which last digit is obtained
 *
 * Return: returns the last digit of n
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;

	if (digit < 0)
		digit = -digit;

	_putchar('0' + digit);
	return (digit);
}
