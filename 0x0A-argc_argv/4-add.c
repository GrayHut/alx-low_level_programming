#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -> multiple numbers
 * @argc: holds number of command line arguments
 * @argv: array containing the command line arguments
 * Return: 0 (successful execution)
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		result += atoi(argv[i]);
	}

	printf("%d\n", result );
	return (0);
}
