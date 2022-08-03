#include "3-calc.h"

/**
 * get_op_func - returns corresponding op function based on operator
 * @s: char pointer to the opp
 *
 * Return: function pointer to the function corresponding to op char
 * passed in, returns NULL if op has no match
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	return (ops[i].f);
}
