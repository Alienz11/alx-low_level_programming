#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "holberton.h"

/**
 * factorial - Using recursion to print out strings.
 * @n: character argument of function.
 * Return: Always 0 (Success)
 */

int factorial(int n)

{

if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
