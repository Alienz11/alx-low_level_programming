#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: number
 * @m: other number
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int shift = (sizeof(n) * 8);
int dist = 0;
while (shift--)
dist += (n >> shift & 1) != (m >> shift & 1);
return (dist);
}
