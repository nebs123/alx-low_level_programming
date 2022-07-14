#include "main.h"

/**
 * _strncat - concatenates n bytes of src on to the end of dest
 * @dest: pointer to the destination string
 * @src: pointer to the src string
 * @n: the number of bytes to concatenate on dest
 * Return: returns a pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	for (x = 0; x < n && *src; x++, src++, ptr++)
	{
		*ptr = *src;
	}
	*ptr = '\0';
	return (dest);
}
