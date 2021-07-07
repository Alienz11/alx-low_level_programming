#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _sqrt_recursion - prints the square root of a number
 * @n: String argument
 *
 *
 * Return: square root value
 */

int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
else if (n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (squarecheck(n, 1));
}
}

/**
 * squarecheck - check for square value for n
 * @n: number
 * @j: value to increment
 * Return: j
 */

int squarecheck(int n, int j)
{
if (n == (j * j))
{
return (j);
}
else if (n > (j * j))
{
return (squarecheck(n, j + 1));
}
else
{
return (-1);
}
}
