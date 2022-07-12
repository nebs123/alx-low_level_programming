#include "main.h"

char *return_end(char *);
/**
 * _atoi - converts string input to a number
 * @s: pointer to the start of the string
 *
 * Return: an int value represetned by the string
 */
int _atoi(char *s)
{
	unsigned int val, mult;
	char *start, *end;
	int neg;

	mult = 1;
	val = 0;
	neg = 0;
	start = s;

	while (*start && (*start < '0' || *start > '9'))
	{
		if (*start == '-')
			neg++;
		start++;
	}
	end = return_end(start);
	while (start <= --end)
	{
		val += (*end - '0') * mult;
		mult *= 10;
	}

	if (neg % 2 == 1)
		return (-val);
	return (val);
}

/**
 * return_end - returns a pointer to the end of the number starting at s
 * @s: pointer to the 1st digit of a number
 *
 * Return: a pointer to the next char after the end of the number
 */
char *return_end(char *s)
{
	while (*s && *s >= '0' && *s <= '9')
		s++;
	return (s);
}
