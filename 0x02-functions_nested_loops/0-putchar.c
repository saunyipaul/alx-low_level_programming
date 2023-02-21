#include "main.h"

/**
 * main - Entry point
 *
 * print out _putchar
 *
 * Return: always 0 success
 */

int main(void)
{
	char text[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
