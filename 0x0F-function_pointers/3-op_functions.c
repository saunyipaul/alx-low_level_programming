#include <string.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - entry of function add
 * @a: variable
 * @b: variable
 * function for sum
 * Return: alwyas 0 success
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - entry of function subtraction
 * @a: variable
 * @b: variable
 * function for subtraction
 * Return: alwyas 0 success
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - entry of function multiplication
 * @a: variable
 * @b: variable
 * function for multiplication
 * Return: alwyas 0 success
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - entry of function division
 * @a: variable
 * @b: variable
 * function for division
 * Return: alwyas 0 success
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - entry of function remainder
 * @a: variable
 * @b: variable
 * function for modulas
 * Return: alwyas 0 success
 */

int op_mod(int a, int b)
{
	return (a % b);
}
