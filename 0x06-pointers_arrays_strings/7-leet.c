#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 *
 * Return: pointer to the newly encoded string
 */
char *leet(char *str)
{
	char *code, *start;

	code = "4BCD3FGHIJK1MN0PQRS7UVWXYZ[\\]^_`4bcd3fghijk1mn0pqrs7uvwxyz";
	start = str;

	while (*start)
	{
		if ('A' <= *start && *start <= 'z')
			*start = code[*start - 'A'];
		start++;
	}
	return (str);
}
