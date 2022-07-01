#include <stdio.h>

/**
 * main - entry point for our program
 *
 * Description: Prints out digits 0-9
 * Return: always returns 0
 */
int main(void)
{
	char start = '0';

	while (start <= '9')
	{
		putchar(start);
		start++;
	}
	putchar('\n');
	return (0);
}
