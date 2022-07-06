#include <stdio.h>

/**
 * main - entry point for program that prints sum of multiples
 * of 3 or 5 below 1024
 *
 * Return: 0 is returned
 */
int main(void)
{
	int sum = 0, num = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
