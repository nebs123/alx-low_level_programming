#include "main.h"

/**
 * _strspn - returns no of bytes in initial segment that
 * consist of character in accept
 * @s: string input to be checked
 * @accept: the characters to be searched in input
 *
 * Return: returns the no of bytes that are in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s)
	{
		char *ptr = accept;

		while (*ptr)
		{
			if (*s == *ptr)
			{
				n++;
				break;
			}
			ptr++;
		}

		if (!*ptr)
		{
			return (n);
		}
		s++;
	}
	return (n);
}
