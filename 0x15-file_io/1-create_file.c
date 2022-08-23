#include "main.h"

/**
 * create_file - creates a file if it doesn't exist or truncates it to write
 * the input string
 * @filename: name of the file
 * @text_content: string to be written to file
 *
 * Return: returns 1 on sucess and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_no;

	if (!filename)
		return (-1);
	file_no = open(filename, O_WRONLY | O_TRUNC);
	if (file_no == -1)
	{
		file_no = open(filename, O_CREAT | O_WRONLY, 00600);
		if (file_no == -1)
			return (-1);
	}
	if (text_content != NULL)
	{
		while (*text_content)
		{
			ssize_t amt_write;

			amt_write =  write(file_no, text_content,
					   sizeof(*text_content));
			if (amt_write == -1)
			{
				close(file_no);
				return (-1);
			}
			text_content++;
		}
	}
	close(file_no);
	return (1);
}
