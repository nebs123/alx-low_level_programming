#include "main.h"

/**
 * print_sign - prints +,-,0 and returns 1,-1,0 if n is positive, negative
 * and zero respectively
 * @n: the number to be checked
 *
 * Return: 1 if n > 0 , -1 if n < 0 or 0 if n == 0
 */
int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	} else if (n < 0)
	{
		_putchar('-');
		ret = -1;
	} else
	{
		_putchar('0');
		ret = 0;
	}
	return (ret);
}
