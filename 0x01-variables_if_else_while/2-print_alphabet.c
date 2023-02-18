#include <stdio.h>

/**
 * main - Prints all the alphabet letters in lowercase.
 *
 * Return: always zero.
 */

int main(void)
{
	char ch;

	ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
