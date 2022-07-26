#include "main.h"

/**
 * str_concat - concatenates two string in new memory
 * @s1: first string to be concatenated
 * @s2: second(following) string to be concatenated
 *
 * Return: returns NULL on failure otherwise returns pointer
 * to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2, n;
	char *ptr;

	if (s1 != NULL)
	{
		ptr = s1;
		len_s1 = 0;
		while (*ptr)
		{
			len_s1++;
			ptr++;
		}
	} else
		len_s1 = 0;

	if (s2 != NULL)
	{
		ptr = s2;
		len_s2 = 0;
		while (*ptr)
		{
			len_s2++;
			ptr++;
		}
	} else
		len_s2 = 0;
	ptr = (char *) malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (n = 0; n < len_s1; n++)
		*(ptr + n) = *(s1 + n);
	for (n = 0; n < len_s2; n++)
		*(ptr + len_s1 + n) = *(s2 + n);
	*(ptr + len_s1 + len_s2) = '\0';
	return (ptr);
}
