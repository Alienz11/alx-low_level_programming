#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * print_diagonal - code to print backslashes to make a diagonal line.
 * @n: Int for argument of the function
 * Return: Always 0.
 */
void print_diagonal(int n)

{
int c, v;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (j = 1; j < i; j++)
{
_putchar(' ');
}
for (c = 1; c <= n; c++)
{
_putchar('\\');
_putchar('\n');
}
}
}
