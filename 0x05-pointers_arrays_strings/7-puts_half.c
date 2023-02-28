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

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 1)
	{
		i = length / 2;
	}
	else
	{
		i = (length - 1) / 2;
	}
	for (i++; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
