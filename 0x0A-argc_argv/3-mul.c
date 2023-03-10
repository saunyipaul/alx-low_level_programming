#include <stdio.h>
#include "main.h"

/**
 * _atoi - entry of function atoi
 * @str: parameter
 * Return: always 0 success
 */

int _atoi(const char *str)
{
	int z = 0;
	int sign = 1;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		z = (z * 10) + (*str - '0');
		str++;
	}
	return (z * sign);
}

/**
 * main - entry point of program main
 * @argc: number of arguments
 * @argv: arrays number
 * program that multiplies two numbers
 * Return: alwyas 0 success
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	z = x * y;
	printf("%d\n", z);
	return (0);
}
