#include "main.h"

/**
 * rot13 - encodes a string into ROT13
 * @str: the string to be encoded
 *
 * Return: pointer to the newly encoded string
 */
char *rot13(char *str)
{
	char *code, *start;

	code = "NOPQRSTUVWXYZABCDEFGHIJKLM[\\]^_`nopqrstuvwxyzabcdefghijklm";
	start = str;

	while (*start)
	{
		if ('A' <= *start && *start <= 'z')
			*start = code[*start - 'A'];
		start++;
	}
	return (str);
}
