#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Entry point of the function
 *
 * print time from 00:00 to 23:59
 *
 * Return: always 0
 */

void jack_bauer(void)
{
	int hours;
	int min;

	for (hours = 0; hours < 24; hours++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
