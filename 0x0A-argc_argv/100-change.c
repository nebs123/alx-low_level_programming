#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of coins required to make change out of money
 * @argc: the number of command line arguements
 * @argv: array of command line strings
 * Return: 0 (for success)
 */
int main(int argc, char *argv[])
{
	int cents[] = {25, 10, 5, 2, 1};
	int money = atoi(argv[1]);
	int x, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (x = 0; x < 5; x++)
	{

		while (money - cents[x] >= 0)
		{
			money -= cents[x];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
