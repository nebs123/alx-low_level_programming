#include "main.h"

/**
 * puts_half - prints out the second half of the input string
 * @str: input string
 *
 * Return: void(no return)
 */
void puts_half(char *str)
{
	int n, count = 0;

	while (*str)
	{
		str++;
		count++;
	}
	if (count % 2 == 0)
		n = count / 2;
	else
		n = (count - 1) / 2;

	for (; n > 0; n--)
		_putchar(*(str - n));

	_putchar('\n');
}
