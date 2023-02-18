#include <stdio.h>

/**
 *main - prints all the numbers of base 16 in lowercase.
 *
 *Return: always 0
 */

int main(void)
{
	int  hex;

	char hexa;

	for (hex = 0; hex < 10; hex++)
	{
		putchar((hex % 10) + '0');
	}
	for (hexa = 'a'; hexa <= 'f'; hexa++)
	{
		putchar(hexa);
	}

	putchar('\n');

	return (0);
}
