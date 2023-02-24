#include <stdio.h>

/**
 *print_numbers() - prints numbers from 0-9
 *int i: variable text
 *Return: always 0
 */

void print_numbers(void)
{
	for (int i = 0; int i <= 9; i++)
	{
		putchar(i);
		putchar("\n");
	}

	return (0);
}
