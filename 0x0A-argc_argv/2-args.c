#include <stdio.h>
#include "main.h"

/**
 * main - entry of program main
 * @argc: number of arguments
 * @argv: arrays number
 * program that prints all arguments it receives
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
