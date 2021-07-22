#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints numbers with seperators.
 * @n: argument of function.
 * @separator: argument of function.
 * Return: Always 0 (Success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *list;

va_start(ap, n);

for (i = 0; i < n; i++)
{
list = va_arg(ap, char *);
if (list == NULL)
{
printf("(nil)");
}
else
{
printf("%s", list);
}
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
