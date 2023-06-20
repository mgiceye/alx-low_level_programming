#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
