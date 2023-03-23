#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *sum_them_all-> function adds all the arguments in it together.
 *@n:compulsory arguments.
 *Return: integer sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	int j = 0, sum = 0;

	va_list ap;

	va_start(ap, args);

	if (n == 0)
	{
		return (0);
	}

	for (j = 0; j < args; j++)
	{
		sum += var_arg(ap, int);
	}
		va_end(ap)
		return (sum);
}
