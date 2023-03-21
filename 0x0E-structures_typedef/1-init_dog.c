#include "dog.h"
/**
 *init_dog-> initializes the structure dog.
 *@d:pointer to the structure dog to initialize.
 *@name:name to initialize.
 *@age:age to initialize.
 *@owner:owner to initialize.
 *Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
