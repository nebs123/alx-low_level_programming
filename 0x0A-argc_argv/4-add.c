#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds all the command line arguements
 * @argc: the number of command line arguements
 * @argv: array of command line strings
 * Return: 0 (for success)
 */
int main(int argc, char *argv[])
{
	int x;
	int sum = 0;
	int temp;
	char *end;

	for (x = 1; x < argc; x++)
	{
		temp = strtol(argv[x], &end, 10);
		if (*end != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += temp;
	}
	printf("%d\n", sum);
	return (0);
}
