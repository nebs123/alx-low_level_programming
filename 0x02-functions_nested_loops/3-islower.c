#include "main.h"
/**
 * _islower - returns 1 if c is a lowercase character or 0 otherwise
 * @c: the character to be tested
 *
 * Return: 1 if c is lowercase and 0 if c isn't lowercase
 */
int _islower(int c)
{
	char cmp;

	for (cmp = 'a'; cmp <= 'z'; cmp++)
	{
		if (c == cmp)
			return (1);
	}
	return (0);
}
