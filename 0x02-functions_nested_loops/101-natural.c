#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of
 * 3 or 5 below 1024.
 * Return: Nothing.
 */

int main(void)
{
int n, res;
for (n = 0; n < 1024; n++)
if (n % 3 == 0 || n % 5 == 0)
res += n;
printf("%d\n", res);
return (0);
}
