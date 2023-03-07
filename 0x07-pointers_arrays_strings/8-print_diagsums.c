#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - entry point of function prototype
 * @a: variable parameter
 * @size: variable parameter
 * diagram that prints the sum of two diagonals of a square matrix
 * Return: always 0 success 1
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i*size + i);
		sum2 += *(a + i*size + size - 1 -i);
	}
	printf("%d, %d\n", sum1, sum2);
}
