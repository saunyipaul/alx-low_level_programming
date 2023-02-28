#include <stdio.h>
#include "main.h"

/**
 * puts2 - start of function prototype
 * @str: variable parameter
 * program to print every other character in a string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
