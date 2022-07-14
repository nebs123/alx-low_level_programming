#include "main.h"

/**
 * _strncpy - copies n bytes of src into dest
 * @dest: pointer to destination string which is copied into
 * @src: source pointer from which n bytes are copied
 * @n: number of bytes to copy
 *
 * Return: return pointer to copied(dest) string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;
	char *ptr = dest;

	for (x = 0; x < n && *src; x++, ptr++, src++)
		*ptr = *src;
	for (; x < n; x++, ptr++)
		*ptr = '\0';
	return (dest);
}
