#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Description: prints out the alphabet from a-z
 * Return: void (has no return value)
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
