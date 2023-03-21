#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return (0);
	}

	if (*d == NULL)
	{
		(*d).name = "nil";
	}
	if (*d == NULL)
	{
		(*d).owner = "nil";
	}

	printf("Name of dog:%s\n Age:%.1f\n Owner:%s\n", (*d).name,
	       (*d).age, (*d).owner);
}
