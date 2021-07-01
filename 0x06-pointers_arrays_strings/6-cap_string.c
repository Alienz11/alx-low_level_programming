#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * cap_string - check the code for Alx school students.
 *
 * @str: Name of array
 * Return: Always 0 (Success)
 */

char *cap_string(char *str)

{
int c, v;
char sym[] = " \t\n,;.!?\"(){}";

c = 1;
if (str[0] >= 'a' && str[0] <= 'z')
str[0] -= ('a' - 'A');
while (str[c] != '\0')
{
for (v = 0; sym[v] != '\0'; v++)
if (str[c - 1] == sym[v] && (str[c] >= 'a' && str[c] <= 'z'))
str[c] -= ('a' - 'A');
c++;
}
return (str);
}
