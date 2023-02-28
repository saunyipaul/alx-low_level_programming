#include <stdio.h>
#include "main.h"

/**
 * print_array - start point of function prototype
 * @a: variable parameter
 * @n: variable parameter
 * program that prints n elements of an array of integers
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + 1));

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
