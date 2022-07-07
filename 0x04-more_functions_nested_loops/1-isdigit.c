#include "main.h"

/**
 * _isdigit - checks if integer passed corresponds to a digit character
 * @c: decimal value of character to be tested if it is a digit
 *
 * Return: 1 if c is a digit otherwise returns 0
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
