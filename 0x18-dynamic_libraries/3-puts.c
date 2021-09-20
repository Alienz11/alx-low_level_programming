#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * _puts - check the code for Alx school students.
 * @str: string value neccesary for the argument.
 *
 * Return: void
 */

void _puts(char *str)

{
int i;

for (i = 0; str[i] != 0; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
