#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - a function that uses a funtion pointer to show integers.
 * @cmp: a function pointer.
 * @array: argument of function.
 * @size: argument of function.
 * Return: Always 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0 || cmp == NULL || array == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
  if (cmp(array[i]))
return (i);
}
return(-1);
}
