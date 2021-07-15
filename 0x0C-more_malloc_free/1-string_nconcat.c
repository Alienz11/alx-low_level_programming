#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"
/**
 * string_nconcat - check the code for Alx school students.
 * @n: argument of function.
 * @s1: argument of function.
 * @s2: argument of function.
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, i, j;
char *empty, *s3, *s4;
empty = "";
if (s1 == NULL)
{
s1 = empty;
}
if (s2 == NULL)
{
s2 = empty;
}
i = len1 = len2 = 0;
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
if (n >= len2)
{
s4 = malloc((len2)*(n));
return (s4);
}
s3 = malloc((len1 + len2)*(n));
if (s3 == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
s3[i] = s1[i];
}
for (j = 0; j <= len2; i++, j++)
{
s3[i] = s2[j];
}
s3[i] = '\0';
return (s3);
}
