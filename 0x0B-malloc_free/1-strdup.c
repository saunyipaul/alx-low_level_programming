#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *_strdup - start of prototype function
 * @str: parameter variable
 * function that returns a pointer to a newly allocated space in memory
 * Return: Return NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *new_str;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	new_str = malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
