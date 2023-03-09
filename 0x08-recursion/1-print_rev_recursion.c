#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - entry point of function
 * @s: variable parameter
 * program function that prints a string in reverse
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
