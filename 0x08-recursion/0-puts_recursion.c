#include "main.h"

/**
 * _puts_recursion - recursively prints out the string pointed by s
 * @s: string to be printed
 *
 * Return: void (no return)
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
