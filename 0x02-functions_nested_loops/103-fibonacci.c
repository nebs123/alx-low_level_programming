#include <stdio.h>

/**
 * main - program that prints the sum of even numbered fibonnaci
 * numbers who are less than 4,000,000
 *
 * Return: return 0(success)
 */
int main(void)
{
	long first, second, sum;

	first = 1;
	second = 2;
	sum = 0;

	while (first < 4000000)
	{
		long new = first + second;

		if (first % 2 == 0)
			sum += first;

		first = second;
		second = new;
	}
	printf("%ld\n", sum);
	return (0);
}
