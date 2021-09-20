#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _strncat - check the code for Alx school students.
 * @n: argument of function.
 * @dest: argument of function.
 * @src: argument of function.
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)

{
int y;
int i = 0;

for (y = 0; dest[y] != '\0'; y++)
{
}
while (i < n  && src[i] != '\0')
{
dest[y] = src[i];
i++;
y++;
}
return (dest);
}
