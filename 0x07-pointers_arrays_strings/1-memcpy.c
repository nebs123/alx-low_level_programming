#include "main.h"

/**
 * _memcpy - copies n bytes from src memory area to dest memory area
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the no of bytes to copy
 * Return: pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	return (dest);
}
