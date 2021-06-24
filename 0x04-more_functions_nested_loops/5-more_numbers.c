#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * more_numbers - check the code for Alx school students.
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)

{
int n;
int c;

for (c = 0; c <= 9; c++)
{
for (n = 0; n <= 14; n++)
{
if (n >= 10)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}
