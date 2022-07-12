#include "main.h"

/**
 * puts2 - prints out every other character from a string input
 * @str: the string to be outputted
 *
 * Return: void (no return)
 */
void puts2(char *str)
{
	int x = 0;

	while (*str)
	{
		if (x % 2 == 0)
			_putchar(*str);
		str++;
		x++;
	}
	_putchar('\n');
}
