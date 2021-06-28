#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int pass[100];
int x, sum, v;

sum = 0;
srand(time(NULL));
for (x = 0; x < 100; x++)
{
pass[x] = rand() % 78;
sum += (pass[x] + '0');
putchar(pass[x] + '0');
if ((2772 - sum)-'0' < 78)
{
v = 2772 - sum - '0';
sum += v;
putchar(v + '0');
break;
}
}
return (0);
}
