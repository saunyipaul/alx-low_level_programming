#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Entry point of function
 *
 * @c: variable c
 *
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
