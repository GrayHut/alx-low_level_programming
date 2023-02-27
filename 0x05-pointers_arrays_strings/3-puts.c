#include "main.h"

/**
 * _puts - prints string to stdout.
 * @str:pointer to char data-type
 * Return: always zero.
 */

void _puts(char *str)
{
	int i;

	for (; i = 0; str[i] != '\0'; i++)

		putchar(str[i]);


	putchar('\n');
}
