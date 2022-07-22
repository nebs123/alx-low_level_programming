#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the name of program
 * @argc: the size of commandline arguements
 * @argv: array of command line arguments
 * Return: integer (0 for success)
 */
int main(__attribute__ ((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
