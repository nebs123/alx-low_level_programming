#include <stdio.h>

/**
 * main - entry to program that prints the largest prime
 * factor of 612852475143l
 *
 * Return: 0 (success);
 */
int main(void)
{
	long x, largest_prime, val;

	val = 612852475143l;
	largest_prime = 0;

	for (x = 2; val > 1; x++)
	{
		while (val % x == 0)
		{
			val = val / x;
			largest_prime = x;
		}
	}

	printf("%ld\n", largest_prime);
	return (0);
}
