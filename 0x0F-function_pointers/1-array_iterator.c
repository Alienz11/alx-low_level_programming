#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that uses a funtion pointer to interact.
 * @action: a function pointer.
 * @array: argument of function.
 * @size: argument of function.
 * Return: Always 0 (Success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (action != NULL && array != NULL)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
