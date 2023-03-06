#include <stdio.h>
#include <string.h>

/**
 * _strchr - entry point of function prototype
 * @s: variable parameter
 * @c: variable parameter
 * program that locates the function in a string
 * Return: always 0 otherwise 1
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
