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

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
