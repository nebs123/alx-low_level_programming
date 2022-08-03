#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first operand
 * @b: second operand
 * Return: sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of b from a
 * @a: first operand
 * @b: second operand
 * Return: subtraction of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: first operand
 * @b: second operand
 * Return: multiplication of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: first operand
 * @b: second operand
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates modulo of a to b
 * @a: first operand
 * @b: second operand
 * Return: modulo of a to b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
