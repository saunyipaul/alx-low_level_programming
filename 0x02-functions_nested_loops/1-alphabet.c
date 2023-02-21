#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Entry point of function
 *
 * print all alphabets
 *
 * Return: always 0 success
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
