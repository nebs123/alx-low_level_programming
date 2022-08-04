#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints the inputted numbers with separator in between
 * @separator: separator for numbers to be printed
 * @n: no of numbers to be printed
 * Return: void (no return)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(list, int));
		if (x != (n - 1))
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
