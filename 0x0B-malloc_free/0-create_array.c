#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - start of function
 * @size: size of parameter
 * @c: parameter
 * function that creates an array of chars, intializes it wit aspecific cahr
 * Return: Returns NULL if size = 0
 */

char *create_array(unsigned int  size, char c)
{
	char *arr = malloc(size * sizeof(char));
	unsigned int i;
	
	if (size == 0)
	{
		return (NULL);
	}
	
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
