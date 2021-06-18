#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
int fd;
int md;
int ld;
for (int c = 0; c < 1000; c++)
{
fd = (c / 100 + '0');
md = (c / 10 % 10 + '0');
ld = (c % 10 + '0');
if ((fd < md)&&(md < ld))
{
putchar(fd);
putchar(md);
putchar(ld);
if (c < 789)
{
putchar(',');
putchar(' ');
}
}
c++;
}
putchar('\n');
return (0);
}
