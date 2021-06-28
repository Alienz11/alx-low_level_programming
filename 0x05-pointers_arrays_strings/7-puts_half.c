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
for (i = 0; str[i] != 0; i++)
{
if (i >= str[i] / 2)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
