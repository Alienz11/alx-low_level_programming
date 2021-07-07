#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _strlen_recursion - Using recursion to print out strings.
 * @s: character argument of function.
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)

{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
