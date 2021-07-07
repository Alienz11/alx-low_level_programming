#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _print_rev_recursion - Using recursion to print out strings.
 * @s: character argument of function.
 * Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)

{

if (*s == '\0')
{
_putchar('\n');
}
else
{
_print_rev_recursion(s - 1);
_putchar(*s);
}
}
