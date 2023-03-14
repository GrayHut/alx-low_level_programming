#include <stdio.h>
/**
*main-> this program prints the number of arguments entered into the comman
*dline.
*@argc: this main argument holds the number of arguments inserted into the
*commandline.
*@argv: holds the strings inserted into the command line.
*Return: 0.
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
