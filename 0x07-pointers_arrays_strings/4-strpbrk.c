#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - entry point of function prototype
 * @s: variable parameter
 * @accept: variable parameter
 * program that searches a string for any of a set of bytes
 * Return: alwyas 0 otherwise 1
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
