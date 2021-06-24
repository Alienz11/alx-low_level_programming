#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * print_line - code to print for digits
 * @n: Int for argument of the function
 * Return: Always 0.
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
