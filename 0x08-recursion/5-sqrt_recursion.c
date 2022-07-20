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
	int next_sq = min_square(n, n);

	if (next_sq * next_sq == n)
		return (next_sq);
	else
		return (-1);
}

/**
 * min_square - return the root of the largest square no less or equal to n
 * @n: the number to find the square of
 * @k: the no whose square is to be checked
 *
 * Return: square root of the least natural square less than n
 */
int min_square(int n, int k)
{
	if (k * k <= n)
		return (k);
	else
		return (min_square(n, k - 1));
}
