#include <stdio.h>
#include <string.h>

/**
 * _memcpy - entry point of function protype
 * @dest: variable parameter
 * @src: variable parameter
 * @n: variable parameter
 * program that copies memory area
 * Return: always 0 otherwise 1
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
