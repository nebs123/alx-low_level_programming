#include "main.h"

/**
 * _strchr - finds the first occurenece of c in s
 * @s: string to be checked
 * @c: the character to be found
 *
 * Return: returns a pointer to first occurence of c or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
