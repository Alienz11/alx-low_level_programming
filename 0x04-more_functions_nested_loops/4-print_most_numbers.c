#include <stdio.h>
#include "holberton.h"

/**
 * print_most_numbers - code to print for digits
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
if (c != '2' && c != '4')
{
putchar(c);
}
}
putchar('\n');
}
