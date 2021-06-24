#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * main - check the code for Alx school students.
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
int i;

for (i = 0; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", i);
}
}
return (0);
}
