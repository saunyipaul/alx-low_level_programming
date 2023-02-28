#include <stdio.h>
#include "main.h"

/**
 * swap_int - entry function
 * @a: variable a
 * @b: variable b
 * program to swap vallue of two integers
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
