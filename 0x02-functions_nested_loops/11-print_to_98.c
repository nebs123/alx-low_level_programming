#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints out the range of numbers from n to 98
 * @n: the start value from which the range to 98 is printed
 *
 * Return: void (no return value)
 */
void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
				printf(", ");
		}
	} else
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
				printf(", ");
		}
	}
	printf("\n");
}
