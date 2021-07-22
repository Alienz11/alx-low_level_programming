#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers with seperators.
 * @n: argument of function.
 * @separator: argument of function.
 * Return: Always 0 (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i, list;

va_start(ap, n);
separator = ",";
for (i = 0; i < n; i++)
{
list = va_arg(ap, unsigned int);
printf("%d", list);
if (i >= (n - 1) || separator == NULL)
{
break;
}
printf("%s ", separator);
}
printf("\n");
va_end(ap);
}
