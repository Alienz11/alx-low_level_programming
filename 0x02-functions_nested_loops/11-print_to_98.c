#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * print_to_98 - print all natural numbers from n to 98.
 * @c: the number to start counting from to 98
 * Return: void returns nothing.
 */
void print_to_98(int c)
{
if (c < 98)
{
for (c = c; c < 98; c++)
printf("%d, ", c);
printf("%d\n", 98);
}
else
{
for (c = c; c > 98; c--)
printf("%d, ", c);
printf("%d\n", 98);
}
}
