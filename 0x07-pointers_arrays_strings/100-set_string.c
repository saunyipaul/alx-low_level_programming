#include <string.h>
#include <stdio.h>

/**
 * set_string - entry point function of prototype
 * @s: variable parameter
 * @to: variable parameter
 * function that sets value of a pointer to a chair
 * Return: always 0 otherwise 1
 */

void set_string(char **s, char *to)
{
	*s = to;
}
