#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function prototype
 * @separator: separator variable
 * @n: variable
 * function that prints a string and a newline
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int i;
	char *str;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(var, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(var);
	printf("\n");
}
