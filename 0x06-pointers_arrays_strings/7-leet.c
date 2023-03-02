#include <stdio.h>

/**
 * leet - entry point of function prototype
 * @n: variable parameter
 * function that encodes a string into 1337
 * Return: always 0 success otherwise 1
 */

char *leet(char *n)
{
	int j;
	int i;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
