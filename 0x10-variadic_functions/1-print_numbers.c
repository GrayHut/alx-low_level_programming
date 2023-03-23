#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers-> function prints numbers with a string in between
 *and ends with a new line.
 *@separator:string argument to be printed in between the numbers.
 *@n: number of numbers.
 *Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	int number;
	va_list ap;

	va_start(ap, n);

	if (separator != NULL && n != 0)
	{
		for (j = 0; j < n; j++)
		{
			number = va_arg(ap, int);
			printf("%d", number);

			if (j < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}

	va_end(ap);
	printf("\n");

}
