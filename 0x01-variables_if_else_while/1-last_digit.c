#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point for program
 *
 * Description - fetches a random number and determines the last digit and
 * prints out a message depending on the value of the last digit
 * Return: returns 0 (always success)
 */
int main(void)
{
	int n, tmp;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	tmp = n % 10;

	printf("Last digit of %d is %d ", n, tmp);
	if (tmp > 5)
		printf("and is greater than 5\n");
	else if (tmp == 0)
		printf("and is 0\n");
	else if (tmp < 6)
		printf("and is less than 6 and not 0\n");

	return (0);
}
