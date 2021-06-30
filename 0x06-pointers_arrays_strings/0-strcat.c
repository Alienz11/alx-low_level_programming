
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * _strncat - check the code for Alx school students.
 * @src: argument of function.
 * @dest: argument of function.
 * @n: argument of function.
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)

{
int j;
int lenght;
lenght = 0;
for (n = 0; src[n] != '\0'; n++)
{
src[n] = lenght;
}
for (j = 0; dest[j] != '\0'; j++)
{
src[lenght++] = dest[j];
}
return (dest);
}
