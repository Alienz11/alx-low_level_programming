#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"
/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
int x, y, res;
if (!(n > 15 || n < 0))
{
for (x = 0; x <= n; x++)
{
for (y = 0; y <= n; y++)
{
res = (x * y);
if (y != 0)
{
_putchar(',');
_putchar(' ');
}
if (res < 10 && y != 0)
{
_putchar(' ');
_putchar(' ');
_putchar((res % 10) + '0');
}
else if (res >= 10 && res < 100)
{
_putchar(' ');
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
else if (res >= 100 && y != 0)
{
_putchar((res / 100) + '0');
_putchar((res / 10) % 10 + '0');
_putchar((res % 10) + '0');
}
else
_putchar((res % 10) + '0');
}
_putchar('\n');
}
}
}
