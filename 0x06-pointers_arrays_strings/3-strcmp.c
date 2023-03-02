#include <stdio.h>
#include <string.h>

/**
 * _strcmp - Entry point of function prototype
 * @s1: variable parameter
 * @s2: variable parameter
 * function that compares two strings
 * Return: always 0 success otherwise 1
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
