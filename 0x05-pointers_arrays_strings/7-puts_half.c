#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * puts_half - check the code for Alx school students.
 * @str: argument of function.
 * Return: void
 */

void puts_half(char *str)

{
int i;
if (i % 2 == 0)
{
for (i = i / 2; i <= str[i] - 1; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = (i / 2) + 1; i <= str[i] - 1; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
