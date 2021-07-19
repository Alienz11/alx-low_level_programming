#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A struct fuction that print details of a dog.
 * @d: variable to print name of dog.
 * Return: pointer to dog
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d);
free(d->name);
free(d->owner);
}
}
