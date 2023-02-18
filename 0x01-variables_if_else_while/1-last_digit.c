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
	printf("Last digit of %d is", n);
	if ((n % 10) > f)
	{
		printf("%d and is greater than 5", (n % 10));
	}
	else if ((n % 10) == 0)
	{
		printf("%d and is zero", (n % 10));
	}
	else if ((n % 10) < 6)
		&&(n % 10) != 0)
	{
		printf("%d and is less than 6 and not 0",
		       (n % 10));
	}
	return (0);
}
