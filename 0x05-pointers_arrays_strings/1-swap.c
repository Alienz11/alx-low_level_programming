#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * swap_int - Function that swaps the value of variables by derefrencing
 * @a: argument of function.
 * @b: argument of function.
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)

{
int i = *a;
*a = *b;
*b = i;
}
