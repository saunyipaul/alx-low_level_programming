#include <stdio.h>

/**
 * cap_string - entry of function prototype
 * @n: variable parameter
 * function that capitalizes the words of a string
 * Return: always 0 success otherwise 1
 */

char *cap_string(char *n)
{
	int start = 0;

	while (n[start])
	{
		while (!(n[start] >= 'a' && n[start] <= 'z'))
			start++;
		if (n[start - 1] == ' ' || n[start - 1] == '\t' || n[start - 1]
				== '\n' || n[start - 1] == ',' || n[start - 1]
				== ';' || n[start - 1] == '.' || n[start - 1]
				== '!' || n[start - 1] == '?' || n[start - 1]
				== '"' || n[start - 1] == '(' || n[start - 1]
				== ')' || n[start - 1] == '{' || n[start - 1]
				== '}' || start == 0)
			n[start] -= 32;
		start++;
	}
	return (n);
}
