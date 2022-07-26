#include "main.h"
int str_len(char *);
/**
 * argstostr - returns a concatenated string of all command line args
 * @ac: number of command line arguments
 * @av: pointer to array of command line args
 * Return: NULL on failure, otherwise returns a pointer to concat string
 */
char *argstostr(int ac, char **av)
{
	int n, tot_len = 0;
	char *ptr, *new_mem;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (n = 0; n < ac; n++)
		tot_len += str_len(*(av + n));
	tot_len += ac + 1;

	new_mem = (char *) malloc(sizeof(char) * tot_len);
	if (new_mem == NULL)
		return (NULL);
	ptr = new_mem;
	for (n = 0; n < ac; n++)
	{
		char *current = *(av + n);

		while (*current)
		{
			*ptr = *current;
			current++;
			ptr++;
		}
		*ptr = '\n';
		ptr++;
	}
	*ptr = '\0';
	return (new_mem);
}

/**
 * str_len - returns the length of the string
 * @str: the string input
 * Return: the length of the string
 */
int str_len(char *str)
{
	int length = 0;

	while (*str)
	{
		length++;
		str++;
	}

	return (length);
}
