#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints size bytes of buffer b
 * @b: buffer to be printed
 * @size: size of bytes to be printed
 *
 * Return: void (no return)
 */
void print_buffer(char *b, int size)
{
	int count, pairs, singlet;

	for (count = 0; count < size; count += 10)
	{
		printf("%08x: ", count);
		for (pairs = count; pairs < count + 10; pairs += 2)
		{
			if (pairs + 1 < size)
				printf("%02x%02x ", *(b + pairs), *(b + pairs + 1));
			else if (pairs < size)
				printf("%02x   ", *(b + pairs));
			else
				printf("     ");
		}
		for (singlet = count; singlet < count + 10; singlet++)
		{
			if (singlet < size)
			{
				if (*(b + singlet) > 31)
					printf("%c", *(b + singlet));
				else
					printf(".");
			}
		}
		printf("\n");
	}

	if (size < 0)
		printf("\n");
}
