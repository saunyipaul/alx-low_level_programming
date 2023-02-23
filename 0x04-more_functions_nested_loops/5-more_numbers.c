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

	for (i = 1; i <= 10; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
			{
				_putchar('0' + k / 10);
			}
				_putchar('0' + k % 10);
		}
		_putchar('\n');
	}
}
