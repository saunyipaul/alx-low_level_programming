#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function protype entry point
 * @array: parametr
 * @size: parameter
 * @cmp: variable
 * function that searches for an integer
 * Return: return -1 if size<=0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
