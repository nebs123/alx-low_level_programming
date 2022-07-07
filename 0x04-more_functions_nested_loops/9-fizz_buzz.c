#include <stdio.h>

/**
 * main - entry point to our FizzBuzz program
 *
 * Return: returns 0 (success)
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100 ; x++)
	{
		if (x != 1)
			printf(" ");

		if (x % 3 == 0)
			printf("Fizz");

		if (x % 5 == 0)
			printf("Buzz");
		if (x % 5 != 0 && x % 3 != 0)
			printf("%d", x);
	}

	printf("\n");
	return (0);
}
