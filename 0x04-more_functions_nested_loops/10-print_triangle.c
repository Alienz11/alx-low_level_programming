#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * print_triangle - code to print triangle
 * @size: Int for argument of the function
 * Return: Always 0.
 */
void print_triangle(int size)
{
int c;
int v;
int b;

if (size <= 0)
{
_putchar('\n');
}
for (c = 0; c <= (size - 1); c++)
{
for (v = 0; v < (size - 1) - c; v++)
{
_putchar(' ');
}
for (b = 0; b <= c; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
