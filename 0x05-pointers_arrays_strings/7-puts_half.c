#include <stdio.h>
#include "main.h"

/**
 * puts_half - Entry of function prototype
 * @str: variabled parameter
 * program that prints half of a string
 */

void puts_half(char *str)
{
	int length = 0;
	int i;
	int start = length / 2;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 != 0 && start != 0)
	{
		start += 1;
	}
	else if (length % 2 != 0 && start == 0)
	{
		start = 1;
	}
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
