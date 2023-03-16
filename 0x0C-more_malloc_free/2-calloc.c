#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *_calloc - function protype
 * @nmemb: variable
 * @size: variable
 * function that allocates memory of an array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
