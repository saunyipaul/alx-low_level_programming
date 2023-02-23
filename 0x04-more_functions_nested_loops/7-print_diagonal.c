#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Entry point of function
 * @n: variable
 * program that prints \ diagonally
 */

void print_diagonal(int n)
{
	int j;
	int i;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (n == 0 || n < 0)
			{
				_putchar('\n');
			}
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
