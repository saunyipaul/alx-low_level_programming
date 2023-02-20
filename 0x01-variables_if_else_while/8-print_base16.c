#include <stdio.h>

/**
 * main - Entry point
 *
 * program to print hexadecimal numbers
 *
 * Return: Always 0 success
 */

int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n < 10)
		{
			putchar(n + '0');
		}
		else
		{
			putchar(n - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
