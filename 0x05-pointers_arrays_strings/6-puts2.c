#include <stdio.h>
#include "main.h"

/**
 * puts2 - start of function prototype
 * @str: variable parameter
 * program to print every other character in a string
 */

void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i +=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
