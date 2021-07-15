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
unsigned int i, j, len1 = n;
unsigned int len2 = 0;
char *s3;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
len1++;
for (j = 0; s2[j] != '\0'; j++)
len2++;
s3 = malloc(sizeof(char) * (len1 + 1));
if (s3 == NULL)
return (NULL);
len1 = 0;
for (i = 0; s1[i]; i++)
s3[len1++] = s1[i];
for (j = 0; s2[j] && i < n; j++)
s3[len1++] = s2[j];
s3[len1] = '\0';
return (s3);
}
