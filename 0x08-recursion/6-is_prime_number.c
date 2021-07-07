#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "holberton.h"
/**
 * is_prime_number - prints a string
 * @n: int argument
 *
 *
 * Return: 1
 */

int is_prime_number(int n)
{
if (n < 0 || n == 1)
return (0);
else
return (primecheck(n, 2, n / 2));
}

/**
 * primecheck - check for prime number
 * @n: Number to check
 * @i: divisor
 * @limit: half of n set as limit
 * Return: 1
 */

int primecheck(int n, int i, int limit)
{
if (n % i == 0 && i <= limit)
return (0);
else if (n % i != 0 && i <= limit)
return (primecheck(n, i + 1, limit));
else
return (1);
}
