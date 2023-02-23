#include <stdio.h>
#include "main.h"

/**
 * print_square - Entry point of function
 * @size: variable
 * program that prints squares 
 */

void print_square(int size)
{
	int j;
	int i;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ( size == 0 || size < 0)
			{
				_putchar('\n');
			}
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
