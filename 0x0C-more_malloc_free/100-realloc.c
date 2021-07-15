#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * _realloc - check the code for Alx school students.
 * @ptr: argument of function.
 * @old_size: argument of function.
 * @new_size: argument of function.
 * Return: Always 0 (Success)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

void *str;
char *ptr_dup, *sub;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (!ptr)
{
str = malloc(new_size);

if (!str)
return (NULL);

return (str);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

ptr_dup = ptr;
str = malloc(sizeof(*ptr_dup) * new_size);

if (!str)
{
free(ptr);
return (NULL);
}
sub = str;

for (i = 0; i < old_size && i < new_size; i)
sub[i] = *ptr_dup++;

free(ptr);
return (str);
}
