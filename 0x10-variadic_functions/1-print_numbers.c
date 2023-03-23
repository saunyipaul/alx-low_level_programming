#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function prototype
 * @separator: varaiable separator
 * @n: variable
 * function that prints a number and newline
 * Retrun: if separator NULL dont print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int i;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(var, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(var);
	printf("\n");
}
