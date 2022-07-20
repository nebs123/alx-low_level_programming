#include "main.h"

int min_square(int n, int k);

/**
 * _sqrt_recursion - finds the square root of n
 * @n: the number whose square root to find
 *
 * Return: square root of n if n is natural square otherwise -1
 */
int _sqrt_recursion(int n)
{
	return (min_square(n, 1));
}

/**
 * min_square - checks for the square root of n beginning from base k
 * @n: the number to find the square of
 * @k: the no whose square is to be checked
 *
 * Return: square root of n if it exists other wise -1
 */
int min_square(int n, int k)
{
	if (k * k == n)
		return (k);
	else if (k * k > n)
		return (-1);
	else
		return (min_square(n, k + 1));
}
