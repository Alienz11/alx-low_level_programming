#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * _abs - check the code for Alx school students.
 * @c: argument of function.
 * Return: Always 0 (Success)
 */

int _abs(int c)

{
if (c < 0)
{
return (c * -1);
}
else
{
return (c);
}
}
