#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *array_range - entry point of function prototype
 * @min: variable
 * @max: variable
 * function that create an array of integers
 * Return: min > max return NULL
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;
	int length_array;

	if (min > max)
	{
		return (NULL);
	}
	length_array = max - min + 1;
	arr = malloc(length_array * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length_array; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
