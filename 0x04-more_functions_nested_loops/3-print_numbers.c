#include <stdio.h>

/**
 *print_numbers() - prints numbers from 0-9
 *int i: variable text
 *Return: always 0
 */

void print_numbers(void)
{
	int i;
	for ( i = 0; i <= 9; i++)
	{
		_putchar(i);
		_putchar("\n");
	}

	return (0);
}
