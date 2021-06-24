#include <stdio.h>
#include "holberton.h"

/**
 * print_numbers - a code to print out numbers.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
}
