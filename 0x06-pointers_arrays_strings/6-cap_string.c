#include "main.h"

int is_separator(char);

/**
 * cap_string - capitalize words in a string
 * @str: string input which is to be capitalized
 *
 * Return: pointer to the newly capitalized stirng
 */
char *cap_string(char *str)
{
	int newWord = 1;
	char *ptr = str;

	while (*ptr)
	{
		if (is_separator(*ptr))
			newWord = 1;
		else if ('a' <= *ptr && 'z' >= *ptr && newWord)
		{
			*ptr = 'A' + (*ptr - 'a');
			newWord = 0;
		} else
		{
			newWord = 0;
		}

		ptr++;
	}
	return (str);
}

/**
 * is_separator - identifies if a character is a separator or not
 * @c: character to be tested
 *
 * Return: returns 1 if separator and 0 if not separator
 */
int is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
	    || c == ',' || c == ';' || c == '.' ||
	    c == '!' || c == '?' || c == '"' ||
	    c == '(' || c == ')' || c == '{' || c == '}')
		return (1);
	return (0);
}
