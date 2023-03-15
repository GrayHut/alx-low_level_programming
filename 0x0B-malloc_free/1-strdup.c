#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strdup-> function returns pointer to a newly allocated
 *space in memory containing a copy of string given as a parameter.
 *@str: argument of string in allocated memory.
 *
 *Return: pointer to allocated space in memory.
 */
char *_strdup(char *str)
{
	char *cp;
	int i;
	int j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)

	cp = malloc(sizeof(char) * (i + 1));

	if (cp == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		cp[j] = str[j];

	return (cp);
}
