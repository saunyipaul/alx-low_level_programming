#include "function_pointers.h"

/**
 * print_name - function prototype entry
 * @name: variable
 * @f: pointer
 * function that prints a name uses function pointers
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
