#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * _puts - check the code for Alx school students.
 * char - check the code for Alx school students.
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)

{
char str[] = {"I fear the lack of them - Isaac Asimov"};
int i;

for (i = 0; str[i] >= 0; i++)
{
_putchar(i);
}
_putchar('\n');
}
