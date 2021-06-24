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
for (c = 1; c <= n; c++)
{
for (v = 1; v < c; v++)
{
_putchar(' ');
{
_putchar('\\');
_putchar('\n');
}
}
}
