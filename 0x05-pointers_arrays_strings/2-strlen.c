#include "main.h"

/**
 * _strlen - returns the lenght of the string
 * @s: string whose length needs to be determined
 *
 * Return: returns an int which is the length of the string pointed to by s
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
