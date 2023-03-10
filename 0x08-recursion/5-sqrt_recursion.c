#include "main.h"
/**
 * _sqrt_recursion-> unction that returns the natural
 * square root of a number
 *@n: parameter whose square root is to be deternined.
 *Return: always return an integer
 */
int _sqrt(int, int);

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (_sqrt(n, n - 1));
}

/**
 * _sqrt - returns natural sqrt of a number.
 * @n: The number.
 * @i: The approximation of the sqrt.
 * Return: The sqrt.
 */

int _sqrt(int n, int i)
{
	int j = i;

	if (i == 0)
		return (-1);

	i = (n / j + j) / 2;

	if (i == j && (i * i) == n)
		return (i);
	if (i == j && (i * i) != n)
		return (-1);
	return (_sqrt(n, i));
}
