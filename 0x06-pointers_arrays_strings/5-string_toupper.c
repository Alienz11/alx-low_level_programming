#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * string_toupper - check the code for Alx school students.
 *
 * @str: Name of array
 * Return: Always 0 (Success)
 */

char *string_toupper(char *str)

{
int c;
for (c = 0; str[c] != '\0'; c++)
{
if (str[c] >= 'a' && str[c] <= 'z')
{
str[c] = str[c] - 32;
}
}
return (str);
}
