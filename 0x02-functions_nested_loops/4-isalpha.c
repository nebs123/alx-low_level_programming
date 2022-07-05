#include "main.h"
/**
 * _isalpha - checks whether c is an alphabet character or not
 * @c: input character to be tested
 *
 * Return: returns 1 if c is a character. Otherwise returns 0;
 */
int _isalpha(int c)
{
	char cmp;

	for (cmp = 'A'; cmp <= 'Z'; cmp++)
	{
		if (cmp == c)
			return (1);
	}

	for (cmp = 'a'; cmp <= 'z'; cmp++)
	{
		if (cmp == c)
			return (1);
	}

	return (0);
}
