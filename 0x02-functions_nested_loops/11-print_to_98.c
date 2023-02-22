#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point of function
 *
 * @n: variable n
 *
 * program to print all natural numbers separated using a comma and space
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i < 0)
			{
				_putchar('-');
				i = +i;
			}
		}
	}
		else
		{
			for (i = n; i >= 98; i--)
			{
				_putchar(i / 100 + '0');
				_putchar(i % 100 / 10 + '0');
				_putchar(i % 10 + '0');

				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
}
