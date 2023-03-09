#include <stdio.h>

/**
 * _sqrt_recursion - function to get the square root of a number
 * @n: parameter
 *
 * Return: if no natural number return -1
 */

int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	sqrt = _sqrt_recursion(n / 2) * 2;

	if (sqrt * sqrt > n)
	{
		return (_sqrt_recursion(n / 2));
	}
	if (sqrt * sqrt == n)
	{
	return (sqrt);
	}
	return (_sqrt_recursion(n / 2 + 1));
}
