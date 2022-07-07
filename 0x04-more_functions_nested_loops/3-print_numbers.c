#include "main.h"

/**
 * print_numbers - prints out digits 0-9
 *
 * Return: return nothing, void return
 */
void print_numbers(void)
{
	int start;

	for (start = '0'; start <= '9'; start++)
		_putchar(start);
	_putchar('\n');
}
