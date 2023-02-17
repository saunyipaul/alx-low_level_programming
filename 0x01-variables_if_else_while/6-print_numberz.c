#include <stdio.h>

/**
 * main - Entry point
 *
 * while loop - for iteration
 *
 * Return: (0) Always success
 */

int main(void)
{
	int n = 0;

	do{
		putchar(n + '0');
		n++;
	}while (n < 10);

	putchar('\n');
	return (0);
}
