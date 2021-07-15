#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * malloc_checked - check the code for Alx school students.
 * @b: argument of function.
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)

{
void *str;

str = malloc(b);
if (str == NULL)
{
exit (98);
}
return (str);
}
