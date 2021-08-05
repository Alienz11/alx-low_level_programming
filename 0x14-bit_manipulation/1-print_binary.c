#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_binary - Function that converts Decimals to Binary.
 * @n: argument of function.
 * Return: Always 0 (Success)
 */

void print_binary(unsigned long int n)
{
if (n < 2)
_putchar(n + '0');
else
{
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
}
