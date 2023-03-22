#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

/**
 * array_iterator - entry point of prototype function
 * @array: parameter
 * @size: variable
 * @action: variable
 * function that executes a function given as a parameter
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
