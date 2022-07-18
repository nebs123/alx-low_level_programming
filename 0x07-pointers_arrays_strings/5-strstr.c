#include "main.h"

/**
 * _strstr - returns the location of a substring in a string
 * @haystack: the string to be searched
 * @needle: the substring to searhc
 *
 * Return: pointer to the start of the substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *ptr = needle, *start = haystack;

		while (*start && *ptr)
		{
			if (*start != *ptr)
				break;
			start++;
			ptr++;
		}
		if (!*ptr)
			return (haystack);
		haystack++;
	}
	return (0);
}
