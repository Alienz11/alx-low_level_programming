#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * _isupper - check the code for Alx school students.
 * @c: argument of function.
 * Return: Always 0 (Success)
 */

int _isupper(int c)

{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
