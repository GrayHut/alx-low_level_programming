#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints last digit of a random number
 *
 *Return - always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > f)
	{
		printf("Last digit of %d is %d and is greater than 5", n,
		       (n % 10));
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is zero", n, (n % 10));
	}
	else if ((n % 10) < 6)
		&&(n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0",
		       n, (n % 10));
	}
	return (0);
}
