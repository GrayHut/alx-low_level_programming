#include "main.h"
/**
 * is_prime_number-> function identifies prime numbers
 * @n: integer parameter to be evaluated
 * @i: iterator
 * Return: always return 1 for prime numbers else 0
 */
int _prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, n - 1));
}

/**
 * _prime -  a function that returns 1 if the input integer is a prime
 *number, otherwise return 0.
 * @n: The input int.
 * @i: iterator.
 * Return: 1 or 0.
 */

int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 1)
		return (0);
	return (_prime(n, i - 1));
}
