#include "function_pointers.h"
/**
 *print_name-> function prints a name.
 *@name: pointer to string name.
 *@f:function to pointer taking char string arguments and
 *returning void.
 *
 *Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		f(name);


		return;
	}
}
