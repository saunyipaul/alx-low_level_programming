#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - Entry point of the function
 *
 * @j: variable assigning
 *
 * compute the absolute value of an integer
 *
 * Return: always 0 success
 */

int _abs(int j)
{
	if (j < 0)
	{
		return (-j);
	}
	else
	{
		return (j);
	}
	return (0);
}
