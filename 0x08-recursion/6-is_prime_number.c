#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - function to check the prime numbers
 * is_prime_helper - function to count numbers
 * @n: parameter
 * Return: prime number return 1 otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, 3));
}

/**
 * is_prime_helper - function to count
 * @n: parameter
 * @i: parameter
 * Return: 1 otherwise 0
 */

int is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 2));
}
