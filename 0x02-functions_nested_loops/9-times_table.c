#include <stdio.h>
#include "main.h"

/**
 * times_table - Entry point of function
 *
 * program that prints out a timetable
 */

void times_table(void)
{
	int i;
	int j;
	int ans;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ans = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			else if (ans < 10)
			{
				_putchar(' ');
				_putchar(ans + '0');
			}
			else
			{
				_putchar(ans / 10 + '0');
				_putchar(ans % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

