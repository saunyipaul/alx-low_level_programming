#include <stdio.h>
#include "main.h"

/**
 * main - entry of program main
 * @agrc: number of arguments
 * @agrv: array of numbers
 * program that print the number of arguments passed
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
