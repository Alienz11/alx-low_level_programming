#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _islower - check the code for Alx school students.
 * @c: argument of function.
 * Return: Always 0 (Success)
 */

int _islower(int c)

{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
