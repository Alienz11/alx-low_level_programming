#include "holberton.h"
/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
int divisor;
char digit, significant_zero = 0;

if (n < 0)
_putchar('-');

for (divisor = 1000000000; divisor != 0; divisor /= 10)
{
digit = n / divisor;
digit = digit < 0 ? -digit : digit;
n %= divisor;

if (!digit && !significant_zero && divisor != 1)
continue;
significant_zero = significant_zero || digit != 0;
_putchar(digit + '0');
}
}
