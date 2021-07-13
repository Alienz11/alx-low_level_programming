#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * create_array - check the code for Alx school students.
 * @c: argument of function.
 * @size: argument of function.
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)

{
unsigned int i;
char *array;

array = malloc(size * (sizeof(c)));

if (size == 0)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
if (array == NULL)
{
return (NULL);
}
array[i] = c;
}
return (array);
}
