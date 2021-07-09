#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * _memcpy - check the code for Alx school students.
 * @n: argument of function.
 * @src: argument of function.
 * @dest: argument of function.
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
