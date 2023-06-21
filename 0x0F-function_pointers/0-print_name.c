#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - a function that prints a name.
 *  @name: pointer to name.
 * @f: pointer to function.
 *
 *Return : void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
