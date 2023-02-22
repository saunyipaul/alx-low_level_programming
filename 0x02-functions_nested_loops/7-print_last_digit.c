#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry of function
 *
 * @j: variable assigned
 *
 * prints the last digit of a number
 *
 * Return: always 0 success
 */

int print_last_digit(int j)
{
	int i;

	i = j % 10;

	_putchar(i + '0');
	return (0);
}
