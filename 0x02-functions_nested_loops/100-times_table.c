#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Entry point of function
 *
 * program to print a multiplication table
 *
 * @n: variable 
 */

void print_times_table(int n)
{
	int i;
	int j;
	int k;
	int result;
	int count = 0;

	if ( n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
		}
		do
		{
			_putchar(result % 10 + '0');
			result /= 10;
			count++;
		}
		while (result > 0);
		for (k = count; k < 4; k++)
		{
			_putchar(' ');
		}
		_putchar('\t');
	}
	putchar('\n');
}
