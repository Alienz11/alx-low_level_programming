#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * print_line - check the code for Alx school students.
 * @c: argument of function.
 * @n: argument of function.
 * Return: Always 0 (Success)
 */

void print_line(int n)

{

int c;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (c = 1; c <= n; c++)
{
_putchar('_');
}
_putchar('\n');
}
}
