#include "main.h"

/**
 * _puts - prints out the string pointed by str to stdout
 * @str: the string to be printed
 *
 * Return: void(no return);
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
