#include <stdio.h>
#include "main.h"

/**
 * main - entry point of program
 * @argc: number of argument
 * @argv: array of argument
 * program to print name of the program
 *
 * Return: Always 0 success
 */

int main(int argc  __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
