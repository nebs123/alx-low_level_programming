#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints all the arguement specified
 * @format: format specifier for the arguments to be printed
 *
 * Return: void (no return)
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int x = 0, sep = 0;
	char *str;

	va_start(list, format);
	while (format && *(format + x))
	{
		if (sep && (*(format + x) == 'c' ||  *(format + x) == 's'
			    || *(format + x) == 'f' || *(format + x) == 'i'))
			printf(", ");
		switch (*(format + x))
		{
		case 'c':
			printf("%c", (char) va_arg(list, int));
			sep = 1;
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			sep = 1;
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			sep = 1;
			break;
		case 's':
			str = va_arg(list, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
			sep = 1;
			break;
			break;
		}
		x++;
	}
	va_end(list);
	printf("\n");
}
