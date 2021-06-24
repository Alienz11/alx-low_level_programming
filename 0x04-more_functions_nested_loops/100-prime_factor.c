#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code for Alx school students.
 * main - Prints out the larget prime factor of 612852475143
 * Return:return 0 with success.
 */

int main(void)
{
long i;
long num = 612852475143;

for (i = 2; i < num; i++)
{
if (num % i == 0)
num /= i;
}
printf("%li\n", num);
return (0);
}
