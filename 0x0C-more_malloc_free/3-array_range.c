#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * array_range - check the code for Alx school students.
 * @min: argument of function.
 * @max: argument of function.
 * Return: Always 0 (Success)
 */

int *array_range(int min, int max)
{
int i;
int *str;
int size;

if (min > max)
{
return (NULL);
}

size = ((max - min) + 1);
str = malloc(size * (sizeof(int)));
if (str == NULL)
{
return (NULL);
}
i = 0;
while (i < size)
{
str[i] = min;
i++;
min++;
}
return (str);
}
