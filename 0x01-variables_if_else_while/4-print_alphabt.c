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
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' && ch == 'q')
putchar(ch);
continue;
}
putchar('\n');
return (0);
}
