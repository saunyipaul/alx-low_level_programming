#include <stdio.h>

/**
 * main - Entry point
 *
 * puts - outputting the size of various types in my machine
 *
 * Return: Always (0) (success)
 *
 */
int main(void)
{
	puts("Size of a char: %ld byte(s)", sizeof(char));
	puts("Size of an int: %ld byte(s)", sizeof(int));
	puts("Size of a long int: %ld byte(s)", sizeof(long int));
	puts("Size of a long long int: %ld byte(S)", sizeof(long long int));
	puts("Size of a float: %ld byte(s)", sizeof(float));
	return (0);
}
