#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * _strcat - check the code for Alx school students.
 * @src: argument of function.
 * @dest: argument of function.
 *
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)

{
int x;
int y;

for (x = 0; src[x] != '\0'; x++)
{
}
for (y = 0; dest[y] != '\0'; y++)
{
x++;
dest[y] = src[x];
}
return (dest);
}
