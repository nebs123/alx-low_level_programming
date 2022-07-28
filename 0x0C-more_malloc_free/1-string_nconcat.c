#include "main.h"

/**
 * str_len - computes length of string
 * @ptr: stirng input
 * Return: length of string input
 */
unsigned int str_len(char *ptr)
{
	unsigned int len = 0;

	while (*ptr)
	{
		len++;
		ptr++;
	}
	return (len);
}

/**
 * string_nconcat - concatenates n bytes of string s2 onto string s1
 * @s1: string to which s2 will be concatenated
 * @s2: string concatenated at the end of s1
 * @n: the amount of bytes of s2 that should be concatenated onto s1
 * Return: pointer to newly concatenated stirng
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, p;
	char *ptr;

	if (s1 == NULL)
		len_s1 = 0;
	else
		len_s1 = str_len(s1);
	if (s2 == NULL)
		len_s2 = 0;
	else
		len_s2 = str_len(s2);

	if (n < len_s2)
		len_s2 = n;

	ptr = malloc(sizeof(*ptr) * (len_s1 + len_s2 + 1));
	if (ptr == NULL)
		return (NULL);

	for (p = 0; p < len_s1; p++)
		*(ptr + p) = *(s1 + p);
	for (p = 0; p < len_s2; p++)
		*(ptr + len_s1 + p) = *(s2 + p);
	*(ptr + len_s1 + len_s2) = '\0';

	return (ptr);
}
