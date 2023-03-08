#include "main.h"
/**
 * factorial-> this function calculates the factorial (x!) of an integer.
 * @n: integer parameter whose factorial is to be determined.
 * Return: always an integer
 */


int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
		return (n * factorial(n - 1));

}
