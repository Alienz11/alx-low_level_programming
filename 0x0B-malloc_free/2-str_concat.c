#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * str_concat - check the code for Alx school students.
 * @s1: argument of function.
 * @s2: argument of function.
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
char *s3, *empty;
int i, len1, len2, j;

empty = "";
if (s1 == NULL)
s1 = empty;
if (s2 == NULL)
s2 = empty;
i = len1 = len2 = 0;
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
len2++;
s3 = malloc((len1 + len2) *(sizeof(*s1)));
if (s3 == NULL)
return (NULL);
i = 0;
while (i < len1)
{
s3[i] = s1[i];
i++;
}
j = 0;
while (j <= len2)
{
s3[i] = s2[j];
i++;
j++;
}
return (s3);
}
