#include <stdio.h>
#include <string.h>

/**
 * _strncpy - Entry point of function prototype
 * @dest: variable parameter
 * @src: variable parameter
 * @n: variable parameter
 * function that copies a string
 * Return: always 0 success otherwise 1
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
