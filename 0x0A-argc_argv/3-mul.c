#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two integers recieved as command line arguements
 * @argc: the number of command line arguements
 * @argv: array of command line strings
 * Return: 0 (for success)
 */
int main(int argc, char *argv[])
{
	int x;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", x);
	return (0);
}
