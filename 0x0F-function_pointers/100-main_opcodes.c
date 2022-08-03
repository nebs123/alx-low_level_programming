#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints out the opcode for main of num bytes
 * @argc: number of cmd line arguments
 * @argv: array of command line arguements
 *
 * Return: 0 on success, 1 and 2 on Error
 */
int main(int argc, char *argv[])
{
	char *ptr = (char *) &main;
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		if (i != 0)
			printf(" ");
		printf("%02x", ptr[i] & 0xFF);
	}
	printf("\n");
	return (0);
}
