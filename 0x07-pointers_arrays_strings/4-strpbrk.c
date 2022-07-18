#include "main.h"

/**
 * _strpbrk - locates the first occurrence of char's in accept in string s
 * @s: string to be searched
 * @accept: set of bytes to compare to in s
 *
 * Return: returns pointer to 1st occurence of one of accept chars in s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *ptr = accept;

		while (*ptr)
		{
			if (*ptr == *s)
				return (s);
			ptr++;
		}
		s++;
	}
	return (0);
}
