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
int y = 0;

for (x = 0; dest[x] != '\0'; x++)
{
}
while (src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}
return (dest);
}
