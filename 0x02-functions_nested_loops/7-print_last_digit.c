#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * print_last_digit - check the code for Alx school students.
 * @c: argument of function.
 * Return: Always 0 (Success)
 */

int print_last_digit(int c)
{

if (c >= 0)
{
_putchar(c % 10);
return (c % 10);
}
else
{
_putchar(c * -1);
return (c * -1);
}
}
