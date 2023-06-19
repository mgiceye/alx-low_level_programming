#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a var of a struct dog
 * @d: pointer to sruct dog
 * @name: initialization name
 * @age: initialization age
 * @owner: initialization owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
