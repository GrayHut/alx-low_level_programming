#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings-> function that prints strings.
 *@separator: string to printed in  between strings.
 *@n: number of strings to be printed.
 *
 *Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *str;
	va_list ap;

	va_start(ap, n);
		for (j = 0; j < n; j++)
		{
			str = va_arg(ap, char*);
			if (str != 0)
			{
			printf("%s", str);
			}
			else
			{
				printf("(nil)");
			}

			if (j != (n-1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}

printf("\n");
va_end(ap);
}
