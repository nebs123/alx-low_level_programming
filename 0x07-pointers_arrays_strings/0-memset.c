#include "main.h"

/**
 * _memset - fill the first n bytes of buffer with constant byte
 * @s: the memory area to be filled
 * @b: the constant byte to be assigned
 * @n: the no of bytes to fill in the memory area
 * Return: returns a pointer to the start of the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}

	return (s);
}
