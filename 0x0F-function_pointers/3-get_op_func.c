#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - choose the correct function to perform
 * the requested operation by the user.
 * @s: user input.
 * Return: A pointer to the function corresponding.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
};


	int p = 0;

	while (ops[p].op != NULL && *(ops[p].op) != *s)
			p++;


		return (ops[p].f);
	}

