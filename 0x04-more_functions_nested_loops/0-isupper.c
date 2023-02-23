#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - Entry point of function
 *
 * @c: variable
 *
 * program to check for uppercase letter
 *
 * Return: return 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
