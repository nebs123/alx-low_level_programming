#include "main.h"

/**
 * jack_bauer - prints out every minute within a 24 hour day
 *
 * Return: void(no return value)
 */
void jack_bauer(void)
{
	int hr1, hr2, min1, min2;

	for (hr1 = 0; hr1 < 3; hr1++)
	{
		for (hr2 = 0; hr1 == 2 ? hr2 < 4 : hr2 < 10; hr2++)
		{
			for (min1 = 0; min1 < 6; min1++)
			{
				for (min2 = 0; min2 < 10; min2++)
				{
					_putchar('0' + hr1);
					_putchar('0' + hr2);
					_putchar(':');
					_putchar('0' + min1);
					_putchar('0' + min2);
					_putchar('\n');
				}
			}
		}
	}

}
