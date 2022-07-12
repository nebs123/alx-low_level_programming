#include "main.h"

/**
 * _strcpy - copies the string from src to destination
 * @dest: pointer to destination where src is copied to
 * @src: source pointer from which string is copied
 *
 * Return: returns a pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dest);
}
