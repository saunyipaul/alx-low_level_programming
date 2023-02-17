#include <stdio.h>
/**
 * main - Entry point
 *
 * for loop and if statement and operand !=
 *
 * Return: always 0 success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
