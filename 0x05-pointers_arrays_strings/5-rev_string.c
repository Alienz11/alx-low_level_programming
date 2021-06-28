#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * rev_string - check the code for Alx school students.
 * @s: argument of function.
 * Return: Always 0 (Success)
 */

void rev_string(char *s)

{
int v;
int x;
int i;
v = strlen(s);
for (i = 0; i < v / 2; i++)
{
x = s[i];
s[i] = s[v - i - 1];
s[v - i - 1] = x;
}
}
