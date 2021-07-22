#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that sums all elements in an array.
 * @n: argument of function.
 * Return: Always 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;

va_start(ap, n);

for (i = 0; i < n; i++)
{
if (n == 0)
{
return (0);
}
sum += va_arg(ap, int);
}
va_end(ap);
return (sum);
}
