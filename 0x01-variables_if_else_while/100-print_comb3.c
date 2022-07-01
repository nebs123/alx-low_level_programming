#include <stdio.h>

/**
 * main - entry point for our program
 *
 * Description: Prints out all combinations of doublee digit numbers
 * Return: always returns 0
 */
int main(void)
{
	int start = 0;

	while (start < 10)
	{
		int start2 = start + 1;

		while (start2 < 10)
		{
			if (start != 0 || start2 != 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar('0' + start);
			putchar('0' + start2);

			start2++;
		}
		start++;
	}
	putchar('\n');
	return (0);
}
