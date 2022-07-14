#include "main.h"

/**
 * string_toupper - converts string to uppercase
 * @a: pointer to string input
 *
 * Return: returns pointer to the newly updated string
 */
char *string_toupper(char *a)
{
	char *word = a;

	while (*word)
	{

		if (*word >= 'a' && 'z' >= *word)
			*word = 'A' + (*word - 'a');
		word++;
	}

	return (a);
}
