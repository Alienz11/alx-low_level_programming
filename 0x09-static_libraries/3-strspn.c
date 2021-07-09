#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * _strspn - check the code for Alx school students.
 * @s: argument of function.
 * @accept: argument of function.
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)

{
unsigned int i;
unsigned int k;
int boolean;

for (i = 0; s[i] != '\0'; i++)
{
boolean = 0;
for (k = 0; accept[k] != '\0'; k++)
{
if (s[i] == accept[k])
{
boolean = 1;
}
}
k = 0;
if (boolean == 0)
{
break;
}
}
return (i);
}
