#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * reverse_array - check the code for Alx school students.
 * @a: argument of function.
 * @n: argument of function.
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)

{
int j;
int i = 0;

while (i < n)
{
j = a[i];
a[i] = a[n - 1];
a[n-1] = j;
i++;
n--;
}
}
