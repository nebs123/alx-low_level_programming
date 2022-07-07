#include "main.h"

/**
 * print_most_numbers - print numbers 0-9 excluding 2 and 4
 *
 * Return: returns void
 */
void print_most_numbers(void)
{
	int start;

	for (start = '0'; start <= '9'; start++)
		if (start != '2' && start != '4')
			_putchar(start);
	_putchar('\n');
}
