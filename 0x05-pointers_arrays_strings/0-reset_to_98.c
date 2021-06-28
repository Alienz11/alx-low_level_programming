#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * reset_to_98 - check the code for Alx school students.
 * @n: argument of function.
 *
 * Return: Always 0 (Success)
 */

void reset_to_98(int *n)

{
int i;

i = 402;
n = &i;
printf("n=%d\n", i);
*n = 98;
printf("n=%d\n", i);
}
