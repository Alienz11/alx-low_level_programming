#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _strncpy - check the code for Alx school students.
 * @n: argument of function.
 * @src: argument of function.
 * @dest: argument of function.
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)

{
int i = 0;

while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i++] = '\0';
}
return (dest);
}
