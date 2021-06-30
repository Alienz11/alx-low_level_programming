
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * _strcat - check the code for Alx school students.
 * @src: argument of function.
 * @dest: argument of function.
 * @n: argument of function.
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)

{
int j;
int n;
for (n = 0; src[n] != '\0'; n++)
{
}
for (j = 0; dest[j] != '\0'; j++)
{
src[n] = dest[j];
}
return (dest);
}
