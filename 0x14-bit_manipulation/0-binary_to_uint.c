#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - Function that converts Binary to Decimals.
 * @b: argument of function.
 * Return: Always 0 (Success)
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int dec_value = 0;
unsigned int i, len = 0;

if (b == NULL)
{
return (0);
}

for (i = 0; b[i] != '\0'; i++, len++)
{
if (!(b[i] == '0' || b[i] == '1'))
return (0);
}

for (i = 0; b[i] != '\0'; i++)
dec_value += ((b[i] - '0') * (1 << (len - i - 1)));

return (dec_value);
}
