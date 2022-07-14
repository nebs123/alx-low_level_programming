#include "main.h"

/**
 * _strcmp - lexographically compares s1 and s2
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: negative if s1 less than s2 , positive if s1 greater than s2 and
 * 0 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 - *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
