#include "main.h"

/**
 * _print_rev_recursion - recursively print a string in reverse order
 * @s: string to be printed
 *
 * Return: void (no return)
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
