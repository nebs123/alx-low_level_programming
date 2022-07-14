#include "main.h"

/**
 * _strcat - concatenates src ontto the end of dest
 * @dest: pointer to the destination string
 * @src: pointer to the src string
 * Return: returns a pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
