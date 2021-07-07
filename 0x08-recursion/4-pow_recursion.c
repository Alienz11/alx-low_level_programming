#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _pow_recursion - Using recursion to raise numbers to various powers of.
 * @x: character argument of function.
 * @y: character argument of function.
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)


{

if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
