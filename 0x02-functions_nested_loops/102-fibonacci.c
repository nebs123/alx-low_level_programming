#include <stdio.h>

/**
 * main - program that prints the first 50 fibonnaci numbers
 *
 * Return: return 0(success)
 */
int main(void)
{
	long first, second, counter;

	first = 1;
	second = 2;

	printf("%ld, %ld", first, second);

	for (counter = 2; counter < 50; counter++)
	{
		long new = first + second;

		first = second;
		second = new;
		printf(", %ld", new);
	}
	printf("\n");
	return (0);
}
