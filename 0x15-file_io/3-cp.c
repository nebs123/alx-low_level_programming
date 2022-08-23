#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - copies file from file_from to file_to
 * @argc: no of command line arguments
 * @argv: command line arguments(files to be copied)
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int file_to, file_from;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC);
	if (file_to == -1)
	{
		file_to = open(argv[2], O_CREAT | O_WRONLY, 00664);
		if (file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				 argv[2]);
			exit(99);
		}
	}
	copying(file_from, file_to, argv[1], argv[2]);
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			 file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
/**
 * copying - copies data from file_from to file_to
 * @file_from: file decsriptor of source
 * @file_to: file descriptor of dest
 * @from: name of source file
 * @to: name of dest file
 * Return: void (no return)
 */
void copying(int file_from, int file_to, char *from, char *to)
{
	ssize_t amt_read, amt_write;
	char buff[1024];

	while (1)
	{
		amt_read = read(file_from, buff, 1024);
		if (amt_read == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", from);
			exit(98);
		}
		if (amt_read == 0)
			break;
		amt_write = write(file_to, buff, amt_read);
		if (amt_write == -1 || amt_write != amt_read)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", to);
			exit(99);
		}
	}

}
