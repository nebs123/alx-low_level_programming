#include "variadic_functions.h"

/**
 * sum_them_all - returns a sum of all the variable length argumetns
 * @n: number of variable length arguments
 *
 * Return: sum of all the numbers inputted as variable length arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int x;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (x = 0; x < n; x++)
		sum += va_arg(list, int);
	va_end(list);

	return (sum);
}
