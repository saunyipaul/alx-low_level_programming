#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;
	char *arg;

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
	}
	for (j = 0; arg[j] != '\0'; j++)
	{
		if (!isdigit(arg[j]))
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
