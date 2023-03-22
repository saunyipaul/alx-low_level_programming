#include "3-calc.h"
#include <stdlib.h>

/**
 * *get_op_func - entry point of prototype
 * @s: varibale
 * function that slects correct function to perform the operation of user
 * Return: always 0 success
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
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op != *s)
			i++;
			return (ops[i].f);
}
