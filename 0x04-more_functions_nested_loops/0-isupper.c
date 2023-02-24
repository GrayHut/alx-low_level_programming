#include <stdio.h>

/**
 *_isupper() - determines if a character is uppercase or lowercase
 *return : 0 or 1
 */

int _isupper(int c)

{
	for (c >= 'a'; c <= 'z'; c++)

	{
		return (0);
	}

	for (c >= 'A'; c <= 'Z'; c++)

	{
		return (1);
	}
}
