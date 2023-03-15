#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *argstostr - entry of function prototype
 * @ac: variable
 * @av: variable
 * function that concatenates all the arguments
 * Return: Null if ac == 0 || av == NULL
 */

char *argstostr(int ac, char **av)
{
	int i;
	int length = 0;
	char *result;
	int present_pos = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}
	result = malloc(length * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i =0; i < ac; i++)
	{
		strcpy(result + present_pos, av[i]);
		present_pos += strlen(av[i]);
		result[present_pos] = '\n';
		present_pos++;
	}
	result[length - 1] = '\n';
	return (result);
}
