#include "main.h"

int has_factors(int, int);
/**
 * is_prime_number - checks whether n is a prime number or not
 * @n: input number
 *
 * Return: 1 if n is prime, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (has_factors(n, n / 2));
}

/**
 * has_factors - check if a num has factors less than or equal to factor
 * @num: the number which is to be checked
 * @factor: max value of the factor of num
 *
 * Return: 1 if there are no factors other wise return 0
 */
int has_factors(int num, int factor)
{
	if (factor == 1)
		return (1);
	if (num % factor == 0)
		return (0);
	return (has_factors(num, factor - 1));
}
