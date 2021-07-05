#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * _strpbrk - check the code for Alx school students.
 * @s: argument of function.
 * @accept: argument of function.
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)

{
unsigned int k;

for ( ; *s; s++)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
{
return (s);
}
}
}
return ('\0');
}
