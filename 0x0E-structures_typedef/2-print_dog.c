#include <stdio.h>
#include "dog.h"

/**
 *
 *
 *
 *
 *
 */
void print_dog(struct dog *d)
{
  if (d == NULL)
  {
    printf(" ");
  }
  if (d->name == NULL)
  {
    d->name = "nil";
  }
  if (d->owner == NULL)
  {
    d->owner = "nil";
  }

  printf("Name: %s\n", d->name);
  printf("AGE: %f\n", d->age);
  printf("Owner: %s\n", d->owner);
}
