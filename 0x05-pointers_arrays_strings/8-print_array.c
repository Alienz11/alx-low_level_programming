#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * print_array - check the code for Alx school students.
 * @n: argument of function.
 * @a: argument of function.
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)

{
int x;

for (x = 0; x < n; x++)
{
if (x == (n - 1))
{
printf("%d", *a);
a++;
}
else
{
printf("%d, ", *a);
a++;
}
}
printf("\n");
}
