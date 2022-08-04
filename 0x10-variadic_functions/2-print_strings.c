#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints the strings that are given as var length arg
 * @separator: string to serve as separator
 * @n: the number of strings to be printed
 * Return: void (no return)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		char *ptr;

		ptr = va_arg(list, char *);
		if (ptr)
			printf("%s", ptr);
		else
			printf("(nil)");
		if (x != (n - 1))
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
