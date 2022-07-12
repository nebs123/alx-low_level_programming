#include "main.h"

/**
 * rev_string - reverses the inputted string s
 * @s: string to be reversed
 *
 * Return: void(no return)
 */
void rev_string(char *s)
{
	char *ptr = s;

	while (*ptr)
		ptr++;
	ptr--;

	while (s < ptr)
	{
		char temp = *ptr;

		*ptr = *s;
		*s = temp;
		s++;
		ptr--;
	}
}
