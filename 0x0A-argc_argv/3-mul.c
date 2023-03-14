#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*main-> program gives the result of multiplying two integers.
*@argc: paramter holds the number of commandline arguments.
*@argv: parameter holds the strings entered into the commandline.
*Return: 0.
*/

int main(int argc, char *argv[])
{
	int j;
	long int y, result;

	result = 1;

	if (argc == 3)
	{
		for (j = 1; j < 3; j++)
		{
			y = strtol(argv[j], NULL, 10);
			result *= y;
		}
		printf("%ld\n", result);
	}
	else
	{
		printf("error\n");
	}

	return (0);
}
