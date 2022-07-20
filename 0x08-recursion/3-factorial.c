#include "main.h"

/**
 * factorial - returns the factorial of the input number
 * @n: input number
 *
 * Return: returns an int which is factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
