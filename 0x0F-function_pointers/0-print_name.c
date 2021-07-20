#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that uses a funtion pointer to print name.
 * @name: argument of function.
 * @f: argument of function.
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL)
{
f(name);
}
}
