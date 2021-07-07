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
int i = 0;
int j;

while (i < *s)
{
j = s[i];
s[i] = s[i - 1];
s[i - 1] = j;
i++;
s--;
}
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_print_rev_recursion(s + 1);
}
}
