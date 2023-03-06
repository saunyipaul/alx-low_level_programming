#include <stdio.h>
#include <string.h>

/**
 * _strstr - entry point of function prototype
 * @haystack: variable
 * @needle: variable
 * program function that locates a substring
 * Return: always 0 otherwise 1
 */

char *_strstr(char *haystack, char *needle)
{
	char *h1 = haystack;
	char *n1 = needle;
	char *temp = h1;

	if (*n1 == '\0')
	{
		return (h1);
	}
	while (*h1 != '\0')
	{
		if (*h1 == *n1)
		{
			while (*temp == *n1 && *temp != '\0' && *n1 != '\0')
			{
				temp++;
				n1++;
			}
			if (*n1 == '\0')
			{
				return (h1);
			}
			n1 = needle;
		}
		h1++;
	}
	return (NULL);
}

