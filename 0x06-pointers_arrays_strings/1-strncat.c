#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - Entry point of protype
 * @dest: variable parameter
 * @src: variable parameter
 * @n: vaariable parameter
 * function that concatenates two strings
 * Return: Always 0 otherwise 1
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + n] = '\0';
	return (dest);
}
