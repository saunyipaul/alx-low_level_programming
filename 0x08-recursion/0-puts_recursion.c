#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - entry point of function
 * @s: varaiable parameter
 * function that prints a string in recursion
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else 
		_putchar('\n');
}
