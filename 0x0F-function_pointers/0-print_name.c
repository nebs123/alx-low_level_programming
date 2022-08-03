#include "function_pointers.h"

/**
 * print_name - prints the name of input
 * @name: string to be printed
 * @f: the function that prints the name
 * Return: void (no return)
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
