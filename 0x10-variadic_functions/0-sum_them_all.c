#include <stdarg.h>
/**
 * sum_them_all - function prototype
 * @n: variable
 * function that sums all the numbers assigned
 * Return: always 0 success
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
