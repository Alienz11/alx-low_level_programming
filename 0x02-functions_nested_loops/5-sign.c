#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * print_sign - check the code for Alx school students.
 * @n: argument of function.
 * Return: Always 0 (Success)
 */

int print_sign(int n)

{
if (n > 0)
{
return (1);
_putchar('+');
}
else if (n == 0)
{
return (0);
_putchar('0');
}
else
{
return (-1);
_putchar('-');
}
_putchar('\n');
}
