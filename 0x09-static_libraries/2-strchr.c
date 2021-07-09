#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * _strchr - check the code for Alx school students.
 * @s: argument of function.
 * @c: argument of function.
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)

{

for ( ; *s != '\0'; s++)
{
if (*s == c)
{
return (s);
}
}
if (*s == c)
{
return (s);
}
else
{
return ('\0');
}
}
