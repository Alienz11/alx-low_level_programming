#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _memset - check the code for Alx school students.
 * @n: argument of function.
 * @s: argument of function.
 * @b: argument of function.
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)

{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
