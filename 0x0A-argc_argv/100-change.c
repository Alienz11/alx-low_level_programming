#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"
#include <ctype.h>

/**
 * main - To creat a function that names the file even when renamed.
 * @argc: argument of function.
 * @argv: argument of function.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int cent;
int change;

if (argc == 2)
{
if (atoi(argv[1]) > 0)
{
cent = atoi(argv[1]);
for (change = 0; cent > 0; change++)
{
if ((cent - 25) >= 0)
{
cent -= 25;
continue;
}
if ((cent - 10) >= 0)
{
cent -= 10;
continue;
}
if ((cent - 5) >= 0)
{
cent -= 5;
continue;
}
if ((cent - 2) >= 0)
{
cent -= 2;
continue;
}
if ((cent - 1) >= 0)
{
cent -= 1;
continue;
}
cent--;
}
printf("%d\n", change);
}

else
{
printf("0\n");
}
}

else
{
printf("Error\n");
return (1);
}
return (0);
}
