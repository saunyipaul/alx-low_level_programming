#include <stdio.h>

/**
 * _pow_recursion - function recursion of x power y
 * @x: parameter integer to power
 * @y: parameter to power with
 * Return: y < 0 return 1 otherwise 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
