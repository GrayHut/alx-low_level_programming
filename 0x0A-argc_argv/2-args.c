#include <stdio.h>
/**
 *main-> program prints all commandline arguments,
 *followed by a new line after each.
 *@argc:parameter that contains the number of strings in argv.
 *@argv:holds strings entered into the command line.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
