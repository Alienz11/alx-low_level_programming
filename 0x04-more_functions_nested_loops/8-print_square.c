#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * print_square - a function that draws a square with # sign on the terminal
 * @size: input number of times '\' should be printed
 * Return: a diagonal
 */

void print_square(int size)
{
int c, v;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (c = 1; c <= size; c++)
{
  for (v = 1; v <= size; v++)
{
_putchar('#');
}
_putchar('#');
_putchar('\n');
}
}
}
