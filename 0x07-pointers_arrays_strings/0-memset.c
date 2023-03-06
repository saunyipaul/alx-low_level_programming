#include <stdio.h>
#include <string.h>

/**
 * _memset - entry point of function prototype
 * @s: parameter variable
 * @b: varaiable parameter
 * @n: variable parameter
 * program that fills memory with a constant byte
 * Return: returns 0 otherwise 1
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
