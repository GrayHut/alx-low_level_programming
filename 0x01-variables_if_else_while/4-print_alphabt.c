#include <stdio.h>
/**
 * main -Print all the alphabets except q and e.
 *
 *Return: Always 0.
 */

int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (s != 'q' && s != 'e')
		putchar (s);
	}
	putchar ('\n');

	return (0);
}
