#include "main.h"
#include <stdio.h>

/**
 * main - prints all the command line arguements
 * @argc: the number of command line arguements
 * @argv: array of command line strings
 * Return: 0 (for success)
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
