#include "main.h"

/**
 * _puts - prints string to stdout.
 * @str:pointer to char data-type;
 * Return: always zero.
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
