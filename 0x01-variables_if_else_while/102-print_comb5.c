#include <stdio.h>

/**
 * main - entry point for our program
 *
 * Description: Prints out all combinations of two double digit numbers
 * Return: always returns 0
 */
int main(void)
{
	int start = 0;

	while (start < 10)
	{
		int start2 = 0;

		while (start2 < 10)
		{
			int start3 = start;

			while (start3 < 10)
			{
				int start4;

				if (start == start3)
					start4 = start2 + 1;
				else
					start4 = 0;
				while (start4 < 10)
				{
					if (start != 0 || start2 != 0 || start3 != 0 || start4 != 1)
					{
						putchar(',');
						putchar(' ');
					}
					putchar('0' + start);
					putchar('0' + start2);
					putchar(' ');
					putchar('0' + start3);
					putchar('0' + start4);
					start4++;
				}
				start3++;
			}
			start2++;
		}
		start++;
	}
	putchar('\n');
	return (0);
}
