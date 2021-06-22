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
_putchar('+');
return (+1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
