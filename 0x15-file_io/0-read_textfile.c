#include "main.h"

/**
 * read_textfile - read letters bytes from file and print to stdout
 * @filename: pointer to name of the file
 * @letters: no of letters to be read and printed
 *
 * Return: actual amount of letters that was read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_no;
	ssize_t amt_write, amt_read, tot_write = 0;
	char buff[1024];

	if (!filename)
		return (0);
	file_no = open(filename, O_RDONLY);
	if (file_no == -1)
		return (0);
	while (letters > 0)
	{
		if (letters > 1024)
		{
			amt_read = read(file_no, buff, 1024);
		} else
		{
			amt_read = read(file_no, buff, letters);
		}

		if (amt_read == -1)
			return (0);
		if (amt_read == 0)
			break;

		amt_write = write(STDOUT_FILENO, buff, amt_read);
		if (amt_write == -1 || amt_write != amt_read)
			return (0);
		letters -= amt_read;
		tot_write += amt_write;
	}
	close(file_no);
	return (tot_write);
}
