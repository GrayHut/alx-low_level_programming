#include <stdio.h>
/**
 *_isdigit(): determines if value is a number or otherwise (0 through 9)

 *@c: variable text
 *Return: always 0
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
