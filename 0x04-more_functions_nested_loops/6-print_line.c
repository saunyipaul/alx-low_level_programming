#include <stdio.h>
#include "main.h"

/**
 * print_line - entry point of function
 * @n: variable
 * program draws a straight line
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
