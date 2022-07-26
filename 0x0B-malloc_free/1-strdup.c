#include "main.h"

/**
 * _strdup - creates a copy of str in new memory location
 * @str: the string to be copied
 *
 * Return: NULL on failure, otherwise returns pointer to new string
 */
char *_strdup(char *str)
{
	char *ptr, *new;
	int length = 0, n;

	if (str == NULL)
		return (NULL);

	ptr = str;
	while (*ptr)
	{
		ptr++;
		length++;
	}
	new = (char *) malloc(sizeof(char) * (length + 1));

	if (new == NULL)
		return (NULL);

	for (n = 0; n < length; n++)
		*(new + n) = *(str + n);
	*(new + n) = '\0';

	return (new);
}
