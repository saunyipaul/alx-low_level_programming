#include <stdio.h>

/**
 * string_toupper - Entry point to function prototype
 * function that changes all lowercase letter of a string to uppercase
 * @n: parameter variable
 * Return: always 0 otherwise 1
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
