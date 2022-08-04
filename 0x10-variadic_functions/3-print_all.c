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
	unsigned int x = 0;
	char *str;

	va_start(list, format);
	while (*(format + x))
	{
		if (x != 0 &&
		    (*(format + x) == 'c' ||  *(format + x) == 's'
		     || *(format + x) == 'f' || *(format + x) == 'i'))
			printf(", ");

		switch (*(format + x))
		{
		case 'c':
			printf("%c", (char) va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			if (str)
				printf("%s", str);
			while(!str)
			{
				printf("(nil)");
				str = "1";
			}
			break;
		}
		x++;
	}
	va_end(list);
	printf("\n");
}
