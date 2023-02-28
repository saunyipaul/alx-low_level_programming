#include <stdio.h>
#include "main.h"

/**
 * _atoi - entry point of function prototype
 * @s: variable parameter
 * Return: value
 * program that converts a string to an integer
 */

int _atoi(char *s)
{
	int x = 0;
	int y = 0;
	int z = 0;
	int length = 0;
	int j = 0;
	int digit = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (x < length && j == 0)
	{
		if (s[x] == '-')
		{
			++y;
		}
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';

			if (y % 2)
				digit = -digit;
			z = z * 10 + digit;
			j = 1;

			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			j = 0;
		}
		x++;
	}
	if (j == 0)
		return (0);
	return (z);
}
