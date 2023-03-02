#include <stdio.h>
#include <string.h>

/**
 * reverse_array - Entry point of the function prototype
 * @a: variable parameter
 * @n: variable parameter
 * function that reverses the content of a string
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
