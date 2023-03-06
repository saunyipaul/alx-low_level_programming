#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - entry of function prototype
 * @s: variable parameter
 * @accept: variable parameter
 * program that gets the length of a prefix substring
 * Return: always 0 otherwise 1
 */

unsigned int _strspn(char *s, char* accept)
{
	unsigned int num = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		num++;
		s++;
	}
	return (num);
}
