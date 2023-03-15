#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - protype entry point of the function
 * @s1: variable pointer
 * @s2: parameter variable
 * function that concatenates two strings
 * Return: if Null treat empty string
 */

char *str_concat(char *s1, char *s2)
{
	size_t length1;
	size_t length2;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = strlen(s1);
	length2 = strlen(s2);

	new_str = malloc((length1 + length2 + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, s1);
	strcat(new_str, s2);
	return (new_str);
}
