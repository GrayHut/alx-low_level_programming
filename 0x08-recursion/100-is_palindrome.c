#include "main.h"
/**
 * is_palindrome-> function that returns 1 if a string is a palindrome
 * and 0 if not
 *@s: string to be analysed
 *Return: alaways 0 or 1
 */



int strl(char *);
int palindrome_helper(char *, int);

int is_palindrome(char *s)
{
	int len;

	len = strl(s);

	if (len <= 1)
		return (1);

	return (palindrome_helper(s, len));
}

/**
 * strl - Finds the length of a string.
 * @s: A pointer to the base address of the string.
 * Return: THe string length.
 */

int strl(char *s)
{
	if (!*s)
		return (0);

	return (1 + strl(s + 1));
}

/**
 * palindrome_helper - determines if a string is a palindrome.
 *
 * @s: a pointer to the string.
 * @len: String length.
 *
 * Return: 1 if is string is a palindrome or 0 in otherwise.
 */

int palindrome_helper(char *s, int len)
{
	if (len <= 1)
		return (1);

	else if (*s == *(s + len - 1))
		return (palindrome_helper(s + 1, len - 2));
	else
		return (0);
}
