#include <stdio.h>

/**
 * is_palindrome - function that checks a string is a palindrome
 * @s: parameter
 * an empty string is a palindrome
 * Return: if palindrome return 1 otherwise 0
 */

int _string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _string_length(s + 1));
	}
}


int is_palindrome(char *s)
{
	int length = _string_length(s);

	if (length <= 1)
	{
		return (1);
	}
	if (*s == *(s + length - 1))
	{
		return (is_palindrome(s + 1) && is_palindrome(s + length - 2));
	}
	return (0);
}
