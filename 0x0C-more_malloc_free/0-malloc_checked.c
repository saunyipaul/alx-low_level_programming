#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *malloc_checked - entry of function prototype
 * @b: parameter
 * function that allocates memory using malloc
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
