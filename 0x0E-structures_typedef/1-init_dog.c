#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A struct fuction taht gives details of a dog.
 * @name: vriable to print name of dog.
 * @age: variable to print age of dog.
 * @owner: variable to print owner of dog.
 * @d: variable to print owner of dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
;
}
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
