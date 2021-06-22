#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * print_to_98 - check the code for Alx school students.
 * @n: argument of function.
 * Return: Always 0 (Success)
 */

void print_to_98(int n)

{
for (n = 0; n <= 98; n++)
{
_putchar(n);
if (n <= 97)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
