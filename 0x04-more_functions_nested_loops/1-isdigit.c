#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Entry point of function
 * @c: variable
 * program to check for digits
 * Return: returns 1 if c is a digit otherwise retun 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
