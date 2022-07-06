#include <stdio.h>
#include <inttypes.h>

/**
 * main - program that prints the first 98 fibonnaci numbers
 *
 * Return: return 0(success)
 */
int main(void)
{
	unsigned long first, second, counter;

	first = 1;
	second = 2;
	printf("%lu, %lu", first, second);

	for (counter = 2; counter < 98; counter++)
	{
		unsigned long new = first + second;

		first = second;
		second = new;
		printf(", %lu", new);
	}
	printf("\n");
	return (0);
}
