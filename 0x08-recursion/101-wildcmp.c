#include "main.h"

/**
 * wildcmp - compare if two strings are identical
 * @s1: the first string
 * @s2: the second string
 * Return: returns 1 if s1 and s2 are identical and returns 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{

	if (*s2 == '*')
	{
		int n;

		if (*s1 != '\0')
		{
			n = wildcmp(s1 + 1, s2);
			if (n)
				return (1);
			n = wildcmp(s1 + 1, s2 + 1);

			if (n)
				return (1);
		}
		return (wildcmp(s1, s2 + 1));

	} else if (*s1 == '\0' || *s2 == '\0')
		return (*s1 == *s2);

	else
		return (*s1 == *s2 && wildcmp(s1 + 1, s2 + 1));
}
