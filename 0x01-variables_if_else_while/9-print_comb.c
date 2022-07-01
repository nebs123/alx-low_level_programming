#include <stdio.h>

/**
 * main - entry point for our program
 *
 * Description: Prints out all combinations of single digit numbers
 * Return: always returns 0
 */
int main(void)
{
	int start = 0;

	while (start < 10)
	{
		putchar('0' + start);
		if (start != 9)
		{
			putchar(',');
			putchar(' ');
		}
		start++;
	}
	putchar('\n');
	return (0);
}
