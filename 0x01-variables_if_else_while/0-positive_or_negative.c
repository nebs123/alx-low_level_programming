#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point for program
 *
 * Description - fetches a random number and checks to see if it is greater,
 * less than or equal to zero
 * Return: returns 0 (always success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d ", n);

	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");
	return (0);
}
