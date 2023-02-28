#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - Entry of function
 * @s: variable s
 * program to print reverse statement
 */

void print_rev(char *s)
{
	int j = 0;

	while (s[j])
		j++;

	while (j--)
		_putchar(s[j]);

	_putchar('\n');
}
