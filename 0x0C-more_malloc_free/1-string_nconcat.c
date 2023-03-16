#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *string_nconcat - entry point of prototype function
 * @s1: parameter
 * @s2: parameter
 * function that concatenates two strings
 * Return: fails return NULL if NULL passed empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_s1;
	unsigned int length_s2;
	unsigned int copy_length;
	char *totals;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length_s1 = strlen(s1);
	length_s2 = strlen(s2);
	/* copy_length = (n >= length_s2) ? length_s2 : n; */
	if (n >= length_s2)
	{
		copy_length = length_s2;
	}
	else
	{
		copy_length = n;
	}
	totals = (char *) malloc(sizeof(char) * (length_s1 + copy_length + 1));
	if (totals == NULL)
	{
		return (NULL);
	}
	strcpy(totals, s1);
	strncat(totals, s2, copy_length);
	totals[length_s1 + copy_length] = '\0';
	return (totals);
}
