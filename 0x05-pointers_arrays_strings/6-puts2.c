#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * puts2 - check the code for Alx school students.
 * @str: argument of function.
 * Return: void
 */

void puts2(char *str)

{
int i;
for (i = 0; str[i] != 0; i++)
{
if (i % 2 == 1)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
