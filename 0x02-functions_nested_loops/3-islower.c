#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point of function
 *
 * @c: variable
 *
 * Return: 1 if c lowercase 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
