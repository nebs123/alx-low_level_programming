#include "main.h"

/**
 * print_rev - prints the string s in reverse
 * @s: the string input
 *
 * Return: void(no return)
 */
void print_rev(char *s)
{
	char *ptr = s;

	while (*ptr)
		ptr++;

	ptr--;

	while (s <= ptr)
	{
		_putchar(*ptr);
		ptr--;
	}
	_putchar('\n');
}
