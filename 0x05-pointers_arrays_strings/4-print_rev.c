#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * print_rev - check the code for Alx school students.
 * @s: argument of function.
 * Return: void
 */

void print_rev(char *s)

{
int i;
for (i = '\0'; s[i] != 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
