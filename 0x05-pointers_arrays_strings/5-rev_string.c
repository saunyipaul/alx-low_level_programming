#include <stdio.h>
#include "main.h"
/**
 * rev_string - entry point of function prototype
 * @s: variable parameter
 * program that reverses a string
 */
void rev_string(char *s)
{
	char *z = s;
	char a;

	if (s)
	{
		while (*z)
		{
			z++;
		}
		z--;
		while (s < z)
		{
			a = *s;
			*s++ = *z;
			*z-- = a;
		}
	}
}
