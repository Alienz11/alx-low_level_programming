#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * puts_half - check the code for Alx school students.
 * @str: argument of function.
 * Return: void
 * Description: If odd number of chars, print (length - 1) / 2
 */

void puts_half(char *str)

{
int i;

for (i = 0; str[i] != '\0'; i++)
i++;
for (i /= 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
