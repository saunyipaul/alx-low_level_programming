#include <stdio.h>
#include "main.h"

/**
 * _strcpy - entry point function of protype
 * @dest: variable parameter
 * @src: varaible parameter
 * Return: return is dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
