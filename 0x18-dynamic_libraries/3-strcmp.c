#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _strcmp - check the code for Alx school students.
 *
 * @s2: argument of function.
 * @s1: argument of function.
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)

{
int i;

for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] > s2[i])
{
return (s1[i] - s2[i]);
}
if (s1[i] < s2[i])
{
return (s1[i] - s2[i]);
}
}
return (0);
}
