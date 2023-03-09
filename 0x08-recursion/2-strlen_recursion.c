#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - entry point of function prototype
 * @s: variable parameter
 * function that returns length of string
 * Return: always 0 otherwise 1
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
