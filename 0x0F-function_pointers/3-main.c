#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program to perform two operand operations
 * @argc: number of command line arguements
 * @argv: command line arguements(operands and ops)
 * Return: 0 on success, 98,99 and 100 on Error
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);
	if (f == NULL || *(argv[2] + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(num1, num2));

	return (0);
}
