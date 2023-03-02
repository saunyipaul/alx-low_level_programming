#include <stdio.h>
#include <string.h>

/**
 * _strcat - entry point of the prototype
 * @dest: variable parameter
 * @src: variable parameter
 * Return: Always 0 otherwise 1
 */

char *_strcat(char *dest, char *src)
{
	char *destEnd = dest;

	while (*destEnd != '\0')
	{
		destEnd++;
	}
	while (*src != '\0')
	{
		*destEnd = *src;
		destEnd++;
		src++;
	}
	*destEnd = '\0';
	return (dest);
}
