#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _puts_recursion - Using recursion to print out strings.
 * @s: character argument of function.
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
_putchar(*s);
}
_puts_recursion(s + 1);
_putchar('\n');
}
