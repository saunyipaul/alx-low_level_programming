#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry point of function
 * program that print 14 times numbers 1 to 14
 */

void more_numbers(void)
{
	int i;
	int k;
	int j;

	for (i = 0; i <= 14; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			_putchar(k + '0');
		}
		for (j = 10; j <= 14; j++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
